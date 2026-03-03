import java.util.Scanner;

public class FibMat {
    static void multiply(long[][] A, long[][] B) {
        long a = A[0][0] * B[0][0] + A[0][1] * B[1][0];
        long b = A[0][0] * B[0][1] + A[0][1] * B[1][1];
        long c = A[1][0] * B[0][0] + A[1][1] * B[1][0];
        long d = A[1][0] * B[0][1] + A[1][1] * B[1][1];

        A[0][0] = a;
        A[0][1] = b;
        A[1][0] = c;
        A[1][1] = d;
    }

    static void power(long[][] F, int n) {
        if (n == 0 || n == 1)
            return;
        long[][] M = { { 1, 1 }, { 1, 0 } };
        power(F, n / 2);
        multiply(F, F);
        if (n % 2 != 0)
            multiply(F, M);
    }

    static long fib(int n) {
        if (n == 0)
            return 0;
        long[][] F = { { 1, 1 }, { 1, 0 } };
        power(F, n - 1);
        return F[0][0];
    }

    public static void main(String[] args) {
        int n = 1, i = 5;
        long result = 1;
        Scanner s = new Scanner(System.in);
        while (result > 0) {
            System.out.print("Enter n: ");
            // n = s.nextInt();
            n = i;
            i = i + 5;

            long start = System.nanoTime();
            result = fib(n);
            long end = System.nanoTime();
            System.out.println("Fibonacci number at position " + n + " is: " + result);
            System.out.println("Time taken: " + ((end - start) / 1_000_000.0) + " ms");
        }
        s.close();
    }
}
