CXX      ?= g++
CXXFLAGS ?= -std=c++11
FILES    ?=  text.cpp main.cpp
NAME     ?= AST
all:
	$(CXX) $(CXXFLAGS) $(FILES) -o $(NAME)
