

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
         String t="";
         for(int i=0;i<s.length();i++){
             char c=s.charAt(i);
             if(Character.isAlphabetic(c)){
                 t+=" ";
             }
             else {
                 t+=c;
             }
         }
         t=t.trim();// thua xau rong o dau
         String []a=t.split("\\s+");
         long sum=0;
         for(String x:a){
             sum+=Long.parseLong(x);
         }
             System.out.println(sum);
}
}