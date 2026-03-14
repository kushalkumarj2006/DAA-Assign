#include <stdio.h>
#include <windows.h>

int gcd_cic(int a, int b) {
  int t = (a < b) ? a : b;

  while (t > 0) {
    if (a % t == 0 && b % t == 0) return t;
    t--;
  }

  return 1;
}

int main() {
  int a, b, g;

  LARGE_INTEGER start, end, freq;
  QueryPerformanceFrequency(&freq);

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  QueryPerformanceCounter(&start);
  g = gcd_cic(a, b);
  QueryPerformanceCounter(&end);

  double time = (double)(end.QuadPart - start.QuadPart) * 1e9 / freq.QuadPart;

  printf("\nGCD of %d and %d = %d\n", a, b, g);
  printf("Running Time: %.0f ns\n", time);

  return 0;
}
