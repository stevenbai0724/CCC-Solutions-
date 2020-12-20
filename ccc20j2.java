import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int goal = sc.nextInt();
        int start = sc.nextInt();
        int rate = sc.nextInt();
        int days = 0;
        int current = start;
        int sum = start;
        
        while (goal >= sum){
            current = current * rate;
            sum += current;
            days++;
        }
        
        System.out.println(days);
        
    }
}