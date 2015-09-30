all: sort.o bubbleSort.o insertSort.o selectSort.o helperFunctions.o
	$(CC) -o sort sort.o bubbleSort.o insertSort.o selectSort.o helperFunctions.o

run:
	./sort

clean:
	rm -f sort test *.o *.obj *.lst

test: test.o bubbleSort.o selectSort.o insertSort.o helperFunctions.o
	$(CC) -o test test.o bubbleSort.o selectSort.o insertSort.o helperFunctions.o
	./test
	rm -f test