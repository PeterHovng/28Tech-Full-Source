


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
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a);
         int l=0,r=n-1;
         long cnt=0;
         while(l<r){
             int curSum=a[l]+a[r];
             if(curSum==k){
                 int d1=0;
                 int d2=0;
                 int x=a[l];
                 int y=a[r];
                 while(l<n && a[l]==x){
                     d1++;
                     l++;
                 }
                 while(r>=0 && a[r]==y){
                     d2++;
                     r--;
                 }
                 if(x==y){
                     cnt+= 1l* d1*(d1-1)/2;
                 }
                 else {
                     cnt+= 1l*d1*d2;
                 }
             }
             else if(curSum<k){
                l++;
              }
             else {
                --r;       
              }
         }
         System.out.println(cnt);
}
}
