# Makefile for your project

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Source files
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/mymath.cpp

# Object files (generated from source files)
OBJECTS = $(SOURCES:.cpp=.o)

# Target binary (executable file)
TARGET = $(BIN_DIR)/myprogram

# Default target - build the executable
all: $(TARGET)

# Link the object files into the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Declare targets that don't correspond to files
.PHONY: all clean run

