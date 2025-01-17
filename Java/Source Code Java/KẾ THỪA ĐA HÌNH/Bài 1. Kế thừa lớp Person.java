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
    private String ten ,ngaySinh,diaChi;

    public Nguoi(String ten, String ngaySinh, String diaChi) {
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
    public String toString(){
        return ten+" "+ngaySinh+" "+diaChi;
    }   
}
class testClass extends Nguoi{
    private String ma,lop;
    double gpa;

    public testClass(String ma, String lop, double gpa, String ten, String ngaySinh, String diaChi) {
        super(ten, ngaySinh, diaChi);
        this.ma = ma;
        this.lop = lop;
        this.gpa = gpa;
    }

    public String toString(){
        return ma+" "+super.toString()+" "+lop+" "+String.format("%.2f",gpa);
    }
}





public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         testClass []arr=new testClass[n];
         for(int i=0;i<n;i++){
             String ma=String.format("%04d",i+1);
             sc.nextLine();
             String ten,ngaySinh,diaChi,lop;
             double gpa;
             ten=sc.nextLine();
             String s=sc.nextLine();
             lop=sc.nextLine();
             gpa=sc.nextDouble();
             int idx=-1;
             for(int j=0;j<s.length();j++){
                 if(Character.isAlphabetic(s.charAt(j))){
                     idx=j;
                     break;
                 }
             }
             ngaySinh=s.substring(0, idx);
             diaChi=s.substring(idx);
             arr[i]=new testClass(ma,lop,gpa,ten,ngaySinh,diaChi);// con truoc cha
             arr[i].chuanHoa();       
         }
         for(testClass x:arr){
             System.out.println(x);
         }
    
 }
       
} 

   