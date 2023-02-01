
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF688A{
    public static void main(String[] args){
       final int N = 100050;
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int len = input.nextInt();
           int n = input.nextInt();
           int cnt = 0, res = 0;
           for(int i=0; i<n; i++){
               String s = input.next();
               boolean ok = false;
               for(int j=0; j<len; j++){
                   if(s.charAt(j) == '0'){
                       ok = true;
                       break;
                   }
               }
               if(ok == true){
                   cnt++;
                   res = Math.max(res, cnt);
               }
               else{
                   cnt = 0;
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