

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
         public static boolean checkHoa(String s){
             int l=0;
             int r=s.length()-1;
             while(l<=r){
                 if(s.charAt(l)!=s.charAt(r)){
                     return false;
                 }
                 l++;
                 r--;
             }
             return true;
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         String []a=s.split("\\s+");
         ArrayList<String> list=new ArrayList<>();
         HashSet<String> se=new HashSet<>();
         for(String x:a){
             if(checkHoa(x) && se.contains(x)==false){
                 list.add(x);
                 se.add(x);
             }
         }
         Collections.sort(list,new Comparator<String>(){
             @Override
             public int compare(String t, String t1) {
                 return t.length()-t1.length();
             }    
         });
         for(String x:list){
             System.out.print(x+" ");
         }
         
         
        
  }
}