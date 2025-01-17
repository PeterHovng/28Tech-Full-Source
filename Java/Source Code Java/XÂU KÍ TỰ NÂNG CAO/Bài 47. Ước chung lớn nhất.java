

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
         public static long gcd(long a, long b){
             if(b==0){
                 return a;
             }
             return gcd(b,a%b);
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         long a=sc.nextLong();
         long x=sc.nextLong();
         long y=sc.nextLong();
         long k=gcd(x,y);
         for(int i=0;i<k;i++){
             System.out.print(a);
         }
    }
       
} 

   