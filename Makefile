# Source file and executable name
SRC = src/main.c
EXEC = main
BIN = bin/${EXEC}

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Default target (build and run)
all: $(BIN)
	./$(BIN)

# Compile the C code
$(BIN): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

# Clean up object files and executable
clean:
	rm -f $(BIN)

# Run the executable
run: $(BIN)
	./$(BIN)