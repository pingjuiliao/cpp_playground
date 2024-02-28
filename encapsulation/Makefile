CXX=g++
CXXFLAGS=-m64 -no-pie
all: public_shape
public_shape: public_shape.cc
	$(CXX) $(CXXFLAGS) -o $@.exe $<
clean:
	rm $(wildcard *.exe) $(wildcard *.o)
