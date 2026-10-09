#include <stdio.h>

void f() {
  int x = 23;

  printf("Em f: x = %d\n", x);
}

void g() {
  int y;

  printf("Em g: y = %d\n", y);
}

int main(void) {
  f();
  g();

  return 0;
}