import java.util.*;
import java.io.*;
public class mouseJourney {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = readInt();
        int m = readInt();
        int[][]dp = new int[n+1][m+1];
        boolean[][]cats = new boolean[n+1][m+1];

        int c = readInt();

        for(int i = 0; i<c; i++){
            int x = readInt();
            int y = readInt();

            cats[x][y] = true;
        }

        dp[1][1] = 1;

        for(int i = 1; i<=n; i++){
            for(int j = 1; j<= m; j++){
                if(i == 1 && j==1)
                    continue;
                
                if(!cats[i][j]){
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
                }
            }
        }
        System.out.println(dp[n][m]);
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