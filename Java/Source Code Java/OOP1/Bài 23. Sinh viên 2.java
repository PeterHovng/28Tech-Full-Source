

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
class SinhVien{
    private String ma,ten,lop,ngaySinh;
    private double gpa;

    public SinhVien(int i, String ten, String lop, String ngaySinh, double gpa) {
        this.ma = String.format("SV%03d",i);
        this.ten = ten;
        this.ngaySinh = ngaySinh;
        this.lop = lop;
        this.gpa = gpa;
    }
    public void chuanHoa(){
        StringBuilder sb= new StringBuilder(ngaySinh);
        if(sb.charAt(1)=='/'){
            sb.insert(0,"0");
        }
        if(sb.charAt(4)=='/'){
            sb.insert(3,"0");
        }
        ngaySinh=sb.toString();
        String []arr =ten.trim().split("\\s+");
        String name="";
        for(String x:arr){
            name+=Character.toUpperCase(x.charAt(0));
            for(int i=1;i<x.length();i++){
                name+=Character.toLowerCase(x.charAt(i));
            }
            name+=" ";
        }
        ten=name.trim();
    }
    public String toString(){
        return ma+" "+ten+" "+lop+" "+ngaySinh+" "+String.format("%.2f",gpa); 
    }
    
    
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int n=sc.nextInt();
         ArrayList<SinhVien> a=new ArrayList<>();
         for(int i=0;i<n;i++){
             sc.nextLine();
             SinhVien s=new SinhVien(i+1,sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextDouble());
             s.chuanHoa();
             a.add(s);
         }
         for(SinhVien x:a){
             System.out.println(x);
         }
         
         }
} 



   