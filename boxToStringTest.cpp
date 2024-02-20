#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  Point p1, p2;
  initPoint (&p1, 3.0,4.0);
  initPoint(&p2, 3.14159,6.2831853071);
  
  Box b1 = {p1, 5.0, 10.0};
  Box b2 = {p2, 2.71828, 3.14159};

  assertEquals("ul=(3.000,4.000),w=5.000,h=10.000", boxToString(b1), "boxToString(b1)");
  assertEquals("ul=(3.142,6.283),w=2.718,h=3.142", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=3,h=3", boxToString(b2,0), "boxToString(b2,0)");
  assertEquals("ul=(3.1416,6.2832),w=2.7183,h=3.1416", boxToString(b2,4), "boxToString(b2,4)");

		   
  return 0;
}
