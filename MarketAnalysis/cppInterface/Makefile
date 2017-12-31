all: clean target1 target2
clean:
	rm -rf *.o *.so
target1:
	g++ -c -fpic marketclass.cpp
target2:
	g++ -shared -o libmarketclass.so marketclass.o
