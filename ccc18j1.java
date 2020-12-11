import java.io.*;
import java.util.*;

public class ccc18j1 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int[]array = new int[4];
        
        for (int i = 0; i<4; i++){
            array[i] = sc.nextInt();
        }
        
        if (array[0] != 8 && array[0] !=9){
            System.out.println("answer");
        }
        else if (array[1] != array[2]){
            System.out.println("answer");
        }
        else if (array[3] != 8 && array[3] !=9){
       
            System.out.println("answer");
        }
        else
            System.out.println("ignore");
}
}