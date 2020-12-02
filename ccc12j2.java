import java.util.*;
public class ccc12j2 {

    public static void main(String[] args){

        Scanner sc = new Scanner (System.in);
        int[] fish = new int[4];

        for (int i = 0; i<4; ++i)
            fish[i] = sc.nextInt();

        if (fish[0]< fish [1] && fish[1] < fish[2] && fish[2] <fish[3] )
            System.out.print("Fish Rising\n");

        else if (fish[0]> fish [1] && fish[1] > fish[2] && fish[2] >fish[3] )
            System.out.print("Fish Diving\n");

        else if (fish[0]== fish [1] && fish[1] == fish[2] && fish[2] ==fish[3] )
            System.out.print("Fish At Constant Depth\n");

        else
            System.out.print("No Fish\n");
    }
}