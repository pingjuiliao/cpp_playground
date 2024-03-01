CC=gcc
CFLAGS=-m64 -g
INCLUDES=-I../lib
LIBS=-Wl,-rpath,../lib ../lib/libHello.so

all: main.exe
main.exe: main.c ../lib/libHello.so
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $< $(LIBS)
../lib/libHello.so: ../lib/hello.c
	$(CC) $(CFLAGS) -shared -o $@ $<
clean:
	rm $(wildcard *.exe)
