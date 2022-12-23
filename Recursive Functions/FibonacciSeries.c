//FIBONACCI SERIES

#include <stdio.h>
#include <unistd.h>

//fibonacci series using recursion
long long int fibonacci (int n) 
{
  if (n <= 1) 
  {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}


int main ()
{
  int n, i = 0;

  printf("\n\nNOTE: The number of terms should be greater than 1 and don't provide with very large numbers of terms");

  printf("\n\n******************************************************************");

  printf("\n\nEnter the number of terms: ");
  scanf("%d", &n);

  printf("\n");

  printf("\nFibonacci Series: \n\n");

  //printing the first term
  printf("0\n");

  for (i = 1; i < n; i++)
  {
    printf("%lld\t", fibonacci(i));

    //printing new line after every 8 terms
    if(i % 6 == 0)
      printf("\n");
  }

  sleep(3);
  printf("\n\n");

  return 0;
}
