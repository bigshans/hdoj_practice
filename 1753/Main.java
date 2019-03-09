import  java.util.Scanner;
import java.math.*;

public class Main {
    public static void main(String[] args) {
        Scanner  input = new Scanner(System.in);
        BigDecimal a, b;
        while (input.hasNextBigDecimal()) {
            a = input.nextBigDecimal();
            b = input.nextBigDecimal();
            a = a.add(b);
            String s = a.stripTrailingZeros().toPlainString();
            System.out.println(s);
        }
        input.close();
    }
}