

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
         BigInteger n=sc.nextBigInteger();
         BigInteger k=new BigInteger("6");
         BigInteger zero=new BigInteger("0");
         if(n.mod(k).equals(zero)){
             System.out.println("YES");
         }
         else {
             System.out.println("NO");
         }
         
          
    }
       
} 

   