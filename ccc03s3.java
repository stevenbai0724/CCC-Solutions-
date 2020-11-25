import java.util.*;
import java.io.*;
public class floorplan{
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        
        int flooring = readInt();
        int n = readInt();
        int m = readInt();
        ArrayList<Integer>roomCords = new ArrayList();
        ArrayList<Integer>roomSizes = new ArrayList();
        char[][]array = new char[n+1][m+1];
        int filled = 0;

        for(int i = 1; i<=n; i++){
            String s = readLine();
            for(int j = 1; j<=m; j++){
                array[i][j] = s.charAt(j-1);
                if(array[i][j] == '.')
                    roomCords.add(i*100 + j);
            }
        }

        while(!roomCords.isEmpty()){

            int start = roomCords.get(0);
            roomCords.remove(0);
            int count = 1;
            boolean[][]vis = new boolean[n+1][m+1];
            Queue<Integer>q = new LinkedList();
            int[] changex = {0,0,-1,1};
            int[] changey = {1,-1,0,0};
            vis[start/100][start%100] = true;
            q.add(start);

            while(!q.isEmpty()){
                int cur = q.poll();
                int x = cur/100;
                int y = cur%100;

                for(int i = 0; i<4; i++){
                    int newx = x + changex[i];
                    int newy = y + changey[i];
                    if(newx>0 && newx<=n && newy>0 && newy<=m){
                        if(!vis[newx][newy] && array[newx][newy]!='I'){
                            vis[newx][newy] = true;
                            count++;
                            q.add(newx*100+newy);
                            roomCords.remove(roomCords.indexOf(newx*100+newy));
                        }
                    }
                }


            }
            roomSizes.add(count);

        }
        Collections.sort(roomSizes);


        for(int i = roomSizes.size()-1; i>=0; i--){
            if(flooring>=roomSizes.get(i)){
                flooring -= roomSizes.get(i);
                filled++;
            }
            else
                break;
            
        }
        

        if (filled == 1){
            System.out.println("1 room, " + flooring + " square metre(s) left over");
        }
        else    
            System.out.println(filled + " rooms, " + flooring + " square metre(s) left over");
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