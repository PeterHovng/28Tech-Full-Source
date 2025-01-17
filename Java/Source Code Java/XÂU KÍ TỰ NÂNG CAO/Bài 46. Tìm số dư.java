

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
         public static int haiMu(int mod4){
             int []arr={1,2,4,3};
             return arr[mod4];
         }
         public static int baMu(int mod4){
             int []arr={1,3,4,2};
             return arr[mod4];
         }
         public static int bonMu(int mod2){
             int []arr={1,4};
             return arr[mod2];
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         BigInteger n=sc.nextBigInteger();
         BigInteger bon=new BigInteger("4");
         BigInteger hai=new BigInteger("2");
         int mod4=Integer.parseInt(n.mod(bon).toString());
         int mod2=Integer.parseInt(n.mod(hai).toString());
         int res=(1+haiMu(mod4)+baMu(mod4)+bonMu(mod2))%5;
             System.out.println(res);    
    }
       
} 

   