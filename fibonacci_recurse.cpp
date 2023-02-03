#include "fibonacci_recurse.h"

long long fibonacci_recurse(int number)
{
  if(number <= 0)
  {
    return 0;
  }
  if(number == 1)
  {
    return 1;
  }

  return fibonacci_recurse(number-2) + fibonacci_recurse(number-1);
}
