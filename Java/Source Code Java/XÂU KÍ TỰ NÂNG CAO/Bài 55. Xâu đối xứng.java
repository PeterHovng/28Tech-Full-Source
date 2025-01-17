

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
import javafx.print.Collation;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
         public static void xuLy(String s, int[]d){
             for(int i=0;i<s.length();i++){
                 d[s.charAt(i)]++;
             }
         }
         public static boolean check(int []d){
             int cnt=0;
             for(int i=0;i<256;i++){
                 if(d[i]%2!=0){
                     ++cnt;
                 }
                 if(cnt>1){
                     return false;
                 }
             }
             return true;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int t=sc.nextInt();
         while(t-->0){
             String s1=sc.next();
             int []d1=new int[256];
             xuLy(s1,d1);
             if(check(d1)){
                 System.out.println("YES");
             }
             else {
                 System.out.println("NO");
             } 
         }
 } 
} 

   