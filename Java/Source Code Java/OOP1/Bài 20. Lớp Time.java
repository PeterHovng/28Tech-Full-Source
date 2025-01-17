

import java.lang.reflect.Array;
import java.math.BigInteger;
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
import javafx.print.Collation;
import static javafx.scene.input.KeyCode.T;

class Time{
    private int h,p,s;

    public Time(int h, int p, int s) {
        this.h = h;
        this.p = p;
        this.s = s;
    }
    public int toSecond(){
        return h*3600+p*60+s;
    }
    public String toString(){
        return h+" "+p+" "+s;
    }
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         ArrayList<Time> arr=new ArrayList<>();
         for(int i=0;i<n;i++){
             arr.add(new Time(sc.nextInt(),sc.nextInt(),sc.nextInt()));
         }
         Collections.sort(arr,new Comparator<Time>(){
             @Override
             public int compare(Time t, Time t1) {
                 return t.toSecond()-t1.toSecond();
             }
         });
         for(Time x:arr){
             System.out.println(x);
         }
 } 
} 


   