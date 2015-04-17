# Compiler

CC = g++

# Flags to the compiler

CFLAGS =

all: H8

H8: amir.philip.shima.cpp
	$(CC) $(CFLAGS) print.cpp earthquake.cpp station.cpp amir.philip.shima.cpp -o amir_philip_shima

clean:
	rm -rf amir.philip.shima
