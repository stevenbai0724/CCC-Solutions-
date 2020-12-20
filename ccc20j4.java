import java.util.*;
import java.io.*;
public class cycleShifts {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        
        String t = readLine();
        String s = readLine();
        boolean yes = false;

        for(int i = 0; i< s.length(); i++){

            if(t.indexOf(s)!= -1){
                yes = true;
                break;
            }
           
            String x = s.substring(0,1);
            s = s.concat(x);
            s = s.substring(1);


        }
        if(yes) System.out.println("yes");
        else System.out.println("no");        
    }
    static String next () throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static long readLong () throws IOException {
        return Long.parseLong(next());
    }
    static int readInt () throws IOException {
        return Integer.parseInt(next());
    }
    static double readDouble () throws IOException {
        return Double.parseDouble(next());
    }
    static char readChar () throws IOException {
        return next().charAt(0);
    }
    static String readLine () throws IOException {
        return br.readLine().trim();
    }
}