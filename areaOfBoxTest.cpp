#include "shapes.h"
#include "tddFuncs.h"
#include "shapeFuncs.h"
#include "utility.h"

// Next we have our main program that runs the tests
int main()
{

  Box r,s,t,u;

  r.upperLeft.x = 0.0; r.upperLeft.y=10.0; r.width = 3.0;  r.height=4.0;
  s.upperLeft.x = 0.0; s.upperLeft.y=10.0; s.width = 4.0;  s.height=3.0;
  t.upperLeft.x = 0.0; t.upperLeft.y=10.0; t.width = 2.5;  t.height=4.0;
  u.upperLeft.x = 0.0; u.upperLeft.y=10.0; u.width = 4.0;  u.height=15.0;

  assertEquals(12.0, areaOfBox(r), "areaOfBox(r)");
  assertEquals(12.0, areaOfBox(s), "areaOfBox(s)");
  assertEquals(10.0, areaOfBox(t), "areaOfBox(t)");
  assertEquals(60.0, areaOfBox(u), "areaOfBox(u)");

  return 0;
}

