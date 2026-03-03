import java.util.Scanner;

public class Fibonacci {

    public static long fib(int n) {
        if (n == 1 || n == 0)
            return n;
        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
        int n = 1;
        while (n != 0) {
            Scanner s = new Scanner(System.in);
            System.out.print("Enter n: ");
            n = s.nextInt();

            long start = System.currentTimeMillis();
            long result = fib(n);
            long end = System.currentTimeMillis();

            System.out.println("Fibonacci number at position " + n + " is: " + result);
            System.out.println("Time taken: " + (end - start) + " ms\n");
        }
    }
}

// This code took a total time of about 4 Hours and 20 minutes.
// For n=59 it took 1.7 Hours approximately.
