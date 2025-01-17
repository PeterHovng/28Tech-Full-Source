

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
import javafx.print.Collation;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
         public static String conCat(String []arr,int l,int r){
             String res="";
             for(int i=l;i<=r;i++){
                 res+=arr[i]+" ";
             }
             return res.trim();
         }
         public static void xuLy(String str,HashMap<String,Integer> mp){
             String []arr=str.trim().split("\\s+");
             int idx=0;
             for(int i=0;i<arr.length;i++){
                 if(arr[i].equals("-")){
                     idx=i;
                     break;
                 }
             }
             int banThang1=Integer.parseInt(arr[idx-1]);
             int banThang2=Integer.parseInt(arr[idx+1]);
             String tenDoi1=conCat(arr,0,idx-2);
             String tenDoi2=conCat(arr,idx+2,arr.length-1);
             if(mp.containsKey(tenDoi1)){
                 mp.put(tenDoi1,mp.get(tenDoi1)+banThang1);
             }
             else {
                 mp.put(tenDoi1,banThang1);
             }
             if(mp.containsKey(tenDoi2)){
                 mp.put(tenDoi2,mp.get(tenDoi2)+banThang2);
             }
             else {
                 mp.put(tenDoi2,banThang2);
             }
             
         }
         
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         HashMap<String,Integer> mp=new HashMap<>();
         //String s=sc.next();
         while(sc.hasNextLine()){
             String str=sc.nextLine();
             if(str.equals("0")){
                 break;
             }
             xuLy(str,mp);
         }
         ArrayList <String> tenName=new ArrayList<>();
             for (Map.Entry<String, Integer> entry : mp.entrySet()) {
                 String key = entry.getKey();
                 Integer value = entry.getValue();
                 tenName.add(key);
             }
             Collections.sort(tenName,new Comparator<String>(){
             @Override
             public int compare(String t, String t1) {
                 int ban1=mp.get(t);
                 int ban2=mp.get(t1);
                 if(ban1!=ban2){
                     return ban2-ban1;
                 }
                 else {
                    return t.compareTo(t1);
                 }
                 
             }
         });
             for(String x:tenName){
                 System.out.println(x+" "+mp.get(x));
             }
         
 } 
} 

   