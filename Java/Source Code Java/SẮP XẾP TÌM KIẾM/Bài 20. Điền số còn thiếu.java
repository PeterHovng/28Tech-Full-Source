


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
         TreeSet<Integer> se=new TreeSet<>();
         for(int i=0;i<n;i++){
             se.add(sc.nextInt());
         }
         int k=se.size();
         int q=se.first();
         int e=se.last();
             System.out.println(e-q+1-k);
         
         
}
}
