

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

 
   static class GiaoVien{
       private String ma, ten,mon;

        public GiaoVien(int i, String ten, String mon) {
            this.ma = String.format("GV%02d",i);
            this.ten = ten;
            this.mon = mon;
        }
        public String getFirstName(){
            String []arr=ten.trim().split("\\s+");
            return arr[arr.length-1];
        }
        public void ChuanHoa(){
            String a[]=mon.trim().split("\\s+");
            String rut="";
            for(String x:a){
                rut+=Character.toUpperCase(x.charAt(0));
            }
            mon=rut.trim();
        }
        public String getMa() {
            return ma;
        }

        @Override
        public String toString() {
           return ma+ " "+ten+" "+mon;
        }
        
   }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       sc.nextLine();
       ArrayList<GiaoVien> s=new ArrayList<>();
       for(int i=0;i<n;i++){
           GiaoVien a=new GiaoVien(i+1,sc.nextLine(),sc.nextLine());
           a.ChuanHoa();
           s.add(a);
       }
       Collections.sort(s,new Comparator<GiaoVien>() {
           @Override
           public int compare(GiaoVien t, GiaoVien t1) {
              if(t.getFirstName().compareTo(t1.getFirstName())!=0){
                return t.getFirstName().compareTo(t1.getFirstName());
              }
              return t.getMa().compareTo(t1.getMa());
           }
       });
       for(GiaoVien x:s){
           System.out.println(x);
       }
   }
} 



   