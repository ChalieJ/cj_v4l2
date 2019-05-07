#!/bin/bash

rm -rf ./a.out
rm -rf ./*.o

g++ -c ./camChipFCB8530.cpp
g++ -c ./camChipFH325.cpp
g++ -c ./cam.cpp
g++ -c ./test.cpp
g++ ./test.o ./cam.o ./camChipFH325.o ./camChipFCB8530.o

