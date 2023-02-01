
//package codeforces;

import java.util.Scanner;
import java.util.Vector;

/**
 *
 * @author Amantu Amir
 */
public class CF701A{
    public static void main(String[] args){
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int T=1; T<=tc; T++){
           int n = input.nextInt();
           Vector<Integer> vec = new Vector<Integer>();
           int a, sum = 0;
           for(int i=0; i<n; i++){
               a = input.nextInt();
               sum += a;
               vec.add(a);
           }
           int perPlayer = sum/(n/2);
           for(int i=0; i<n; i++){
               if(vec.get(i) != -1){
                    for(int j=i+1; j<n; j++){
                        //println(vec.get(i)+" "+vec.get(j));
                        if((vec.get(i)+vec.get(j)) == perPlayer){
                            vec.set(j, -1);
                            println((i+1)+ " " +(j+1));
                            break;
                        }
                    }
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
    static void nl(){
        System.out.print("\n");
    }
}