

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
         Arrays.sort(a);
         for(String x:a){
             System.out.print(x+" ");
         }
             System.out.println("");
         Arrays.sort(a,new Comparator<String>(){
             @Override
             public int compare(String t, String t1) {
                 if(t.length()!=t1.length()){
                     return t.length()-t1.length();
                 }
                 return t.compareTo(t1);
             }
         });
         for(String x:a){
             System.out.print(x+" ");
         }
         
        
  }
}