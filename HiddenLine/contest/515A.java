
//package codeforces;

import java.util.Scanner;

/**
 *
 * @author Amantu Amir
 */
public class CF515A{
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       int tc = 1;
       for(int i=1; i<=tc; i++){
           int x = Math.abs(input.nextInt());
           int y = Math.abs(input.nextInt());
           int total = input.nextInt();
           int sum = x+y;
           if(total < sum){
               prln("NO");
           }
           else{
               if(total >= sum){
                   total -= sum;
                   if(total%2 == 0){
                       prln("YES");
                   }
                   else{
                       prln("NO");
                   }
               }
           }
       }
    }
    static void prln(Object anyObject){
        System.out.println(anyObject);
    }
    static void pr(Object anyObject){
        System.out.print(anyObject);
    }
    static void nl(){
        System.out.print("\n");
    }
}