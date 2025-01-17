


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
     public static int gcd(int a,int b){
         if(b==0){
             return a;
         }
         return gcd(b,a%b);
     }
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         int dem=0;
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(gcd(a[i],a[j])==1){
                     ++dem;
                 }
             }
         }
         System.out.println(dem);
         
         
         
         
         
         
}
}
