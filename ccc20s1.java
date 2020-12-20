import java.util.*;
import java.io.*;
public class surmisingSprinter {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = readInt();
        long c = (int)(4e9);
        ArrayList<Long>list = new ArrayList();
 
        double ans = 0;
        for(int i = 0; i< n; i++){
            long x = readLong();
            long y = readLong();
           

            list.add(x*c + y + (int)1e9);
            
           
          
        }

        Collections.sort(list);

        for(int i = 0; i<n-1; i++){
            double time1 = Math.abs(list.get(i))/c;
            double time2 = Math.abs(list.get(i+1))/c;

            double pos1 = (list.get(i))%c - (int)1e9;
            double pos2 = (list.get(i+1))%c - (int)1e9;     

         

            double speed = (Math.abs(pos1 - pos2)/(time2 - time1) );

            ans = Math.max(speed, ans);
        }

        System.out.println(ans);



        
        
        
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