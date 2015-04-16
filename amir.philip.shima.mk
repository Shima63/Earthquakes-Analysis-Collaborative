# <--- amir.philip.shima Makefile --->   

# Compiler

CC = g++

# Flags to the compiler

CFLAGS = -Wall

OBJECTS = amir_philip_shima

all: amir_philip_shima

amir_philip_shima: amir.philip.shima.o earthquake.o station.o
	${CC} -o amir_philip_shima amir.philip.shima.o earthquake.o station.o

amir.philip.shima.o: amir.philip.shima.cpp
	${CC} -c amir.philip.shima.cpp

earthquake.o: earthquake.cpp
	${CC} -c earthquake.cpp

station.o: station.cpp
	${CC} -c station.cpp 

clean:
	rm -rf ${OBJECTS}
	
