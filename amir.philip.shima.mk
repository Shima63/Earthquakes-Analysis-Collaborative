# Compiler

CC = g++

# Flags to the compiler

CFLAGS = -Wall

all: H8

H7: amir.philip.shima.cpp
	$(CC) $(CFLAGS) print.cpp earthquake.cpp station.cpp amir.philip.shima.cpp -o amir.philip.shima 

clean:
	rm -rf amir.philip.shima
