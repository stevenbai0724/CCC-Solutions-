import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        ArrayList<String> adj = new ArrayList<String>();
        ArrayList<String> noun = new ArrayList<String>();

        int numAdj= sc.nextInt();
        int numNoun = sc.nextInt();

        for (int i = 0; i<= numAdj; i++){
            String x = sc.nextLine();
            adj.add(x);
        }

        for (int j = 0; j < numNoun; j++){
            String y = sc.nextLine();
            noun.add(y);
        }
          
        for (int i = 0; i < numAdj; i++){
            for (int j = 0; j< numNoun; j++){
                
                System.out.println(adj.get(i+1) + " as " + noun.get(j));    
                
            }
        }
    }
}