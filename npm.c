#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define SLOW 75000

void	step(const char c)
{
  printf("%c ", c);
  fflush(stdout);
  usleep(SLOW);
  printf("\r");
}

int main()
{
  const char c[4] = {'\\', '|', '/', '-'};

  for (unsigned int i = 0; ;++i)
    step(c[i == 4 ? i = 0 : i]);
  return (EXIT_SUCCESS);
}
