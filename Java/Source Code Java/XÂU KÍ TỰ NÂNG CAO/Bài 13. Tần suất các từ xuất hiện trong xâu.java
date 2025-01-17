

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
         TreeMap<String,Integer> mp=new TreeMap<>();
         String []a=s.split("\\s+");
         for(String x:a){
             if(mp.containsKey(x)){
                 mp.put(x,mp.get(x)+1);
             }
             else {
                 mp.put(x,1);
             }
         }
         for (Map.Entry<String, Integer> entry : mp.entrySet()) {
                 String key = entry.getKey();
                 Integer value = entry.getValue();
                 System.out.println(key+" "+value);
         }
             System.out.println("");
         for(String x:a){
             if(mp.containsKey(x)){
                 System.out.println(x+" "+mp.get(x));
                 mp.remove(x);
             }
         }
}
}