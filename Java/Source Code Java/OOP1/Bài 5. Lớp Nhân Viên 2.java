
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
       private String ma, ten,sex,ngaySinh,diaChi,MST,hd;

    public testClass(String ma, String ten, String sex, String ngaySinh, String diaChi, String MST, String hd) {
        this.ma = ma;
        this.ten = ten;
        this.sex = sex;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.MST = MST;
        this.hd = hd;
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
        StringBuilder sb1=new StringBuilder(hd);
         if(sb1.charAt(1)=='/'){
             sb1.insert(0,"0");
         }
         if(sb1.charAt(4)=='/'){
             sb1.insert(3,"0");
         }
         hd=sb1.toString();
    }
    public String toString(){
        return ma+" "+ten+" "+sex+" "+ngaySinh+" "+diaChi+" "+MST+" "+hd;
    }
  
}




public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         testClass s=new testClass("00001",sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
         s.chuanHoa();
         System.out.println(s);
         
         
 }

    
         
} 

   


