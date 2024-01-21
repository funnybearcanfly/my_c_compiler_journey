// C program to demonstrate 
// auto keyword
#include <stdio.h>
#include "head1.h"
#include "head2.h"

int printvalue()
{
  foo();
  TestFunc();
  printf("%d", a);
}
 
// Driver code
int main() 
{
  printvalue();
  return 0;
}