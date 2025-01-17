


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
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         System.out.println((a[1]-a[0])+" "+(a[n-1]-a[0]));
         for(int i=1;i<n-1;i++){
             int mini=Math.min((a[i]-a[i-1]),(a[i+1]-a[i]));
             int maxi=Math.max((a[i]-a[0]),(a[n-1]-a[i]));
             System.out.println(mini+" "+maxi);
         }
         System.out.println((a[n-1]-a[n-2])+" "+(a[n-1]-a[0]));
         
         
         
         
         
         
}
}
