CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = program
MAIN_OBJ = main.o
BINARYSEARCH_OBJ = binarySearch/main.o

# Default rule to build everything
all: $(TARGET)
	./$(TARGET)

# Rule to build the main program, ensure binarySearch/main.o is built before linking
$(TARGET): $(MAIN_OBJ) $(BINARYSEARCH_OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN_OBJ) $(BINARYSEARCH_OBJ)

# Compile main.c to main.o
$(MAIN_OBJ): main.c main.h
	$(CC) $(CFLAGS) -c main.c -o $(MAIN_OBJ)

# Ensure binarySearch/main.o is built by calling the binarySearch Makefile
$(BINARYSEARCH_OBJ): 
	$(MAKE) -C binarySearch

# Rule to run the binarySearch tests
binarySearch_test:
	$(MAKE) -C binarySearch/tests

# Clean everything
clean:
	rm -f $(MAIN_OBJ) $(TARGET)
	$(MAKE) -C binarySearch clean
	$(MAKE) -C binarySearch/tests clean
