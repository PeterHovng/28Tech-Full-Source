

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
         public static boolean check(String s){
             String t="python";
             int j=0;
             for(char x:s.toCharArray()){
                 if(x==t.charAt(j)){
                     ++j;
                 }
                 if(j==6){
                     return true;
                 }
             }
             return false;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         if(check(s)){
             System.out.println("YES");
         }
         else {
             System.out.println("NO");
         }
         
         
         
         
  }
}