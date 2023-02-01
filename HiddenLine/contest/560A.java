
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF560A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           boolean ok = false;
           for(int i=0; i<n; i++){
               int a = input.nextInt();
               if(a == 1){
                   ok = true;
               }
           }
           if(ok == true){
               println("-1");
           }
           else{
               println("1");
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