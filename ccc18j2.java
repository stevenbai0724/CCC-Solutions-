import java.io.*;
import java.util.*;

public class ccc18j2 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int x = sc.nextInt();
        int count = 0;
        
        String str1 = sc.next();
        String str2 = sc.next();
  
        for (int i =0; i<x; i++){
            
            if (str1.substring(i, i+1).equals("C") && (str2.substring(i, i+1)).equals("C")){
                count++;
            }
        }

        System.out.println(count);

        

        
    }


}