

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
         public static void xuLy(String s){
             String res="";
             for(int i=0;i<s.length();i++){
                 if(Character.isDigit(s.charAt(i))){
                     res+=s.charAt(i);
                 }
                 else {
                     res+=" ";
                 }
             }
             String []arr=res.trim().split("\\s+");
             TreeMap<Integer,Integer> mp=new TreeMap<>();
             for(int i=0;i<arr.length;i+=2){
                 int heSo=Integer.parseInt(arr[i]);
                 int soMu=Integer.parseInt(arr[i+1]);
                 if(mp.containsKey(soMu)){
                     mp.put(soMu,mp.get(soMu)+heSo);
                 }
                 else {
                     mp.put(soMu,heSo);
                 }
             }
             int cnt=0;
             for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
                 Integer key = entry.getKey();
                 Integer value = entry.getValue();
                 System.out.print(value+"x^"+key);
                 ++cnt;
                 if(cnt<mp.size()){
                     System.out.print(" + ");
                 }
             }
             System.out.println("");
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         sc.nextLine();
         while(n-->0){
             String s=sc.nextLine();
             xuLy(s);
         }
 } 
} 


   