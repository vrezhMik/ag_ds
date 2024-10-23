CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
TEST_SRC = main.cpp
TEST_OBJ = main.o
BINARYSEARCH_OBJ = ../main.o
TEST_TARGET = binarySearch_test

# Build and run the test suite
all: $(TEST_TARGET)
	./$(TEST_TARGET)

# Rule to compile and link the test executable
$(TEST_TARGET): $(TEST_OBJ) $(BINARYSEARCH_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_OBJ) $(BINARYSEARCH_OBJ)

# Compile the test source
$(TEST_OBJ): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -c $(TEST_SRC) -o $(TEST_OBJ)

# Clean up object files and test executables
clean:
	rm -f $(TEST_OBJ) $(TEST_TARGET)
