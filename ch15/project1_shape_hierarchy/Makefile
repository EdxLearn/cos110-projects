# COS 110 - Project 1: Shape Hierarchy
# Makefile for easy compilation

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
LDFLAGS = -lm

# Targets
TARGET = shape_hierarchy
SOLUTION = shape_hierarchy_solution

# Source files
MAIN = main.cpp
SOLUTION_SRC = solution.cpp

# Default target
all: $(TARGET)

# Compile student version
$(TARGET): $(MAIN)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(MAIN) $(LDFLAGS)

# Compile solution
solution: $(SOLUTION_SRC)
	$(CXX) $(CXXFLAGS) -o $(SOLUTION) $(SOLUTION_SRC) $(LDFLAGS)

# Run student version
run: $(TARGET)
	./$(TARGET)

# Run solution
run-solution: solution
	./$(SOLUTION)

# Clean compiled files
clean:
	rm -f $(TARGET) $(SOLUTION) *.o

# Help
help:
	@echo "Available targets:"
	@echo "  make          - Compile student version"
	@echo "  make solution - Compile solution"
	@echo "  make run      - Compile and run student version"
	@echo "  make run-solution - Compile and run solution"
	@echo "  make clean    - Remove compiled files"

.PHONY: all solution run run-solution clean help
