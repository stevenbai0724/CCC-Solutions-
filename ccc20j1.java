import java.io.*;
import java.util.*;

public class ccc20j1 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt()*2;
        int num3 = sc.nextInt()*3;
        int sum = num1 + num2 + num3;
        
        if (sum >= 10)
            System.out.println("happy");
        else 
            System.out.println("sad");
        
    }
}