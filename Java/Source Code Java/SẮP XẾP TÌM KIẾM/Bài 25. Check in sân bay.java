


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
         Integer [][]a=new Integer [n][2];
         for(int i=0;i<n;i++){
            a[i][0]=sc.nextInt();
            a[i][1]=sc.nextInt();
         }
         Arrays.sort(a,new Comparator<Integer[]>(){
             @Override
             public int compare(Integer[] t, Integer[] t1) {
                 return t[0]-t1[0];
             } 
         });
         long res=0;
         for(int i=0;i<n;i++){
             if(a[i][0]>res){
                 res=a[i][0]+a[i][1];
             }
             else {
                 res=res+a[i][1];
             }
         }
             System.out.print(res);
         
         
       
}
}
