


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
         public static void xuly(int n ,int d[]){
             while(n!=0){
                 int r=n%10;
                 d[r]=1;
                 n/=10;
             }
         }
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int []a=new int [n];
         int []d=new int [10];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         for(int x:a){
             xuly(x,d);
         }
         for(int i=0;i<10;i++){
             if(d[i]==1){
                 System.out.print(i +" ");
             }
         }
         
                  
         
}
}
