
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF651A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int a1 = input.nextInt();
           int a2 = input.nextInt();
           int res = 0;
           while((a1+a2) > 2 && a1>0 && a2>0){
               res++;
               if(a1>a2){
                   a2++; a1 -= 2;
               }
               else{
                   a2 -= 2; a1++;
               }
            }
           println(res);
       }
    }
    static void println(Object anyObject){
        System.out.println(anyObject);
    }
    static void print(Object anyObject){
        System.out.print(anyObject);
    }
}