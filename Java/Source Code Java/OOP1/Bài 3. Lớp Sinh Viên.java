
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
       private double gpa;

    public testClass(String ma, String ten, String lop, String ngaySinh, double gpa) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.ngaySinh = ngaySinh;
        this.gpa = gpa;
    }

   
    public void chuanHoa(){
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
        return ma+" "+ten+" "+lop+" "+ngaySinh+" "+String.format("%.1f", gpa);
    }
     
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         testClass s=new testClass("SV001",sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextDouble());
         s.chuanHoa();
             System.out.println(s);
         }
}

   


