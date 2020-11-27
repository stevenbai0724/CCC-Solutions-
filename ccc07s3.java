import java.util.*;
import java.io.*;
public class friends {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = 10000;
        int e = readInt();

        ArrayList<Integer>adj[] = new ArrayList[n+1];


        for (int i = 1; i<= n; i++){
            adj[i] = new ArrayList();
        }

        for (int i = 0; i<e; i++){
            int x = readInt();
            int y = readInt();

            adj[x].add(y);

        }

        while (true){
            int x = readInt();
            int y = readInt();

            if(x == 0 && y == 0){
                break;
            }

            Queue<Integer>q = new LinkedList();
            boolean[]vis = new boolean[n+1];
            int[]dis = new int[n+1];
            q.add(x);
            vis[x]=true;
            dis[x] = -1;

            while(!q.isEmpty()){
                int cur = q.poll();

                for(int i = 0; i<adj[cur].size(); i++){
                    int nxt = adj[cur].get(i);
                    if(vis[nxt]==false){
                        vis[nxt] = true;
                        dis[nxt] = dis[cur] + 1;
                        q.add(nxt);
                    }
                }
            }
            q.add(y);
            boolean[]vis2 = new boolean[n+1];
            vis2[y] = true;
            while(!q.isEmpty()){
                int cur = q.poll();

                for(int i = 0; i<adj[cur].size(); i++){
                    int nxt = adj[cur].get(i);
                    if(vis2[nxt]==false){
                        vis2[nxt] = true;
                        q.add(nxt);
                    }
                }
            }
            if(vis[y] == true && vis2[x] == true){
                System.out.println("Yes " + dis[y] );
            }
            else
                System.out.println("No");

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