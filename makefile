XXFLAGS = -Wall -Werror

all: build

build:
	g++ --std=c++1z F_Templates_An_Important_Note.cpp -o launch.o

run: build
	./launch.o

#http://web.engr.oregonstate.edu/~rubinma/Mines_274/Content/06_makefile.html
