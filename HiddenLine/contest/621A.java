//package codeforces;
 
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
 
/**
 *
 * @author Amantu Amir
 */
public class CF621A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           Vector<Long> v = new Vector<Long>();
           long a, sum = 0, cnt = 0;
           for(int i=0; i<n; i++){
               a = input.nextLong();
               v.add(a);
               if(a%2 == 0){
                   sum += a;
               }
               else{
                   cnt++;
               }
           }
           if(cnt%2 != 0){
               cnt--;
           }
           Collections.sort(v);
           for(int i=n-1; i>=0; i--){
               long aa = v.get(i);
               //println(aa);
               if(aa%2 != 0 && cnt > 0){
                   sum += v.get(i);
                   cnt--;
               }
           }
           println(sum);
       }
    }
    static void println(Object anyObject){
        System.out.println(anyObject);
    }
    static void print(Object anyObject){
        System.out.print(anyObject);
    }
    static void nl(){
        System.out.print("\n");
    }
}