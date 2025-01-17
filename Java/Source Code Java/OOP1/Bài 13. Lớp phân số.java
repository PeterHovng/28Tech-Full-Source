

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

class PhanSo{
    private long tu, mau;

    public PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
        this.rutGon();
    }
    private long gcd(long a,long b){
        while(b!=0){
            long t=a%b;
            a=b;
            b=t;
        }
        return a;
    }
    private long lcm(long a, long b){
        return a/gcd(a,b)*b;
    }
    public void rutGon(){
        long k=gcd(this.tu,this.mau);
        this.tu/=k;
        this.mau/=k;
    }
    public PhanSo cong(PhanSo b){
        long mau1=this.mau*b.mau;
        long tu1=this.tu*b.mau+this.mau*b.tu;
        PhanSo tong=new PhanSo(tu1,mau1);
        return tong;
    }
    public PhanSo tich(PhanSo b){
        long tu1=this.tu*b.tu;
        long mau1=this.mau*b.mau;
        PhanSo tich=new PhanSo(tu1,mau1);
        return tich;
    }
    public String toString(){
        return tu+"/"+mau;
    }
    
    
}



public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int t =sc.nextInt();
         while(t-->0){
             PhanSo a=new PhanSo(sc.nextLong(),sc.nextLong());
             PhanSo b=new PhanSo(sc.nextLong(),sc.nextLong());
             PhanSo c=a.cong(b).tich(a.cong(b));
             PhanSo d=a.tich(b).tich(c);
             System.out.println(c+" "+d);
         }
         
 } 
} 


   