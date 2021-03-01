CXX = g++
CXXFLAGS = -g -std=c++11

nameParser: main.o nameParser.o
	$(CXX) $(CXXFLAGS) -o $@ main.o nameParser.o

main.o: main.cpp nameParser.hpp
nameParser.o: nameParser.cpp nameParser.hpp

clean:
	-rm *.o nameParser

memory_check:
	valgrind --leak-check=full --show-leak-kinds=all ./nameParser listOfNames.txt
