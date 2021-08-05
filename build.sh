#!/bin/bash

c++ -o ftext $@ main.cpp
if [ $? -eq 0 ]; then
	./ftext
else
    echo Compile error.
fi
