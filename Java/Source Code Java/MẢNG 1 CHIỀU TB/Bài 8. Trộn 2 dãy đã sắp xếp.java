


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
         int m=sc.nextInt();
         int []a=new int [n];
         int []b=new int [m];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         for(int i=0;i<m;i++){
             b[i]=sc.nextInt();
         }
         int i=0,j=0;
         while(i<n && j<m){
             if(a[i]<=b[j]){
                 System.out.print(a[i]+" ");
                 i++;
             }
             else {
                 System.out.print(b[j]+" ");
                 j++;
             }
         }
         while(i<n){
             System.out.print(a[i]+" ");
             i++;
         }
         while(j<m){
             System.out.print(b[j]+" ");
             j++;
         }     
}
}
