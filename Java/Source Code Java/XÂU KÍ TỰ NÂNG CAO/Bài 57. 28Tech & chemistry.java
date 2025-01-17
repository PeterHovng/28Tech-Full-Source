

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
         public static String[] tachChu(String s){
             String res="";
             for(int i=0;i<s.length();i++){
                 if(Character.isDigit(s.charAt(i))){
                     res+=" ";
                 }
                 else {
                     res+=s.charAt(i);
                 }
             }
             return res.trim().split("\\s+");
         }
         public static String[] tachSo(String s){
             String res="";
             for(int i=0;i<s.length();i++){
                 if(Character.isDigit(s.charAt(i))){
                     res+=s.charAt(i);
                 }
                 else {
                     res+=" ";
                 }
             }
             return res.trim().split("\\s+");
         }
         public static void xuLy(String s,HashMap<String,Integer> mp){
             String []arr1=tachChu(s);
             String []arr2=tachSo(s);
             int sum =0;
             for(int i=0;i<arr1.length;i++){
                 sum+=mp.get(arr1[i])*Integer.parseInt(arr2[i]);
             }
             System.out.println(sum);
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         HashMap<String,Integer> mp=new HashMap<>();
         for(int i=0;i<10;i++){
             String s=sc.next();
             int n=sc.nextInt();
             mp.put(s,n);
         }
         int t=sc.nextInt();
         while(t-->0){
             String str=sc.next();
             xuLy(str,mp);
         }
 } 
} 


   