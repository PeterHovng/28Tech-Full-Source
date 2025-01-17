

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
         BigInteger bon=new BigInteger("4");
         int mod=Integer.parseInt(n.mod(bon).toString());
         if(n.toString().equals("0")){
             System.out.println("1");
         }
         else if(mod==1){
             System.out.println("8");
         }
         else if(mod==2){
             System.out.println("4");
         }
         else if(mod==3){
             System.out.println("2");
         }
         else {
             System.out.println("6");
         }
         
    }
       
} 

   