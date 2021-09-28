#include<stdio.h>

int main()
{
  int arr[5][5],j,i; // An auxiliary array to store generated pscal triangle values

  // Iterate through every line and print integer(s) in it
  for ( i= 0; i< 5; i++)
  {
    // Every line has number of integers equal to line number

    for (j = 0; j <= i; j++)
    {
      // First and last values in every row are 1
      if (i == j || j == 0)
           arr[i][j] = 1;
      else // Other values are sum of values just above and left of above
           arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
