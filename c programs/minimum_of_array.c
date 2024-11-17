#include <stdio.h>
int main()
{
  int t, i, x = 0;
  scanf("%d", &t);
  if (t < 1 || t > 10000)
    ;
  int n;
  for (i = 0; i < t; i++)
  {
    scanf("%d", &n);
    if (n < 10 || n > 1000000000)
      break;
    if (n / 100 < 1)
    {
      printf("%d\n", n % 10);
    }
    else
    {
      int a[100], temp, k, j, min;
      temp = n;
      for (j = 0; temp != 0; j++)
      {
        temp /= 10;
      }
      temp = n;
      for (k = 0; temp != 0 && k < j; k++)
      {
        a[k] = temp % 10;
        temp = temp / 10;
      }
        min = a[0];
      for (k = 0; k < j - 1; k++)
      {
        if (a[k] < a[k + 1])
        {
          if (min > a[k])
            min = a[k];
        }
        else
        {
          {
            if (min > a[k + 1])
              min = a[k+1];
          }
        }
      }
      printf("%d\n", min);
    }
  }
}