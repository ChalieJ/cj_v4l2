#!/bin/bash

CO="-std=c++0x"

rm -rf ./a.out
rm -rf ./*.o

g++ -c ${CO} ./camChipFCB8530.cpp
g++ -c ${CO} ./camChipFH325.cpp
g++ -c ${CO} ./cam.cpp
g++ -c ${CO} ./test.cpp
g++ ${CO} ./test.o ./cam.o ./camChipFH325.o ./camChipFCB8530.o

