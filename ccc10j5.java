import java.util.*;
import java.io.*;
public class knightHop
{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        
        

        int x1 = readInt();
        int y1 = readInt();
        int x2 = readInt();
        int y2 = readInt();
        int start = x1*10 + y1; //grid values
        int end = x2*10 + y2; //grid values

        

        boolean[][] vis = new boolean[10][10];
        int[][] dis = new int[10][10];
        Queue<Integer>q = new LinkedList();
        int[]changex = {1,2,2,1,-1,-2,-2,-1};
        int[]changey = {-2,-1,1,2,2,1,-1,-2};
        q.add(start);
        vis[start/10][start%10] = true;
        while(!q.isEmpty()){
            int cur = q.poll();
            int x = cur/10;
            int y = cur%10; 
            

            for(int i = 0; i<8; i++){
                int newx = x + changex[i];
                int newy = y + changey[i];


                if(newx>0 && newx<9 && newy>0 && newy<9  ){
                    if(!vis[newx][newy]){
                        vis[newx][newy] = true;
                        dis[newx][newy] = dis[x][y] +1;
                        q.add(newx*10+newy);
                    }
                    
                  
                }
            }
        }

        System.out.println(dis[end/10][end%10]);

    
        
        
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