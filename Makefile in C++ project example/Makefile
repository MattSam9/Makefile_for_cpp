# -*- Makefile -*-

.DEFAULT_GOAL = $(TARGET)
.PHONY: clean

## Variables
GXX = g++
XX = gcc
HD = ./src/include
OBJS = ./src/objects
LIB = ./src/libs
CFLAGS = -Wall -Wextra -Wconversion -std=c2x -g3 -pedantic-errors -I $(HD)
CXXFLAGS = -Wall -Wextra -Wconversion -std=c++2a -g3 -pedantic-errors -I $(HD)
TARGET = main



$(OBJS)/main.o: main.cpp $(HD)/source.hpp
	@$(GXX) -c $(CXXFLAGS) $< -o $@


$(OBJS)/source.o: source.cpp $(HD)/source.hpp
	@$(GXX) -c $(CXXFLAGS) $< -o $@

clean:
	@rm main $(OBJS)/*.o

## Targets
$(TARGET): $(OBJS)/main.o $(OBJS)/source.o
	@$(GXX) -L $(LIB) $^ -o $@



