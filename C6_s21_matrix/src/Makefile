UNAME:=$(shell uname -s)

ifeq ($(UNAME), Linux)
D_ENV=__LINUX__
endif
ifeq ($(UNAME), Darwin)
D_ENV=__MAC_OS__
endif

### C
CC=gcc
STAT_LIBC_BUILD=ar rcs

### src s21_matrix.a
STAT_LIBC_NAME=s21_matrix.a
CFLAGS=-Wall -Werror -Wextra -std=c11 -D$(D_ENV)
CLIBS_TEST=
HEADERS=s21_matrix.h
SOURCES=$(wildcard s21_*.c)

OBJECTS=$(SOURCES:.c=.o)

## tests
TESTS_NAME=tests.a
TESTS_CHECK=s21_matrix.check
SOURCES_TEST=test_matrix.c
OBJECTS_TEST=$(SOURCES_TEST :%.c=%.o)
CFLAGS_TEST=$(CFLAGS) $(shell pkg-config --cflags check) -g
CLIBS_TEST=-lcheck $(shell pkg-config --libs check)

### gcov
GCOV_NAME=gcov_report_tests.a
INFO_GCOV=gcov_report_tests.info
GCOV_DIR=tests_coverage
CFLAGS_GCOV=$(CFLAGS_TEST) -fprofile-arcs -ftest-coverage
CLIBS_GCOV=$(CLIBS_TEST)

### memory leaking
ifeq ($(UNAME), Linux)
LEAKS_CHECKING=valgrind -q --track-origins=yes --tool=memcheck --leak-check=full ./$(TESTS_NAME) ./$(STAT_LIBC_NAME) ./$(GCOV_NAME)
endif
ifeq ($(UNAME), Darwin)
LEAKS_CHECKING=CK_FORK=no leaks --atExit -- ./$(TESTS_NAME) ./$(STAT_LIBC_NAME) ./$(GCOV_NAME)
endif

### open
ifeq ($(UNAME), Linux)
OPEN=xdg-open
endif
ifeq ($(UNAME), Darwin)
OPEN=open
endif

### make

.PHONY: all clean gcov_report test html_rebuild check_rebuild

all: clean s21_matrix.a	clean_o
	make test
#	make gcov_report
#	make open_html

html_rebuild: clean gcov_report
test_rebuild: clean test

checking:
	-cppcheck $(SOURCES) $(HEADERS)
	
checking_leaks:
	-$(LEAKS_CHECKING)

### build
$(SOURCES_TEST): $(TESTS_CHECK)
	checkmk $(TESTS_CHECK) > $(SOURCES_TEST)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

### build s21_decimal.a
$(STAT_LIBC_NAME): $(OBJECTS)
	$(STAT_LIBC_BUILD) $(STAT_LIBC_NAME) $(OBJECTS)

### test
test: $(SOURCES_TEST)
	$(CC) $(CFLAGS_TEST) $(SOURCES) $(SOURCES_TEST) -o $(TESTS_NAME) $(CLIBS_TEST)

	-./$(TESTS_NAME)

### coverage
gcov_report: $(SOURCES) $(SOURCES_TEST)
	$(CC) $(SOURCES) $(SOURCES_TEST) -o $(GCOV_NAME) $(CFLAGS_TEST) $(CLIBS_TEST) --coverage
	-./$(GCOV_NAME) -lcov
	-mkdir $(GCOV_DIR)
	lcov -c -d . -o $(GCOV_DIR)/$(INFO_GCOV)
	genhtml -o $(GCOV_DIR)/results/ $(GCOV_DIR)/$(INFO_GCOV)

### clean
clean_gcov_report:
	# -@lcov -z -d .
	-@rm -f $(GCOV_NAME)

clean_test:
	-@rm -f $(SOURCES_TEST)

clean_s21_matrix:
	-@rm -f $(STAT_LIBC_NAME)

clean_o:
	-@rm -rf *.o

clean: clean_gcov_report clean_test clean_s21_matrix
	-@rm -rf $(GCOV_DIR)
	-@rm -f *.a
	-@rm -f *.o
	-@rm -f *.gcda
	-@rm -f *.gcno
	-@rm -f *.exe
	-@rm -f *.cfg

### open
open_html:
	$(OPEN) $(GCOV_DIR)/results/index.html

pover:
	$(CC) $(CFLAGS) pover.c $(SOURCES) -lm
	./a.out

### style
style:
	clang-format -n --style=google *.c *.h *.check

style_i:
	clang-format -i --style=google *.c *.h
	