


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
         int x=sc.nextInt();
         Integer [] a=new Integer[n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a,new Comparator<Integer>(){
             @Override
             public int compare(Integer t, Integer t1) {
                 if(Math.abs(t-x)!=Math.abs(t1-x)){
                     return Math.abs(t-x)-Math.abs(t1-x);
                 }
                 else {
                     return t-t1;
                 }
             }
         });  
         for(int w:a){
             System.out.print(w+" ");
         }
         System.out.println("");
         
         Arrays.sort(a,new Comparator<Integer>(){
             @Override
             public int compare(Integer t, Integer t1) {
                if(t%2==0 && t1%2==0){
                    return t-t1;
                }
                if(t%2==1 && t1%2==1){
                    return t1-t;
                }
                if(t%2==0 && t1%2==1){
                    return -1;
                }
                return 1;
             }
          });
         for(int q:a){
             System.out.print(q+" ");
         }
}
}
