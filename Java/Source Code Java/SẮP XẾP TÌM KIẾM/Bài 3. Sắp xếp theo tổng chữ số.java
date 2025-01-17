

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
     public static long tong(long n){
     long sum=0;
     while(n!=0){
         long r = (n % 10);
         sum+=r;
         n/=10;
     }
     return (long)sum;
}
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         Integer []a=new Integer[n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a,new Comparator<Integer>(){
             @Override
             public int compare(Integer t, Integer t1) {
               if(tong(t)==tong(t1)){
                   return t-t1;
               }
               else {
                   return (int) (tong(t)-tong(t1));
               }
             }
         });
         for(int x:a){
             System.out.print(x+" ");
         }
         
}
}
