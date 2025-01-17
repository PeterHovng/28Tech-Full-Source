


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
     public static boolean check(Integer a[],int n){
         for(int c=0;c<n-2;c++){
             int l=c+1,r=n-1;
             long tage = 1l * a[c] * a[c];
             while(l<r){
                 long curSum=1l*a[l]*a[l]+1l*a[r]*a[r];
                 if(curSum==tage){
                     return true;
                 }
                 else if(curSum<tage){
                     r--;
                 }
                 else {
                     l++;
                 }
             }
             
         }
         return false;
     }
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         Integer []a=new Integer[n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a,new Comparator<Integer>() {
             @Override
             public int compare(Integer t, Integer t1) {
                 return t1-t;
             }
         });
         if(check(a,n)){
             System.out.println("YES");
         }
         else {
             System.out.println("NO");
         }
         
                
}
}
