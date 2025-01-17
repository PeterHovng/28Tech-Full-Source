


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
     public static boolean check(int []a, int n){
         int d25=0,d50=0,d100=0;
         for(int x:a){
             if(x == 25){
                 d25++;
             }
             else if(x==50){
                 if(d25>=1){
                     d25--;
                     d50++;
                 }
                 else {
                     return false;
                 }
             }
             else {
                 if(d50>=1 && d25>=1){
                     d50--;
                     d25--;
                 }
                 else if(d25>=3){
                     d25-=3;
                 }
                 else {
                     return false;
                 }
                 d100++;
             }
         }
         return true;
     }
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         if(check(a,n)){
             System.out.println("YES");
         }
         else {
             System.out.println("NO");
         }
         
         
         
}
}
