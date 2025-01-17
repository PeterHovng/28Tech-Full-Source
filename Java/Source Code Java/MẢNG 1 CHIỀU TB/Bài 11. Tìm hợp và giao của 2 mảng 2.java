


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
         int []b= new int [m];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         for(int j=0;j<m;j++){
             b[j]=sc.nextInt();
         }
         ArrayList<Integer> giao =new ArrayList<>();
         ArrayList<Integer> hop = new ArrayList<>();
         int i=0;
         int j=0;
         while(i<n && j<m){
             if(a[i]==b[j]){
                 giao.add(a[i]);
                 hop.add(b[j]);
                 i++;
                 j++;
             }
             else if(a[i]<b[j]){
                 hop.add(a[i]);
                 i++;
             }
             else {
                 hop.add(b[j]);
                 j++;
             }
         }
         while(i<n){
             hop.add(a[i]);
             i++;
         }
         while(j<m){
             hop.add(b[j]);
             j++;
         }
         for(int x:hop){
             System.out.print(x+" ");
         }
         System.out.println("");
         for(int x:giao){
             System.out.print(x+" ");
         }
         
}
}
