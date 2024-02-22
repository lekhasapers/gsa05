#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main() {

  Point p1, p2;
  initPoint (&p1, 3.0,4.0);
  initPoint(&p2, 3.14159,6.2831853071);
  
  Box b1 = {p1, 5.0, 6.0};

  assertEquals("ul=(3.0,4.0),w=5.0,h=6.0", boxToString(b1, 1), "boxToString(b1,1)");
  assertEquals("ul=(3.00,4.00),w=5.00,h=6.00", boxToString(b1, 2), "boxToString(b1, 2)");
  assertEquals("ul=(3.000,4.000),w=5.000,h=6.000", boxToString(b1, 3), "boxToString(b1, 3)");
  assertEquals("ul=(3.0000,4.0000),w=5.0000,h=6.0000", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("ul=(3.00000,4.00000),w=5.00000,h=6.00000", boxToString(b1, 5), "boxToString(b1,5)");
  assertEquals("ul=(3.000000,4.000000),w=5.000000,h=6.000000", boxToString(b1, 6), "boxToString(b1,6)");

  return 0;
}

//(precision = 2): "ul=(3.4,-5),w=5,h=7


