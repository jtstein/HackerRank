package Algorithms.Implementation;
// Jordan Stein
// https://www.hackerrank.com/challenges/apple-and-orange

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class appleandorange{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int[] apple = new int[m];
        for(int apple_i=0; apple_i < m; apple_i++){
            apple[apple_i] = in.nextInt();
        }
        int[] orange = new int[n];
        for(int orange_i=0; orange_i < n; orange_i++){
            orange[orange_i] = in.nextInt();
        }
        
        int applesOnHouse = 0, orangesOnHouse = 0;
        
        for (int i = 0; i < apple.length; i++){
            
            if (apple[i] > 0){ // fall to right of a
                    if ( (s <= (a + apple[i])) && ((a + apple[i]) <= t) )
                        applesOnHouse++;
            }
        }


         for (int i = 0; i < orange.length; i++){

             if (orange[i] < 0){ // fell to left of b
                    if ( (s <= (b + orange[i])) && ((b + orange[i]) <= t) )
                        orangesOnHouse++;    
             }
        }
        
        System.out.println(applesOnHouse);
        System.out.println(orangesOnHouse);
          
    }
}