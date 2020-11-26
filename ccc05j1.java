import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);

        int day = sc.nextInt();
        int evening = sc.nextInt();
        int weekend = sc.nextInt();
        
        double a = 0;
        double b = 0;
        
        if (day>=100){
            a += (day-100)*0.25;
        }
        if (day>=250){
            b += (day-250)*0.25;
        }
        
        a+= (evening*.15) + (weekend*.20);
        b+= (evening*.35) + (weekend*.25);
        
        a = (Math.round(a * 100))/100.0;
        b= (Math.round(b * 100))/100.0;
        
        System.out.println("Plan A costs " + a);
        System.out.println("Plan B costs " + b);
        
        if (a>b){
            System.out.println("Plan B is cheapest.");
        }
        else if (b>a){
            System.out.println("Plan A is cheapest.");
        }
        else
            System.out.println("Plan A and B are the same price.");
        
       
        
    }
}