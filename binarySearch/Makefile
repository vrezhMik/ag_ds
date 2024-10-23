# binarySearch/Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Werror
BINARYSEARCH_SRC = main.c
BINARYSEARCH_OBJ = main.o

# Build the binarySearch module
all: $(BINARYSEARCH_OBJ)

$(BINARYSEARCH_OBJ): $(BINARYSEARCH_SRC)
	$(CC) $(CFLAGS) -c $(BINARYSEARCH_SRC) -o $(BINARYSEARCH_OBJ)

# Clean up object files
clean:
	rm -f $(BINARYSEARCH_OBJ)
