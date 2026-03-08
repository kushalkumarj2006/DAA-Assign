#include <stdio.h>
#include <windows.h>

long long factorial(int n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  LARGE_INTEGER start, end, freq;
  QueryPerformanceFrequency(&freq);

  printf("n\tFactorial\tTime(ns)\n");

  for (int n = 1; n <= 21; n++) {
    long long result;

    QueryPerformanceCounter(&start);

    for (int i = 0; i < 100000; i++) {
      result = factorial(n);
    }

    QueryPerformanceCounter(&end);

    long long time =
        (end.QuadPart - start.QuadPart) * 1000000000LL / freq.QuadPart;

    printf("%d\t%lld\t\t%lld\n", n, result, time);
  }

  return 0;
}
