


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


public class HocLapTrinh {
     public static int demchan(int n){
         int cnt=0;
         if(n==0){
             return 1;
         }
         while(n!=0){
             int t=n%10;
             if(t%2==0){
                 cnt++;
             }
             n/=10;
         }
         return cnt;
     }
     public static int demle(int n){
         int siu=0;
         while(n!=0){
             int t=n%10;
             if(t%2==1){
                 ++siu;
             }
             n/=10;
         }
         return siu;
     }
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         Integer []a=new Integer[n];
         Integer []b=new Integer[n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
             b[i]=a[i];
         } 
         Arrays.sort(a,new Comparator<Integer>(){
             @Override
             public int compare(Integer t, Integer t1) {
                  int a=demchan(t);
                  int b=demchan(t1);
                  if(a!=b){
                      return demchan(t)-demchan(t1);
                  }
                  return t-t1;
             }
         });
         for(int x:a){
             System.out.print(x+" ");
         }
         System.out.println("");
         Arrays.sort(b,new Comparator<Integer>(){
             @Override
             public int compare(Integer t, Integer t1) {
                 if(demle(t)!=demle(t1)){
                     return demle(t)-demle(t1);
                 }
                 return 0;
             }
             
         });
         for(int x:b){
             System.out.print(x+" ");
         }     
}
}
