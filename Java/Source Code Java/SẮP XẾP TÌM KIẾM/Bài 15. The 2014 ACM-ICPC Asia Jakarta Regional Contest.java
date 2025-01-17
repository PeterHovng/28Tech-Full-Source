


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
import java.util.TreeMap;
import java.util.TreeSet;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
     
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int k=sc.nextInt();
         ArrayList<Integer> arr=new ArrayList<>();
         for(int i=0;i<n;i++){
             arr.add(sc.nextInt());
         }
         Collections.sort(arr);
         int cnt=0;
         for(int i=1;i<n;i++){
             if(arr.get(i)-arr.get(i-1)>k){
                 ++cnt;
             }
         }
         System.out.println(cnt+1);
                  
         
         
         
         
         
}
}
