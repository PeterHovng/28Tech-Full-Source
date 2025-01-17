

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
         int n=sc.nextInt();
         String []a=new String[n];
         for(int i=0;i<n;i++){
             a[i]=sc.next();
         }
         Arrays.sort(a,new Comparator<String>(){
             @Override
             public int compare(String t, String t1) {
                 String x=t+t1;
                 String y=t1+t;
                 return y.compareTo(x);
             }
         });
         for(String x:a){
             System.out.print(x);
         }
         
  }
}