import java.util.*;
import java.io.*;
public class escapeRoom {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        
        int n = readInt();
        int m = readInt();

        int[][]array = new int[n+1][m+1];
        ArrayList<Integer>adj[] = new ArrayList[n*m + 1];


        for(int i = 1; i<=n; i++ ){
            
            for(int j = 1; j<=m; j++){
                
                array[i][j] = readInt();

            }
        }
        for(int i = 1; i<n*m+1; i++){
            adj[i] = new ArrayList();
        }

        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                adj[i*j].add(array[i][j]);

            }
        }

        boolean[]vis = new boolean[n*m+1];
        Queue<Integer>q = new LinkedList();
        vis[1] = true;
        q.add(1);

        
        while(!q.isEmpty()){
            int cur = q.poll();

            for(int i = 0; i<adj[cur].size(); i++){
                
                int nxt = adj[cur].get(i);
                if(nxt>0 &&nxt<=n*m){
                if(!vis[nxt]){
                    vis[nxt] = true;
                    q.add(nxt);
                    
                }
            }
                
                
            }
        }

        if(vis[n*m])System.out.println("yes");
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