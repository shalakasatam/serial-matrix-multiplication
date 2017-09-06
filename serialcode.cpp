#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{

  int size=240; //size of matrix

  double mat1[size][size],mat2[size][size],result[size][size];  //defining matrix 1, matrix 2 and result matrix
  //generating matrix 1 and 2
  for(int i=0; i<size; i++)
    {
    for(int j=0; j<size; j++)
      {
        mat1[i][j]= rand()%5;
        mat2[i][j]= rand()%5;
      }
    }

  for(int k=0; k<size; k++)
  {
      for(int i=0; i<size; i++)
     {
          result[i][k] = 0.0;
          for(int j=0; j<size; j++)
          {
            result[i][k] = result[i][k] + mat1[i][j] * mat2[j][k];
          }
     }
  }
  
  for(int i=0; i<size; i++)
    {
      for(int j=0; j<size; j++)
        {
          printf(" 6.2%f", result[i][j]);
        }
      printf("\n");
    }
  
  return 0;
}
