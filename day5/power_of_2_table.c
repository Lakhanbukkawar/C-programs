#include <stdio.h>
#include <conio.h>
  int main()
  {
    long int p;
    int n;
    double q;
    printf("\n n    2 to power n      2 to power -n");
    p = 1;
    for (n = 0; n < 11; ++n) {
      if (n == 0)
        p = 1;
      else
        p = p * 2;
      q = 1.0 / (double) p;
      printf("\n%2d   %8d     %20.12lf", n, p, q);
    }
    getch();
  }
