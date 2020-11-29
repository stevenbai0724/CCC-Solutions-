import java.util.*;
import java.io.*;
public class degreesOfSeperation {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        /*
        i x y - make person x and person y friends. If they are already friends, no change needs to be made. If either x or y is a new person, add them.
        d x y - delete the friendship between person x and person y.
        n x - output the number of friends that person x has.
        f x - output the number of "friends of friends" that person x has. Notice that x and direct friends of x are not counted as "friends of friends."
        s x y - output the degree of separation between x and y. If there is no path from x to y, output "Not connected".
        q - quit the program.
        */
        int n = 50;
        ArrayList<Integer>adj[] = new ArrayList[n+1];

        for (int i = 1; i<= n; i++){
            adj[i] = new ArrayList();
        }

        adj[1].add(6);adj[2].add(6);adj[3].add(4);adj[3].add(5);adj[3].add(6);
        adj[3].add(15);adj[4].add(3);adj[4].add(5);adj[4].add(6);adj[5].add(3);
        adj[5].add(3);adj[5].add(4);adj[5].add(6);adj[6].add(1);adj[6].add(2);
        adj[6].add(3);adj[6].add(4);adj[6].add(5);adj[6].add(7);adj[7].add(6);
        adj[7].add(8);adj[8].add(7);adj[8].add(9);adj[9].add(8);adj[9].add(10);
        adj[9].add(12);adj[10].add(9);adj[10].add(11);adj[11].add(10);
        adj[11].add(12);adj[12].add(9);adj[12].add(11);adj[12].add(13);
        adj[13].add(12);adj[13].add(14);adj[13].add(15);adj[14].add(13);
        adj[15].add(3);adj[15].add(13);adj[16].add(17);adj[16].add(18);
        adj[17].add(16);adj[17].add(18);adj[18].add(16);adj[18].add(17);


        while(true){
            String str = readLine();

            if(str.equals("q")){
                break;
            }
            else if(str.equals("i")){
                int x = readInt();
                int y = readInt();

                adj[x].add(y);
                adj[y].add(x);

            }
            else if(str.equals("d")){
                int x2 = readInt();
                int y2 = readInt();

                adj[x2].remove(adj[x2].indexOf(y2));
                adj[y2].remove(adj[y2].indexOf(x2));
            }
            else if(str.equals("n")){
                int x3 = readInt();

                System.out.println(adj[x3].size());
            }
            else if(str.equals("f")){
                int x4 = readInt();

                Queue<Integer>q = new LinkedList();
                boolean[] vis = new boolean[n+1];
                int[] dis = new int[n+1];
                int count = 0;
                q.add(x4);
                vis[x4] = true;

                while(!q.isEmpty()){
                    int cur = q.poll();

                    for(int i = 0 ; i< adj[cur].size(); i++){
                        int nxt = adj[cur].get(i);
                        if (vis[nxt] == false){
                            dis[nxt] = dis[cur]+1;
                            vis[nxt] = true;
                            q.add(nxt);
                        }
                    }
                }
                for (int i = 0 ;i<n ; i++){
                    if(dis[i]==2)
                        count++;
                }

                System.out.println(count);

            }
            else if(str.equals("s")){
                int x5 = readInt();
                int y5 = readInt();

                Queue<Integer>q2 = new LinkedList();
                boolean[] vis2 = new boolean[n+1];
                int[] dis2 = new int[n+1];
                q2.add(x5);
                vis2[x5] = true;

                while(!q2.isEmpty()){
                    int cur = q2.poll();
                    for(int i = 0; i<adj[cur].size(); i++){
                        int nxt = adj[cur].get(i);
                        if(vis2[nxt]==false){
                            vis2[nxt] = true;
                            dis2[nxt] = dis2[cur] + 1;
                            q2.add(nxt);
                        }
                    }
                }
                if(dis2[y5]>0){
                    System.out.println(dis2[y5]);
                }else   
                    System.out.println("Not connected");


            }
            
            
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