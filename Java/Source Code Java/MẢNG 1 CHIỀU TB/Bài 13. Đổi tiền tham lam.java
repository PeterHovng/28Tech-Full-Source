


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
         long n=sc.nextLong();
         int idx=0;
         long cnt=0;
         int []a={1000,500,200,100,50,20,10,5,2,1};
         while(n!=0){
             cnt+=n/a[idx];
             n=n%a[idx];
             idx++;
         }
         System.out.println(cnt);
         
}
}
