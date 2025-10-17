# Makefile for COS 110 - Project 3: Counter with Increment/Decrement

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -pedantic
TARGET = main
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o

valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

.PHONY: all run clean valgrind
