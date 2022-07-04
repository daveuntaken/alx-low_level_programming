#include <stdlib.h>
#include <time.h>

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (int n < 0)
    printf("%d\n,n is negative");

  if (int n == 0)
    printf("%d\n, n is negative");

  if (int n > 0)
    printf("%d\n, n is positive");

  return (0);
}
