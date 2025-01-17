

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
         
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         String []a=s.split("\\s+");
         TreeMap<String,Integer> mp = new TreeMap<>();
         for(String x:a){
             if(mp.containsKey(x)){
                 mp.put(x,mp.get(x)+1);
             }
             else {
                 mp.put(x,1);
             }
         }
         int txMax=0;
         int txMin=Integer.MAX_VALUE;
         String res="";
         String res1="";
             for (Map.Entry<String, Integer> entry : mp.entrySet()) {
                 String key = entry.getKey();
                 Integer value = entry.getValue();
                 if(value>=txMax){
                     txMax=value;
                     res=key;
                 }
                 if(value<=txMin){
                     txMin=value;
                     res1=key;
                 }   
             }
             System.out.println(res+ " "+ txMax);
             System.out.println(res1+" "+txMin);
             
         
         
         
         
        
  }
}