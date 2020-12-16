import java.util.*;
import java.io.*;
public class ccc18j5 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        
        int n = readInt(); //pages
        ArrayList<Integer>adj[] = new ArrayList[n+1];
        int min = (int)1e9;
        boolean yes = true;
        
        for(int i =1; i<=n; i++){
            adj[i] = new ArrayList();
        }

        for(int i = 1; i<=n; i++){
            int m = readInt();
            for(int j = 0; j<m; j++){
                int x = readInt();
                adj[i].add(x);
            }
        }
        Queue<Integer>q = new LinkedList();
        int[]dis = new int[n+1];
        boolean[]vis = new boolean[n+1];
        q.add(1);
        dis[1] = 1;
        vis[1] = true;

        while(!q.isEmpty()){
            int cur = q.poll();

            for(int i = 0; i<adj[cur].size(); i++){
                int nxt = adj[cur].get(i);
                if(!vis[nxt]){
                    vis[nxt] =true;
                    dis[nxt] = dis[cur] + 1;
                    q.add(nxt);
                }
            }
        }
        for(int i = 1; i<=n; i++){
            if(adj[i].size() == 0 && vis[i]){
                min = Math.min(min, dis[i]); 
            }
            if(!vis[i]) yes = false;
        }

        if(yes){
            System.out.println("Y");
            System.out.println(min);
        }

        else{
            System.out.println("N");
            System.out.println(min);
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