

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
         s=s.replaceAll("0","");
         s=s.replaceAll("1","");
         s=s.replaceAll("4","322");
         s=s.replaceAll("6","53");
         s=s.replaceAll("8","7222");
         s=s.replaceAll("9","7332");
         char []arr=s.toCharArray();
         Arrays.sort(arr);
         StringBuilder sb=new StringBuilder(new String(arr));
         System.out.println(sb.reverse());
 }
       
} 

   