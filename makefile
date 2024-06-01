# Avi Patel, Spring Semester, CPSC 1010, 4-24-24, Periodic Table Assignment
# This assignment involves creating a makefile for the periodic table code.

a.out: driver.c init.c menu.c results.c defs.h
	gcc -Wall -o a.out driver.c init.c menu.c results.c -lm

# run had a dependency: a.out
# a.out comes from the first line, the compilation

run: a.out
	./a.out

clean:
	rm a.out

