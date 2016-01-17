test.out: test.cpp solution.cpp
	g++ -std=c++11 -g -Wall -o test.out test.cpp solution.cpp && ./test.out
