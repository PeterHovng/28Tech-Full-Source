

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
import java.util.StringTokenizer;
import java.util.TreeMap;
import java.util.TreeSet;
import static javafx.scene.input.KeyCode.T;


public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         String s=sc.nextLine();
         long ans=s.length();
         int []cnt=new int[256];
         for(char x:s.toCharArray()){
             cnt[x]++;
         }
         for(int i=0;i<256;i++){
             if(cnt[i]!=0){
                 ans+=1l*cnt[i]*(cnt[i]-1)/2;
             }
         }
             System.out.println(ans);
  }
}