package Algorithms.Implementation;
// Jordan Stein
// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class beautifuldayatthemovies {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int day1 = sc.nextInt();
        int day2 = sc.nextInt();
        int k = sc.nextInt();
        int beautifulCount = 0;
        
        for (int i=day1; i < day2; i++){
            if (Math.abs(i-reverseInt(i)) % k == 0){
                beautifulCount++;
            }
        }
        
        System.out.println(beautifulCount);
        
    }
    
    public static int reverseInt(int num) {
        int result = 0;
        for(int i = num; i !=0; i /= 10) {
             result = result * 10 + i % 10;
        }
        return result;        
    }
    
}