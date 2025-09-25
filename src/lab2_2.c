#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  if (scanf("%d", &n) != 1) {
    printf("Error: invalid input.\n");
    return 1;
  }

  if (n < 0) {
    printf("Error: n must be >= 0.\n");
    return 1;
  }

  if (n > 20) {
    printf("Warning: n > 20 may overflow 64-bit result.\n");
  }

  long long result = factorial(n);
  printf("%d! = %lld\n", n, result);

  return 0;
}
