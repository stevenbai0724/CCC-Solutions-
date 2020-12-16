import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int x = sc.nextInt();
        
        String[] array = new String[x];
        int[] numbers = new int[x];
        
        for (int i = 0; i<x; i++){
            numbers[i] = sc.nextInt();
            array[i] = sc.next();
            
        }
        
        for (int i=0; i<x;i++){
            for(int j = 0; j< numbers[i]; j++){
                System.out.print(array[i]);
            }
            System.out.println("");
        }
        
        
        
       
        
    }
}