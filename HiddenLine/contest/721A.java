
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF721A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           String s = input.next();
           int cnt = 0;
           Vector<Integer> res = new Vector<Integer>();
           for(int i=0; i<n; i++){
               if(s.charAt(i) == 'W'){
                   if(cnt != 0){
                       res.add(cnt);
                   }
                   cnt = 0;
               }
               else{
                   cnt++;
               }
           }
           if(cnt != 0){
               res.add(cnt);
           }
           if(res.size() != 0){
               int len = res.size();
               println(len);
               for(int i=0; i<len; i++){
                   print(res.get(i)+" ");
               }
           }
           else{
               println("0");
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