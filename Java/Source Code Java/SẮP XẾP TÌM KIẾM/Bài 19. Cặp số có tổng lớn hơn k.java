

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
     public static int firstPos(int []a ,int l, int r, int x){
         int res=-1;
         while(l<=r){
             int mid=(l+r)/2;
             if(a[mid]>x){
                 res=mid;
                 r=mid-1;
             }
             else {
                 l=mid+1;
             }
         }
         return res;
     } 
     public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int k=sc.nextInt();
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a);
         long cnt=0;
         for(int i=0;i<n;i++){
             int t1=firstPos(a,i+1,n-1,k-a[i]);
             if(t1!=-1){
                 cnt+=n-1-t1+1;
             }
         }
         System.out.print(cnt);
         
         
}
}
