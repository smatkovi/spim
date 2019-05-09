main: main.o matrix_first.o
	g++ -std=c++0x -Wall main.o matrix_first.o -o main

ttt: ttt.o matrix_first.o
	g++ -std=c++0x -Wall -g3 -fsanitize=address main.o matrix_first.o -o ttt

main.o: main.cpp
	g++ -c main.cpp

ttt.o: ttt.cpp
	g++ -c ttt.cpp

matrix_first.o: matrix_first.cpp matrix_first.hpp
	g++ -c matrix_first.cpp

clean:
	rm *.o ttt main

all: main ttt
