# Simple makefile to just get it to work in Stocker 307 machines.
# Written by dmc
# last-modified: Mon Sep 17 13:43:38 2012
# CC = /usr/bin/CC
CC = g++
GCC_OPTIONS=  -I ../../include -g
LDLIBS = -L/usr/local/lib/ -L/usr/X11R6/lib -lX11 -lXi -lXmu  -lGLEW -lGL -lGLU  -lglut -lm 
INCS = -I/usr/local/include/ -I/home/cs425/code-egs/ -I../include/
OPTIONS=$(GCC_OPTIONS) $(INCS)

InitShader.o: InitShader.cpp
	$(CC) InitShader.cpp $(OPTIONS) -c -o $@  
