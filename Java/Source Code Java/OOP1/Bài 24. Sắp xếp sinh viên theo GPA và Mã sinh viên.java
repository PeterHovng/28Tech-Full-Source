


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
 class testClass {
       private String ma,ten,lop,ngaySinh;
       double gpa;

    public testClass(String ma, String ten, String lop, String ngaySinh, double gpa) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.ngaySinh = ngaySinh;
        this.gpa = gpa;
    }

    public String getMa() {
        return ma;
    }

    public double getGpa() {
        return gpa;
    }
    public void chuanHoa(){
        String []a= ten.trim().split("\\s+");
        String name="";
        for(String x:a){
            name+=Character.toUpperCase(x.charAt(0));
            for(int i=1;i<x.length();i++){
                name+=Character.toLowerCase(x.charAt(i));
            }
            name+=" ";
        }
        ten=name.trim();
        StringBuilder sb=new StringBuilder(ngaySinh);
        if(sb.charAt(1)=='/'){
            sb.insert(0,"0");
        }
        if(sb.charAt(4)=='/'){
            sb.insert(3,"0");
        }
        ngaySinh=sb.toString();
    }
    public String toString(){
        return ma+" "+ten+" "+lop+" "+ngaySinh+" "+String.format("%.2f",gpa);
    }
    
    

    
}



public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         testClass []a= new testClass[n];
         for(int i=0;i<n;i++){
             sc.nextLine();
             String ma=String.format("%03d", i+1);
             ma="SV"+ma;
             a[i]=new testClass(ma,sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextDouble());
             a[i].chuanHoa();
         }
         Arrays.sort(a,new Comparator<testClass>(){
             @Override
             public int compare(testClass t, testClass t1) {
                 if(t.getGpa()!=t1.getGpa()){
                     if(t.getGpa()<t1.getGpa()){
                         return 1;
                     }
                     else {
                         return -1;
                     }
                 }
                 else {
                     return t.getMa().compareTo(t1.getMa());
                 }
             }
         });
         for(testClass x:a){
             System.out.println(x);
         }
         
 }
         
} 

   