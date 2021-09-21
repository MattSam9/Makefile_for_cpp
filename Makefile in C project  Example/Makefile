# -*- Makefile -*-

.DEFAULT_GOAL := all

all: geom tip

HD := include
OB := objects


geom: $(OB)/geom.o $(OB)/gd.o
	gcc $(OB)/geom.o $(OB)/gd.o -o geom -l m

tip: $(OB)/tip.o $(OB)/gd.o
	gcc $(OB)/tip.o $(OB)/gd.o -o tip

$(OB)/geom.o: geom.c $(HD)/gd.h
	gcc -Wall -Wconversion -pedantic-errors -Wextra -std=c2x -g3 -I $(HD) -c geom.c -o $(OB)/geom.o

$(OB)/tip.o: tip.c $(HD)/gd.h 
	gcc -Wall -Wconversion -pedantic-errors -Wextra -std=c2x -g3 -I $(HD) -c tip.c -o $(OB)/tip.o

$(OB)/gd.o: gd.c $(HD)/gd.h
	gcc -Wall -Wconversion -pedantic-errors -Wextra -std=c2x -g3 -I $(HD) -c gd.c -o $(OB)/gd.o

clean: objectRemove exeRemove

objectRemove:
	rm $(OB)/geom.o $(OB)/tip.o $(OB)/gd.o

exeRemove:
	rm geom tip
