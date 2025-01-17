

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
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         String t="";
         for(char x:s.toCharArray()){
             if(Character.isDigit(x)){
                 t+=x;
             }
             else{
                 t+=" ";
             }
         }
         String []a=t.split("\\s+");
         for(int i=0;i<a.length;i++){
             a[i]=chuanHoa(a[i]);
         }
         Arrays.sort(a,new Comparator<String>(){
             @Override
             public int compare(String t, String t1) {
                 String x=t+t1;
                 String y=t1+t;
                 return y.compareTo(x);
             }
         });
         for(String x:a){
             System.out.print(x);
         }
         
         
                  
  }
}

   