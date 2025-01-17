


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
     
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         Integer []a=new Integer[n];
         HashMap<Integer,Integer> mp=new HashMap<>();
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
             if(mp.containsKey(a[i])){
                 mp.put(a[i],mp.get(a[i])+1);
             }
             else {
                 mp.put(a[i],1);
             }
         }
         long cnt=0;
         for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
             Integer key = entry.getKey();
             Integer value = entry.getValue();
             cnt += 1l*(value)*(value-1)/2;
         }
         System.out.println(cnt);
}
}
