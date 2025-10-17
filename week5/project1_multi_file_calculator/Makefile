# Makefile for Calculator Project
# COS 110 Week 5 - Project 1

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98

# Target executable
TARGET = calculator

# Source files
SOURCES = main.cpp calculator.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean compiled files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Rebuild from scratch
rebuild: clean all

# Phony targets (not actual files)
.PHONY: all run clean rebuild
