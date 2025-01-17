 

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
class Nguoi {
    private String ma,ten ,ngaySinh,diaChi;

    public Nguoi(String ma, String ten, String ngaySinh, String diaChi) {
        this.ma = ma;
        this.ten = ten;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
    }

   
    public Nguoi() {
        ten="";
        ngaySinh="";
        diaChi="";
    }
    
    public void chuanHoa(){
        String []a=ten.trim().split("\\s+");
        String name="";
        for(String x:a){
            name+=Character.toUpperCase(x.charAt(0));
            for(int j=1;j<x.length();j++){
                name+=Character.toLowerCase(x.charAt(j));
            }
            name+=" ";
        }
        ten=name.trim();
        StringBuilder sb= new StringBuilder(ngaySinh);
        if(sb.charAt(1)=='/'){
            sb.insert(0,"0");
        }
        if(sb.charAt(4)=='/'){
            sb.insert(3,"0");
        }
        ngaySinh=sb.toString();
    }

    public String getDiaChi() {
        return diaChi;
    }
    public String toString(){
        return ma+" " +ten+" "+ngaySinh+" "+diaChi;
    }   
}

 class testClass extends Nguoi{
    private String lop;
    double gpa;

    public testClass(String lop, double gpa, String ma, String ten, String ngaySinh, String diaChi) {
        super(ma, ten, ngaySinh, diaChi);
        this.lop = lop;
        this.gpa = gpa;
    }
    public String toString(){
        return super.toString()+" "+lop+" "+String.format("%.2f",gpa);
    }

    public String getLop() {
        return lop;
    }
}
 class Lecturer extends Nguoi{
    private String khoa,lop;
    private int luong;

    public Lecturer(String khoa, int luong, String ma, String ten, String ngaySinh, String diaChi,String lop) {
        super(ma, ten, ngaySinh, diaChi);
        this.khoa = khoa;
        this.lop = lop;
        this.luong = luong;
    }
    public String getLop() {
        return lop;
    }
    public String toString(){
        return super.toString()+" "+khoa+" "+luong;
    }
}

public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         ArrayList<testClass> arr1=new ArrayList<>();
         ArrayList<Lecturer> arr2=new ArrayList<>();
         for(int i=0;i<n;i++){
             String ma,ten,ngaySinh,diaChi,khoa,lop;
             int luong;
             double gpa;
             sc.nextLine();
             ma=sc.nextLine();
             if(ma.charAt(0)=='G'){
                 ten=sc.nextLine();
                 ngaySinh=sc.nextLine();
                 diaChi=sc.nextLine();
                 khoa=sc.nextLine();
                 luong=sc.nextInt();
                 lop=sc.nextLine();
                 Lecturer l = new Lecturer(khoa, luong, ma, ten, ngaySinh, diaChi, lop);
                 l.chuanHoa();
                 arr2.add(l);
             }
             else {
                 ten=sc.nextLine();
                 ngaySinh=sc.nextLine();
                 diaChi=sc.nextLine();
                 lop=sc.nextLine();
                 gpa=sc.nextDouble();
                 testClass l=new testClass(lop,gpa,ma,ten,ngaySinh,diaChi);
                 l.chuanHoa();
                 arr1.add(l);
             }
         }
          sc.nextLine();
          String diaChi=sc.nextLine();
             System.out.println("DANH SACH GIAO VIEN CO DIA CHI TAI "+diaChi+" :");
             for(Lecturer x:arr2){
                 if(x.getDiaChi().equals(diaChi)){
                     System.out.println(x);
                 }
             }
             System.out.println("DANH SACH SINH VIEN CO DIA CHI TAI "+diaChi+" :");
             for(testClass x:arr1){
                 if(x.getDiaChi().equals(diaChi)){
                     System.out.println(x);
                 }
             }
          
          
    }
       
} 

   



