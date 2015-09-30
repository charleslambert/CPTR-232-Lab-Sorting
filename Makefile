all: sort.o bubbleSort.o insertSort.o selectSort.o mergeSort.o helperFunctions.o
	$(CC) -o sort sort.o bubbleSort.o insertSort.o selectSort.o mergeSort.o helperFunctions.o

run:
	./sort

clean:
	rm -f sort test *.o *.obj *.lst

test: test.o bubbleSort.o selectSort.o insertSort.o mergeSort.o helperFunctions.o
	$(CC) -o test test.o bubbleSort.o selectSort.o insertSort.o mergeSort.o helperFunctions.o
	./test
	rm -f test