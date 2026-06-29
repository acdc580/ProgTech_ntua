# Define the compiler we are using
CXX = g++

# Define any compiler flags (warning flags to help catch bugs)
CXXFLAGS = -Wall -g

# The final name of your program
TARGET = babyratiotest

# The default rule when you just type 'make'
all: $(TARGET)

# How to link the object files into the final executable
$(TARGET): babyratio.o babyratiotest.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) babyratio.o babyratiotest.o

# How to compile babyratio.cpp into an object file
babyratio.o: babyratio.cpp babyratio.hpp
	$(CXX) $(CXXFLAGS) -c babyratio.cpp

# How to compile the test file into an object file
babyratiotest.o: babyratiotest.cpp babyratio.hpp
	$(CXX) $(CXXFLAGS) -c babyratiotest.cpp

# A rule to clean up your folder
clean:
	rm -f *.o $(TARGET)