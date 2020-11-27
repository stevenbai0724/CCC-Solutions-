import java.util.*;
import java.io.*;
public class waterpark {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = readInt(); 
        ArrayList<Integer>adj[] = new ArrayList[n+1];
        int[] dp = new int[n+1];
        for (int i = 1; i<=n; i++){
            adj[i] = new ArrayList();
        }
        while(true){
            int x = readInt();
            int y = readInt();
            if(x==0 && y==0)
                break;
            else
                adj[x].add(y);
        }
        Queue<Integer>q = new LinkedList();
        boolean[] vis = new boolean[n+1];
        q.add(1);
        vis[1] = true;
        while(!q.isEmpty()){
            int cur = q.poll();
            for(int i = 0; i<adj[cur].size(); i++){
                int nxt = adj[cur].get(i);

                if(vis[nxt] == false){
                    vis[nxt] = true;
                    q.add(nxt);
                }
            }
        }
        if(!vis[n])
            System.out.println(0);
        else{
            dp[n] = 1;
            for(int i = n-1; i>=1; i--){
                if(vis[i]){
                    for(int j = 0; j<adj[i].size(); j++){
                        dp[i] += dp[adj[i].get(j)]; 
                    }
                }
            }
            System.out.println(dp[1] );
        }
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