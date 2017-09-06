#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{

  int s=240;

  double a[s][s],b[s][s],c[s][s];
  for(int i=0; i<s; i++)
    {
    for(int j=0; j<s; j++)
      {
        a[i][j]= rand()%5;
        b[i][j]= rand()%5;
      }
    }

  for(int k=0; k<s; k++)
      for(int i=0; i<s; i++)
     {
          c[i][k] = 0.0;
          for(int j=0; j<s; j++)
            c[i][k] = c[i][k] + a[i][j] * b[j][k];
     }
  for(int i=0; i<s; i++)
    {
      for(int j=0; j<s; j++)
        {
          printf(" 6.2%f", c[i][j]);
        }
      printf("\n");
    }
  return 0;
}
