import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, p;
        BigInteger[] fib = new BigInteger[1005];
        fib[0] = fib[1] = BigInteger.valueOf(1);
        for (int i = 2; i < 1000; ++i) {
            fib[i] = fib[i - 1].add(fib[i - 2]);
        }
        n = input.nextInt();
        for (int i = 0; i < n; ++i) {
            p = input.nextInt();
            System.out.println(fib[p - 1]);
        }
    }
}