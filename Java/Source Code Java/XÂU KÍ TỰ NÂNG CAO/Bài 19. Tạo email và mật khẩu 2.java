

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
         int n=sc.nextInt();
         sc.nextLine();
         HashMap<String,Integer> mp=new HashMap<>();
         for(int i=0;i<n;i++){
             String s=sc.nextLine().toLowerCase();
             String []a=s.split("\\s+");
             int m=a.length;
             String email=a[m-2];
             for(int j=0;j<m-2;j++){
                 email+=a[j].charAt(0);
             }
             if(!mp.containsKey(email)){
                 System.out.println(email+"@xyz.edu.vn");
                 mp.put(email,1);
             }
             else {
                 mp.put(email,mp.get(email)+1);
                 System.out.println(email+mp.get(email)+"@xyz.edu.vn");
             }
             String[] b=a[m-1].split("/");
             for(String x:b){
                 System.out.print(Integer.parseInt(x));
             }
             System.out.println("");
         }
}
}