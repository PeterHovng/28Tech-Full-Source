

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
         public static String chuanHoa(String s){
             StringBuilder sb=new StringBuilder(s);
             while(sb.length()>1 && sb.charAt(0)=='0'){
                 sb.deleteCharAt(0);
             }
             return sb.toString();
         }
         public static String findMax(String a , String b){
             if(a.length()<b.length()){
                 return b;
             }
             if(a.length()>b.length()){
                 return a;
             }
             if(a.compareTo(b)<0){
                 return b;
             }
             else {
                 return a;
             }
         }
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
         for(int i=0;i<a.length;i++){
             a[i]=chuanHoa(a[i]);
         }
         String res="";
         for(String x:a){
             res=findMax(res,x);
         }
             System.out.print(res);
}
}