


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
         int maxLen=1;
         int sumMaxLen=a[0];
         int curLen=1;
         int curSum=a[0];
         int st=0;
         for(int i=1;i<n;i++){
             if(a[i]!=a[i-1]){
                 curLen++;
                 curSum+=a[i];
             }
             else {
                 curLen=1;
                 curSum=a[i];
             }
             if(curLen>maxLen || curLen==maxLen && curSum>sumMaxLen){
                 maxLen=curLen;
                 sumMaxLen=curLen;
                 st=i-maxLen+1;
             }
         }
         System.out.println(maxLen);
         for(int i=st;i<st+maxLen;i++){
             System.out.print(a[i]+" ");
         }
         
         
         
}
}
