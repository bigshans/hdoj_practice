import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger sum, a;
        int n = sc.nextInt();
        for (int i = 1; i <= n; ++i) {
            sum = BigInteger.ZERO;
            a = sc.nextBigInteger();
            while (!a.equals(BigInteger.ZERO)) {
                sum = sum.add(a);
                a = sc.nextBigInteger();
            }
            System.out.println(sum);
            if (i < n) {
                System.out.println();
            }
        }
    }
}
