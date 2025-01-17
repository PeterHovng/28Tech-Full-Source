

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


public class HocLapTrinh {

 
   static class SinhVien{
     private String ma,ten,lop,email;

        public SinhVien(String ma, String ten, String lop, String email) {
            this.ma = ma;
            this.ten = ten;
            this.lop = lop;
            this.email = email;
        }

        public String getLop() {
            return lop;
        }

        public String getMa() {
            return ma;
        }

        @Override
        public String toString() {
           return ma+" "+ten+" "+lop+" "+email;
        }
     
 }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt(); sc.nextLine();
       ArrayList<SinhVien> arr=new ArrayList<>();
       for(int i=0;i<n;i++){
          
           SinhVien a=new SinhVien(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
           arr.add(a);
       }
       Collections.sort(arr,new Comparator<SinhVien>() {
           @Override
           public int compare(SinhVien t, SinhVien t1) {
               if(t.getLop().compareTo(t1.getLop())!=0){
                   return t.getLop().compareTo(t1.getLop());
               }
               return t.getMa().compareTo(t1.getMa());
           }
       });
           for(SinhVien x:arr){
               System.out.println(x);
           }
       
               
               
               
               
       
   }
} 



   