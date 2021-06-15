#include <stdio.h>
#include <stdlib.h>
#include <time.h.>

/*
**********************************************************

  chenge the value of num to change the character number

**********************************************************
*/
int num = 12;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < num; i++)
    {
        int ranD;
        ranD = rand() % 176 + 1;
        if (ranD >= 40)
        {
            printf("%c", ranD);
        }
        else if (ranD < 40)
        {
            i--;
        }
    }

    return 0;
}