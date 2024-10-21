# Makefile for Calculator Application

# Compiler to use
CC = gcc

# Target executable
TARGET = Calculator

# Source files
SRCS = Calculator.c Arithmetic.c

# Rule to build the target
$(TARGET): $(SRCS)
	$(CC) -o $(TARGET) $(SRCS)

# Rule to clean up generated files
clean:
	rm -f $(TARGET)
