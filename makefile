ex7: ex7.o math_utils.o
	gcc -o ex7 ex7.c math_utils.o

ex7.o: ex7.c
	gcc -c ex7.c math_utils.h

math_utils.o: math_utils.c math_utils.h
	gcc -c math_utils.c
