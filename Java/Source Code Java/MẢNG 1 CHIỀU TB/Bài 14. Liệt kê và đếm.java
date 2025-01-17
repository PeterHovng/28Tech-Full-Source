
//package javaapplication9;

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
import java.util.TreeMap;
import java.util.TreeSet;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
     public static boolean check(int n){
         while(n>=10){
             int r1=n%10;
             int r2=n/10%10;
             if(r1<r2){
                 return false;
             }
             n/=10;
         }
         return true;
     }
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         HashMap<Integer,Integer> mp=new HashMap<>();
         while(sc.hasNext()){
             int n=sc.nextInt();
             if(check(n)){
                 if(mp.containsKey(n)){
                     mp.put(n,mp.get(n)+1);
                 }
                 else {
                     mp.put(n,1);
                 }
             }
             
         }
         ArrayList<Integer> arr=new ArrayList<>();
         for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
             Integer key = entry.getKey();
             arr.add(key);     
         }
         Collections.sort(arr,new Comparator<Integer>() {
             @Override
             public int compare(Integer t, Integer t1) {
               int fre1=mp.get(t);
               int fre2=mp.get(t1);
               if(fre1!=fre2){
                   return fre2-fre1;
               }
               return t-t1;
             }
         });
         for(int key:arr){
             System.out.println(key+" "+mp.get(key));
         }
                
}
}
