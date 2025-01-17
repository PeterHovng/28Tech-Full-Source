

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
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.next();
         int cnt=0;
         int n=s.length();
         for(int i=0;i<n;i++){
             cnt++;
             if(i == n-1|| i+1<n && s.charAt(i)!=s.charAt(i+1)){
                 System.out.print((char)s.charAt(i)+""+cnt);
                 cnt=0;
             }
         }
         
         
 } 
} 

   