import java.util.*;
import java.io.*;
public class strategicBombing {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        ArrayList<Integer>adj[] = new ArrayList[27];
        Queue<Integer>r = new LinkedList();

        int count = 0;
        int countDC = 0;
        for(int i = 1; i<=26; i++){
            adj[i] = new ArrayList();
        }
        
        while (true){
            String str = readLine();
            
            if(str.equals("**")) break;

            int x;
            int y;
            
            x = Character.getNumericValue(str.charAt(0)) -9;
            y = Character.getNumericValue(str.charAt(1)) -9;

            adj[x].add(y);
            adj[y].add(x);
            r.add(x*30 + y);
            count++;
        }

        for (int c = 0; c<count; c++){
            int dc = r.poll();
            int dcx = dc/30;
            int dcy = dc%30;

            Queue<Integer>q = new LinkedList();
            boolean[] vis = new boolean[27];
            vis[1] = true;
            q.add(1);

            while(!q.isEmpty()){
                int cur = q.poll();

                for(int i = 0; i<adj[cur].size(); i++){
                    int nxt = adj[cur].get(i);
                    if(!vis[nxt]){
                        if(!(cur==dcx && nxt==dcy) && !(cur==dcy && nxt==dcx) ){
                        vis[nxt] = true;
                        q.add(nxt);
                        }
                    }
                }

            }
            if(!vis[2]){
                countDC++;
                String s1 = String.valueOf((char)(dcx+64));
                String s2 = String.valueOf((char)(dcy+64));
                String ans = s1.concat(s2);
                System.out.println(ans);
            }        
        }
        System.out.println("There are " + countDC + " disconnecting roads.");
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