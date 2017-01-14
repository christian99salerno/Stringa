CC=g++

stringa: main.o stringa.o

main.o: main.cpp stringa.hpp
stringa.o: stringa.cpp stringa.hpp
