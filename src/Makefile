.PHONY: all clean tests check valgrind_check gcov_report dvi dist rebuild install uninstall 

CC=gcc 
CFLAGS=-c -std=c11
LDFLAGS=#-Wall -Wextra -Werror 
LIBFLAGS=`pkg-config --cflags --libs check` -lm -lcheck
CFILES=test.c s21_smart_calc.c s21_polish_notation.c s21_parser.c s21_stack.c s21_data_type.c 
OFILES=$(CFILES:.c=.o)
TARGET=tests
DIST_DIR=s21_SmartCalc-1.0
INST_DIR=s21_smart_calc

default: rebuild

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OFILES)
	$(CC) $(LDFLAGS) $(OFILES) -o $(TARGET) $(LIBFLAGS)

%.o: %.c
	$(CC) $(LDFLAGS) $(CFLAGS)  $<

valgrind_check:
	$(CC) -O0 -g  $(LDFLAGS) $(CFILES) -o $(TARGET) $(LIBFLAGS)
	valgrind --leak-check=full --track-origins=yes ./$(TARGET) -n file
	valgrind --tool=memcheck --leak-check=full --track-origins=yes ./$(TARGET) -n file

gcov_report: 
	$(CC) --coverage $(LDFLAGS) $(CFILES) -o $(TARGET) $(LIBFLAGS)
	./$(TARGET)
	lcov -t "$(TARGET)" -o $(TARGET).info -c -d ./ --no-external
	genhtml -o report $(TARGET).info
	open report/index.html
	rm -rf *.gcno *.gcda *.info 

check: 
	CK_FORK=no leaks --atExit -- ./$(TARGET)
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	rm -rf *.o *.out *.cfg
	
install:
	mkdir $(INST_DIR)
	cd $(INST_DIR); qmake ../qt/$(INST_DIR)/$(INST_DIR).pro
	cd $(INST_DIR); make
	cd $(INST_DIR); make clean
	open $(INST_DIR)

uninstall: 
	rm -r $(INST_DIR)

dist:
	mkdir $(DIST_DIR)
	mkdir $(DIST_DIR)/qt
	cp *.c *.h Makefile $(DIST_DIR)
	cp -R qt $(DIST_DIR)
	tar --totals -cvf $(DIST_DIR).tar $(DIST_DIR)
	rm -rf $(DIST_DIR)

dvi:
	makeinfo manual.texi --html
	open ./manual/index.html 

clean:
	rm -rf $(TARGET)  s21_calc *.a *.o *.out *.cfg fizz *.gc* *.info report CPPLINT.cfg $(DIST_DIR).tar $(INST_DIR) 
	rm -rf *.o *.out *.cfg *.tar manual

rebuild: clean all 
