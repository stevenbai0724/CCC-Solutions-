import java.util.*;
import java.io.*;
public class ccc98s1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;
    public static void main(String[]args)throws IOException {
        
        int n = readInt();
        String[] arr = new String[n+1];

        for(int i=1;i<=n;i++){
            arr[i] = readLine();
           
        }
        for(int i=1;i<=n;i++){
            char[] index = new char[arr[i].length()];
            String ans = "";
            for(int j=0;j<arr[i].length();j++){
                index[j] = arr[i].charAt(j);
            }
            ArrayList<Integer>space = new ArrayList<Integer>();
            String temp = ' ' + arr[i] + ' ';  
            for(int j=0;j<temp.length();j++){
                if(temp.charAt(j)==' ')space.add(j);
            }
            for(int j=0;j<space.size()-1;j++){
            
                if((space.get(j+1))-(space.get(j))==5) 

                    for(int k=space.get(j);k<space.get(j+1)-1;k++) 

                        index[k] = '*';

            }

            for(int j =0;j<arr[i].length();j++){
                ans += index[j];
            }
            System.out.println(ans);
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