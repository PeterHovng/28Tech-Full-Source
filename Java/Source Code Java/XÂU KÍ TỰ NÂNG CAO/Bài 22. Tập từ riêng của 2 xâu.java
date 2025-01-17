

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
         String s=sc.nextLine().toLowerCase();
         String t=sc.nextLine().toLowerCase();
         TreeSet<String> se=new TreeSet<>();
         TreeSet<String> se1=new TreeSet<>();
         String [] a=s.split("\\s+");
         String [] b=t.split("\\s+");
         for(String x:a){
             se.add(x);
         }
         for(String x:b){
             se1.add(x);
         }
         for(String x:se){
             if(!se1.contains(x)){
                 System.out.print(x+" ");
             }
         }
  }
}