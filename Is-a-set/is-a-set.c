#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int checkUnique(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) return 0;
    }
  }
  return 1;
}
long long measure(int arr[], int n) {
  LARGE_INTEGER start, end, freq;
  QueryPerformanceFrequency(&freq);
  QueryPerformanceCounter(&start);
  checkUnique(arr, n);
  QueryPerformanceCounter(&end);
  return (end.QuadPart - start.QuadPart) * 1000000000LL / freq.QuadPart;
}

int main() {
  printf("n\tBest(ns)\tAverage(ns)\tWorst(ns)\n");
  for (int n = 1000; n <= 10000; n += 500) {
    int* arr = malloc(n * sizeof(int));
    // BEST CASE
    for (int i = 0; i < n; i++) arr[i] = i;
    arr[0] = arr[1];
    long long best = measure(arr, n);
    // AVERAGE CASE
    for (int i = 0; i < n; i++) arr[i] = i;
    arr[n / 2] = arr[n / 2 + 1];
    long long avg = measure(arr, n);
    // WORST CASE
    for (int i = 0; i < n; i++) arr[i] = i;
    long long worst = measure(arr, n);

    printf("%d\t%lld\t\t%lld\t\t%lld\n", n, best, avg, worst);
    free(arr);
  }
}
