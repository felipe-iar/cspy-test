#include "lib.h"
#include "cspy-test.h"

int a = 40, b = 2;

int main(void) {
  TEST_EQ("testAdd", add(a, b), 42);
  TEST_EQ("testSub", sub(a, b), 38);
  TEST_EQ("testMul", mul(a, b), 80);
  return 0;
}
