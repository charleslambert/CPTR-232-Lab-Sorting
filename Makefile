all: sort.o bubbleSort.o insertSort.o selectSort.o
	$(CC) -o sort sort.o bubbleSort.o insertSort.o selectSort.o

run:
	./sort

clean:
	rm -f sort test *.o *.obj *.lst

test: test.o bubbleSort.o
	$(CC) -o test test.o bubbleSort.o
	./test
	rm -f test