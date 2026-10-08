#include <stdio.h>

int square(int a)
{
  return a * a;
}
int main(void)
{
    
  int a = 2;
  square(a);
  printf("a=%i\n", a);
    return 0;
}