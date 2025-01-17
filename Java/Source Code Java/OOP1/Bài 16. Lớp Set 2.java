

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

class IntSet{
    private TreeSet<Integer> treeSet=new TreeSet<>();

    public IntSet() {
    }
    public IntSet(int []a){
        for(int x:a){
            treeSet.add(x);
        }
    }
    public IntSet(TreeSet<Integer> treeSet){
        this.treeSet=treeSet;
    }
    public IntSet union(IntSet b){
        TreeSet<Integer> res=new TreeSet<>();
        for(int x:this.treeSet){
            res.add(x);
        }
        for(int x:b.treeSet){
            res.add(x);
        }
        IntSet intSet=new IntSet(res);
        return intSet;
    }
    public String toString(){
        String res="";
        for(int x:treeSet){
            res+=x+" ";
        }
        return res;
    }
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int m=sc.nextInt();
         int a[]=new int [n];
         int b[]=new int [m];
         for(int i=0;i<n;i++){
             a[i]=sc.nextInt();
         }
         for(int j=0;j<m;j++){
             b[j]=sc.nextInt();
         }
         IntSet s1=new IntSet(a);
         IntSet s2=new IntSet(b);
         IntSet s3=s1.union(s2);
             System.out.println(s3);   
 } 
} 


   