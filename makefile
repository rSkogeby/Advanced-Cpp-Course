XXFLAGS = -Wall -Werror

all: build

build:
	g++ --std=c++1z E_A_Complex_Number_Class.cpp E_Complex.cpp E_Complex.h -o launch.o

run: build
	./launch.o

#http://web.engr.oregonstate.edu/~rubinma/Mines_274/Content/06_makefile.html
