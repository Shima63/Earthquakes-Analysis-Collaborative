# <--- amir.philip.shima Makefile --->   

# Compiler

CC = g++

# Flags to the compiler

CFLAGS = -Wall

OBJECTS = amir_philip_shima

all: amir_philip_shima

amir_philip_shima: amir.philip.shima.o earthquake.o station.o print.o
	${CC} -o amir_philip_shima amir.philip.shima.o earthquake.o station.o print.o

amir.philip.shima.o: amir.philip.shima.cpp
	${CC} -c amir.philip.shima.cpp

earthquake.o: earthquake.cpp
	${CC} -c earthquake.cpp

station.o: station.cpp
	${CC} -c station.cpp 

print.o: print.cpp
	${CC} -c print.cpp
    
clean:
	rm -rf ${OBJECTS}
