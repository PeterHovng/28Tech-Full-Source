

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
         public static int []d=new int [256];
         public static void convert(){
             d['I'] = 1;
             d['V'] = 5;

             d['X'] = 10;

             d['L'] = 50;

             d['C'] = 100;

             d['D'] = 500;

             d['M'] = 1000;
         }
         public static int xuLy(String s){
             int sum=0;
             for(int i=0;i<s.length();i++){
                 if(i==s.length()-1|| d[s.charAt(i)]>=d[s.charAt(i+1)]){
                     sum+=d[s.charAt(i)];
                 }
                 else {
                     sum-=d[s.charAt(i)];
                 }
             }
             return sum;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int t=sc.nextInt();
         convert();
         while(t-->0){
             String s=sc.next();
             System.out.println(xuLy(s));
         }
 } 
} 


   