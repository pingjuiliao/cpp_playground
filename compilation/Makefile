CC=gcc
CXX=g++
CFLAGS=-g -m64
CXXFLAGS=-g -m64

INCLUDES=-I./lib
IGNORE_LIB=-L./lib -Wl,--no-as-needed -lHello
LOAD_LIB=-Wl,-rpath,./lib lib/libHello.so

all: main.exe
main.exe: main.c lib/libHello.so
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@ $(LOAD_LIB)
lib/libHello.so: lib/hello.c
	$(CC) $(CFLAGS) -shared $< -o $@
clean:
	rm $(wildcard *.o) $(wildcard *.exe) $(wildcard lib/*.so)
