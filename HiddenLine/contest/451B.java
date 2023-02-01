
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF451B{
    public static void main(String[] args){
       final int N = 100050;
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           Vector<Integer> v = new Vector<Integer>();
           for(int i=0; i<n; i++){
               int a = input.nextInt();
               v.add(a);
           }
           boolean flag = false;
           int L = -1, R = -1, cnt = 0;
           for(int i=0; i<n-1; i++){
               if(v.get(i) > v.get(i+1)){
                   if(flag == false){
                       L = i; flag = true; cnt++;
                   }
                   R = i+1;
               }
               else{
                   flag = false;
               }
           }
           if(cnt == 0){
               println("yes\n1 1");
           }
           else if(cnt >= 2){
               println("no");
           }
           else{
               if(R != n-1 && L != 0){
                   if(v.get(L) < v.get(R+1) && v.get(L-1) < v.get(R)){
                       L++; R++;
                       println("yes\n"+L+" "+R);
                   }
                   else{
                        println("no");
                    }
                }
                else if(R != n-1){
                    if(v.get(L) < v.get(R+1)){
                        L++; R++;
                         println("yes\n"+L+" "+R);
                     }
                    else{
                        println("no");
                    }
                }
                else if(L != 0){
                    if(v.get(L-1) < v.get(R)){
                        L++; R++;
                        println("yes\n"+L+" "+R);
                     }
                    else{
                        println("no");
                    }
                }
                else{
                    L++; R++;
                    println("yes\n"+L+" "+R);
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