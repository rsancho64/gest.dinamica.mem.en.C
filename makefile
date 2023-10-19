all: main.o buffer.o
	gcc main.o buffer.o -o main.exe

main.o: main.c
	gcc -c main.c

buffer.o: buffer.c
	gcc -c buffer.c

clean:
	rm -rf *.exe *.o a.out