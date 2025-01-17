

import java.lang.reflect.Array;
import java.math.BigInteger;
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
        
         public static boolean check(String s, int k){
             for(int i=s.length()-1;i>=0;i--){
                 if(k>0){
                     if(s.charAt(i)!='0'){
                         return false;
                     }
                     k--;
                 }
             }
             return true;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.next();
         int k=sc.nextInt();
         if(check(s,k)){
             System.out.println("YES");
         }
         else {
             System.out.println("NO");
         }
    }
       
} 

   