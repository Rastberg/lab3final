#Makefile

all: zad1

zad1: main.o palindrom.o
	clang -o zad1 main.o palindrom.o -lm

main.o: main.c
		clang -c main.c
palindrom.o: palindrom.c
		clang -c palindrom.c

clean:
	rm -f main *.o *~	
			
	
	
