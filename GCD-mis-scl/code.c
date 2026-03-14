#include <stdio.h>
#include <windows.h>

int main() {
  int m, n;
  int f1[100], f2[100];
  int c1 = 0, c2 = 0;

  LARGE_INTEGER start, end, freq;
  QueryPerformanceFrequency(&freq);

  printf("Enter two numbers: ");
  scanf("%d %d", &m, &n);

  int a = m, b = n;

  QueryPerformanceCounter(&start);

  /* Prime factors of m */
  for (int i = 2; i <= a; i++) {
    while (a % i == 0) {
      f1[c1++] = i;
      a /= i;
    }
  }

  /* Prime factors of n */
  for (int i = 2; i <= b; i++) {
    while (b % i == 0) {
      f2[c2++] = i;
      b /= i;
    }
  }

  int gcd = 1;

  for (int i = 0; i < c1; i++) {
    for (int j = 0; j < c2; j++) {
      if (f1[i] == f2[j]) {
        gcd *= f1[i];
        f2[j] = 0;
        break;
      }
    }
  }

  QueryPerformanceCounter(&end);

  double time = (double)(end.QuadPart - start.QuadPart) * 1e9 / freq.QuadPart;

  printf("\nGCD(%d, %d) = %d\n", m, n, gcd);
  printf("Running Time: %.0f ns\n", time);

  return 0;
}
