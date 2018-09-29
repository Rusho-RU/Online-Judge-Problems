import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        while(true){
            int n, d;
            n = scan.nextInt();
            BigInteger nephew = BigInteger.valueOf(n);
            d = scan.nextInt();

            if(n==0 && d==0) break;

            BigInteger ans = nephew.pow(d);
            System.out.println(ans.toString());
        }
    }
}
