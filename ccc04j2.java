import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        
        int x = sc.nextInt();
        int y = sc.nextInt();
        
        int times = (y-x)/60;
        
        System.out.println("All positions change in year " + x);

        for (int i = 1; i <=times; i++){
            System.out.println("All positions change in year " + (x+(i*60)));
        }
        
        
        
        
       
        
    }
}