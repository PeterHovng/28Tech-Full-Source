


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
         int l=sc.nextInt();
         int []a=new int [n];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         Arrays.sort(a);
         double maxValue=a[0]-0;
         for(int i=1;i<n-1;i++){
             maxValue=Math.max(maxValue,(a[i]-a[i-1])/2.00);
         }
         maxValue=Math.max(maxValue,l-a[n-1]);
             System.out.printf("%.10f",maxValue);
      
}
}
