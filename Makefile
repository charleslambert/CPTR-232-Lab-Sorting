all: sort.o
	$(CC) -o sort sort.o

run:
	./main

clean:
	rm -f main test *.o *.obj *.lst

test: test.o bubbleSort.o
	$(CC) -o test test.o bubbleSort.o
	./test
	rm -f test