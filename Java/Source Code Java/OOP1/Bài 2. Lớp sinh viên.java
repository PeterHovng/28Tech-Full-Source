
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
       private String ten,ngaySinh;
       private double d1,d2,d3;

    public testClass(String ten, String ngaySinh, double d1, double d2, double d3) {
        this.ten = ten;
        this.ngaySinh = ngaySinh;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }

  
    public void inThongTin(){
        System.out.println(ten+" "+ngaySinh+" "+String.format("%.1f",(d1+d2+d3)));
    }
     
}





public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         testClass s= new testClass(sc.nextLine(),sc.nextLine(),sc.nextDouble(),sc.nextDouble(),sc.nextDouble());
         s.inThongTin();           
  }
}

   

