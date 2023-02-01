
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF688B{
    public static void main(String[] args){
       final int N = 100050;
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           String s = input.next();
           String temp = Reverse(s);
           s = s+temp;
           println(s);
       }
    }
    
    static String Reverse(String s){
        StringBuilder sb = new StringBuilder(s);
        sb.reverse();
        return sb.toString();
    }
    
    static void println(Object anyObject){
        System.out.println(anyObject);
    }
    static void print(Object anyObject){
        System.out.print(anyObject);
    }
}