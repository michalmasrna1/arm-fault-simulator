#include <stdbool.h>

void __attribute__((noinline)) super_secret_function()
{
    while (true)
    {
    }
}


void main()
{
  int a = 0;
  if (a == 1) {
    super_secret_function();
  }
}
