

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
 class Lecturer {
    private String ma,ten;
    private int luongCB;

    public Lecturer(String ma, String ten, int luongCB) {
        this.ma = ma;
        this.ten = ten;
        this.luongCB = luongCB;
    }
    public int getBacLuong(){
        return Integer.parseInt(this.ma.substring(2));
    }
    public String getChucVu(){
        return this.ma.substring(0,2);
    }
    public int PhuCap(){
        String cv=getChucVu();
        if(cv.equals("HT")){
            return  2000000;
        }
        if(cv.equals("HP")){
            return 900000;
        }
        return 500000;
    }
    public int ThuNhap(){
        return this.luongCB*getBacLuong()+PhuCap();
    }
    public String toString(){
        return ma+" "+ten+" "+getBacLuong()+" "+ThuNhap();
    }   
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         Lecturer a= new Lecturer(sc.nextLine(),sc.nextLine(),sc.nextInt());
             System.out.println(a);  
 } 
} 


   
