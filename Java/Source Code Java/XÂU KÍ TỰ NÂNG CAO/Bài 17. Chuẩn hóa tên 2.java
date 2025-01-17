

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
             name+=Character.toUpperCase(s.charAt(0));
             for(int j=1;j<s.length();j++){
                 name+=Character.toLowerCase(s.charAt(j));
             }
             return name;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         String []a=s.split("\\s+");
         a[a.length-1]=a[a.length-1].toUpperCase();
         for(int i=0;i<a.length-1;i++){
             a[i]=convert(a[i]);
             System.out.print(a[i]);
             if(i!=a.length-2){
                 System.out.print(" ");
             }
             else {
                 System.out.print(", ");
             }
         }
             System.out.println(a[a.length-1]);
             System.out.print(a[a.length-1]);
             System.out.print(", ");
             for(int i=0;i<a.length-1;i++){
                   a[i]=convert(a[i]);
                   System.out.print(a[i]);
                   if(i!=a.length-2){
                       System.out.print(" ");
                   }
                 
             }
}
}