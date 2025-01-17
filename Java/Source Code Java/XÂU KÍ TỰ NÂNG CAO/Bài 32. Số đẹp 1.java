

import java.lang.reflect.Array;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.TreeMap;
import java.util.TreeSet;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
         public static boolean ngto(int n){
             for(int i=2;i<=Math.sqrt(n);i++){
                 if(n%i==0){
                     return false;
                 }
             }
             return true;
         }
         public static boolean check(String s){
             int sum=0;
             for(int i=0;i<s.length();i++){
                 int digit=s.charAt(i)-'0';
                 if(digit!=2 && digit!=3 && digit!=5 && digit!=7){
                     return false;
                 }
                 sum+=digit;
             }
             return ngto(sum);
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.next();
         if(check(s)){
             System.out.print("YES");
         }
         else {
             System.out.println("NO");
         }
          
    }
       
} 

   