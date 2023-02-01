
//package codeforces;

import java.util.*;

/**
 *
 * @author Amantu Amir
 */
public class CF551A{
    public static void main(String[] args){
       final int N = 100050;
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           ArrayList<Integer> arl = new ArrayList<Integer>();
           for(int i=0; i<n; i++){
               arl.add(input.nextInt());
           }
           ArrayList<Integer> backup = (ArrayList<Integer>)arl.clone();
           Collections.sort(arl);
           Collections.reverse(arl);
           HashMap<Integer, Integer> mapping = new HashMap<>();
           int cnt = 1;
           for(int i=0; i<n; i++){
               if(mapping.get(arl.get(i)) == null){
                   mapping.put(arl.get(i), cnt++);
               }
               else{
                   cnt++;
               }
           }
           for(int i=0; i<n; i++){
               print(mapping.get(backup.get(i))+" ");
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