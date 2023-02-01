
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF719A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           if(n == 1){
               n = input.nextInt();
               if(n == 0){
                   println("UP");
               }
               else if(n == 15){
                   println("DOWN");
               }
               else{
                   println("-1");
               }
               return;
           }
           int a, last = 0, prev = 0;
           for(int i=0; i<n; i++){
               a = input.nextInt();
               if(i == n-2){
                   prev = a;
               }
               else if(i == n-1){
                   last = a;
               }
           }
           if(prev < last){
               if(last == 15){
                   println("DOWN");
               }
               else{
                   println("UP");
               }
           }
           else{
               if(last == 0){
                   println("UP");
               }
               else{
                   println("DOWN");
               }
           }
       }
    }
    static void println(Object anyObject){
        System.out.println(anyObject);
    }
    static void print(Object anyObject){
        System.out.print(anyObject);
    }
}