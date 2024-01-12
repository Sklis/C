CC= gcc
CFLAGS= -Wall -Werror -Wextra -std=c11
PROJECT_NAME= s21_math
CHECKFL = $(shell pkg-config --cflags --libs check)

.PHONY: all clean rebuild

all:
	$(MAKE) $(PROJECT_NAME).a


$(PROJECT_NAME).a:
	$(CC) -c $(CFLAGS) $(PROJECT_NAME).c
	ar rc $@ $(PROJECT_NAME).o
	ranlib $@

$(PROJECT_NAME).o: $(PROJECT_NAME).c $(PROJECT_NAME).h
	$(CC) $(CFLAGS) -c -o $@ $<


gcov_report:
	# checkmk $(PROJECT_NAME).check > $(PROJECT_NAME)_test.c
	$(CC) -c $(CFLAGS) $(PROJECT_NAME)_test.c -o $(PROJECT_NAME)_test.o
	$(CC) $(CFLAGS) --coverage $(PROJECT_NAME)_test.o $(PROJECT_NAME).c -o s21_test $(CHECKFL)
	./s21_test
	lcov -d ./ --capture --output-file s21_test.info
	genhtml s21_test.info --output-directory report
	open ./report/index.html

test:
	$(MAKE) $(PROJECT_NAME).a
	# checkmk $(PROJECT_NAME).check > $(PROJECT_NAME)_test.c
	gcc $(CFLAGS) $(PROJECT_NAME)_test.c $(PROJECT_NAME).a  -o s21_test $(CHECKFL)
	./s21_test


clean:
	rm -rf *.o *.a *.so *.out $(PROJECT_NAME) s21_test report
	rm -rf ../../build/$(PROJECT_NAME)
	rm -rf core.* log.txt *.gcda *.gcno *.gch *.info
	rm -rf *.log

rebuild:
	$(MAKE) clean
	$(MAKE) all

clangMakeRight:
	cp ../materials/linters/.clang-format ../
	clang-format -i *.c *.h
	clang-format -n *.c *.h

clangTest:
	cp ../materials/linters/.clang-format ../
	clang-format -n *.c *.h

valgrind:
	valgrind -s --leak-check=full --show-leak-kinds=all --track-origins=yes ./s21_test > valgrind.log

cppcheck:
	cppcheck --enable=all --inconclusive --library=posix --suppress=missingIncludeSystem *.c *.h
