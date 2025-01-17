


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
         ArrayList<Integer> a= new ArrayList<>();
         for(int i=0;i<n;i++){
             a.add(sc.nextInt());
         }
         Collections.sort(a,new Comparator<Integer>() {
             @Override
             public int compare(Integer t, Integer t1) {
                 if(t%2==1 && t1%2==0){
                     return -1;
                 }
                 if(t%2==0 && t1%2==1){
                     return 1;
                 }
                 if(t%2==0 && t1%2==0){
                     return t-t1;
                 }
                 return t1-t;
             }
         });
         for(int x:a){
             System.out.print(x+" ");
         }
         
         
         
         
         
         
         
         
}
}
