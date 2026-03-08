#include <stdio.h>
#include <time.h>

long long moves = 0;

void towerOfHanoi(int n, char from, char to, char aux) {
  if (n == 1) {
    moves++;
    return;
  }

  towerOfHanoi(n - 1, from, aux, to);
  moves++;
  towerOfHanoi(n - 1, aux, to, from);
}

int main() {
  int n = 1;
  int max = 50;
  clock_t start, end, total_start, total_end;
  double time_taken;

  total_start = clock();

  printf("Disks\tMoves\t\tTime(seconds)\n");

  for (n = 1; n <= max; n++) {
    moves = 0;

    start = clock();

    towerOfHanoi(n, 'A', 'C', 'B');

    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("%d\t%lld\t\t%f\n", n, moves, time_taken);
  }

  total_end = clock();

  double total_time = ((double)(total_end - total_start)) / CLOCKS_PER_SEC;

  printf("\nTotal Program Execution Time: %f seconds\n", total_time);

  return 0;
}

