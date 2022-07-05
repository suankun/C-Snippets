int points(const char* const games[10]) {
    int pts = 0;

    for (int i = 0; i < 10; i++)
    {
        if (games[i][0] > games[i][2])
            pts += 3;
        else if (games[i][0] == games[i][2])
            pts += 1;
    }

    return pts;
}

Alternative solution:
#include <stdlib.h>

int points(char* games[])
{
  int sum = 0;
  for (int i = 0; i < 10; i++)
    sum += games[i][0] > games[i][2] ? 3
         : games[i][0] < games[i][2] ? 0
         : 1;
  return sum;
}
