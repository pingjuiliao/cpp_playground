#include <stdio.h>

#include <iostream>

class Shape {
 public:
  unsigned int area_;
  unsigned int num_edges_;
  unsigned int degree_;
  Shape(unsigned int area, 
        unsigned int num_edges, 
        unsigned int degree): area_(area), num_edges_(num_edges), degree_(degree) {

  }
  ~Shape() {}
  void draw() {
    puts("TODO");
  }
  void stat() {
    printf("  area : %u\n", area_);
    printf(" #edges: %u\n", num_edges_);
    printf(" degree: %u\n", degree_);
  }
  void transform() {
    puts("TODO");
  }
};

void func_print_struct(Shape* shape) {
  printf("   area  : %u\n", shape->area_);
  printf("  #edges : %u\n", shape->num_edges_);
  printf("  degree : %u\n", shape->degree_);
}

void print_stats(void) {
  Shape *shape = new Shape(40, 10, 4);
  func_print_struct(shape);
  shape->stat();
}


int main(int argc, char** argv) {
  puts("hello");
  print_stats();
  return 0;
}
