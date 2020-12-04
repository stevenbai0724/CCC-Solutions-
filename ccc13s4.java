import java.util.*;
import java.io.*;
public class ccc13s4 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = readInt(); //nodes
        int m = readInt(); //edges
        ArrayList<Integer>adj[] = new ArrayList[n+1];


        for (int i = 1; i<= n; i++){
            adj[i] = new ArrayList();

        }

        for (int i = 0; i< m; i++){
            int x = readInt();
            int y = readInt();

            adj[x].add(y);  

        }

        int p1 = readInt();
        int p2 = readInt();

        Queue<Integer>q = new LinkedList();
        boolean[] vis = new boolean[n+1];
        boolean[] vis2 = new boolean[n+1];
        q.add(p1);
        vis[p1] = true;

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
        if(vis[p2]==true){
            System.out.println("yes");
        }else{
        q.add(p2);
        vis2[p2]=  true;
        while(!q.isEmpty()){
            int cur = q.poll();

            for(int i = 0; i<adj[cur].size(); i++){
                int nxt = adj[cur].get(i);

                if(vis2[nxt] == false){
                    vis2[nxt] = true;
                    q.add(nxt);
                }
            }
        }
            if(vis2[p1] == true){
                System.out.println("no");
            }else  
                System.out.println("unknown");
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