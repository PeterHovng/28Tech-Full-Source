

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
         public static String convert(String s){
             String name="";
             String []a=s.split("\\s+");
             for(String x:a){
                 name+=Character.toUpperCase(x.charAt(0));
                 for(int j=1;j<x.length();j++){
                     name+=Character.toLowerCase(x.charAt(j));
                 }
                 name+=" ";
             }
             return name.trim();
         }
         public static String chuanHoa(String s){
             StringBuilder sb=new StringBuilder(s);
             if(sb.charAt(2)!='/'){
                sb.insert(0,"0");
             }
             if(sb.charAt(5)!='/'){
                 sb.insert(3,"0");
             }
             return sb.toString();
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
             System.out.println(convert(s));
         String t=sc.nextLine();
             System.out.println(chuanHoa(t));
}
}