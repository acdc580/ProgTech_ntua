# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# The default rule when you type 'make' builds ALL THREE programs!
all: run_baby run_full run_stack

# ==========================================
# Exercise 1: Babyratio
# ==========================================
run_baby: babyratio/babyratio.o babyratio/babyratiotest.o
	$(CXX) $(CXXFLAGS) -o run_baby babyratio/babyratio.o babyratio/babyratiotest.o

babyratio/babyratio.o: babyratio/babyratio.cpp babyratio/babyratio.hpp
	$(CXX) $(CXXFLAGS) -c babyratio/babyratio.cpp -o babyratio/babyratio.o

babyratio/babyratiotest.o: babyratio/babyratiotest.cpp babyratio/babyratio.hpp
	$(CXX) $(CXXFLAGS) -c babyratio/babyratiotest.cpp -o babyratio/babyratiotest.o

# ==========================================
# Exercise 2: Fullratio (Ready for when you write it)
# ==========================================
run_full: fullratio/fullratio.o fullratio/fullratiotest.o
	$(CXX) $(CXXFLAGS) -o run_full fullratio/fullratio.o fullratio/fullratiotest.o

fullratio/fullratio.o: fullratio/fullratio.cpp fullratio/fullratio.hpp
	$(CXX) $(CXXFLAGS) -c fullratio/fullratio.cpp -o fullratio/fullratio.o

fullratio/fullratiotest.o: fullratio/fullratiotest.cpp fullratio/fullratio.hpp
	$(CXX) $(CXXFLAGS) -c fullratio/fullratiotest.cpp -o fullratio/fullratiotest.o

# ==========================================
# Exercise 3: Stackdemo (Ready for when you write it)
# ==========================================
run_stack: stackdemo/stackdemo.o
	$(CXX) $(CXXFLAGS) -o run_stack stackdemo/stackdemo.o

stackdemo/stackdemo.o: stackdemo/stackdemo.cpp
	$(CXX) $(CXXFLAGS) -c stackdemo/stackdemo.cpp -o stackdemo/stackdemo.o

# ==========================================
# Cleanup Rule
# ==========================================
clean:
	rm -f babyratio/*.o fullratio/*.o stackdemo/*.o run_baby run_full run_stack