import java.io.*;
import java.util.*;

public class ccc19j1 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);


        int a3 = sc.nextInt() *3;
        int a2 = sc.nextInt() *2;
        int a1 = sc.nextInt() ;
        int b3 = sc.nextInt() *3;
        int b2 = sc.nextInt() *2;
        int b1 = sc.nextInt();
        int sum1 = a3+a2+a1;
        int sum2 = b3+b2+b1;
        
        if (sum1>sum2)
            System.out.println("A");
        else if (sum2>sum1)
            System.out.println("B");
        else
            System.out.println("T");

        
    }
}