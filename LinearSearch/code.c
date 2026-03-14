#include <stdio.h>
#include <windows.h>

int linearSearch(int a[], int n, int key) {
  for (int i = 0; i < n; i++)
    if (a[i] == key) return i;
  return -1;
}

double runTest(int a[], int n, int key) {
  LARGE_INTEGER start, end, freq;
  QueryPerformanceFrequency(&freq);

  double total = 0;

  for (int i = 0; i < 5; i++) {
    QueryPerformanceCounter(&start);
    linearSearch(a, n, key);
    QueryPerformanceCounter(&end);

    double t = (double)(end.QuadPart - start.QuadPart) * 1e9 / freq.QuadPart;
    total += t;
  }

  return total / 5.0;
}

int main() {
  int a[100000];
  int n, i;

  printf("InputSize\tBest(ns)\tAvg(ns)\tWorst(ns)\n\n");

  for (n = 10000; n <= 100000; n += 5000) {
    for (i = 0; i < n; i++) a[i] = i;

    double best = runTest(a, n, a[0]);       // best case
    double avg = runTest(a, n, a[n / 2]);    // average case
    double worst = runTest(a, n, a[n - 1]);  // worst case

    printf("%d\t\t%.0f\t\t%.0f\t\t%.0f\n", n, best, avg, worst);
  }

  return 0;
}
