

import com.sun.org.apache.bcel.internal.generic.ATHROW;
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

 class Vehicel{
    protected String ma,ten,hang,mausac;
    protected int giaban;

    public Vehicel(){
    }

    public Vehicel(String ma, String ten, String hang, String mausac, int giaban) {
        this.ma = ma;
        this.ten = ten;
        this.hang = hang;
        this.mausac = mausac;
        this.giaban = giaban;
    }

    public String getHang() {
        return hang;
    } 
}
 class XeMay extends Vehicel{
    private int  tocDo;

    public XeMay( String ma, String ten, String hang, String mausac,int tocDo, int giaban) {
        super(ma, ten, hang, mausac, giaban);
        this.tocDo = tocDo;
    }

    @Override
    public String toString() {
            
        return this.ma+" "+this.ten+" "+this.hang+" "+this.mausac+" "+this.tocDo+" "+this.giaban;
    
}
 }
class oTo extends Vehicel{
    private int maLuc;

    public oTo( String ma, String ten, String hang, String mausac,int maLuc, int giaban) {
        super(ma, ten, hang, mausac, giaban);
        this.maLuc = maLuc;
    }

        @Override
        public String toString() {
            return ma+" "+ten+" "+hang+" "+mausac+" "+maLuc+" "+giaban;
        }
}


public class HocLapTrinh { 
       public static boolean check(Vehicel a,String hang){
           if(a.getHang().equals(hang)){
               return true;
           }
           return false;
       }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       ArrayList <XeMay> listXM= new ArrayList<>();
       ArrayList<oTo> listoTO  =new ArrayList<>();
       for(int i=0;i<n;i++){
           String ma=sc.next();
           if(ma.charAt(0)=='O'){
               oTo a=new oTo(ma,sc.next(),sc.next(),sc.next(),sc.nextInt(),sc.nextInt());
               listoTO.add(a);
           }
           else{
               XeMay a=new XeMay(ma,sc.next(),sc.next(),sc.next(),sc.nextInt(),sc.nextInt());
               listXM.add(a);
           }
           
       }
       String findHang=sc.next();
           System.out.println(String.format("DANH SACH XE HANG %s :", findHang));
       for(oTo x:listoTO){
           if(check(x,findHang)){
               System.out.println(x);
           }
       }
       for(XeMay x:listXM){
           if(check(x,findHang)){
               System.out.println(x);
           }
       }
       
       
       
       
       
       
}
} 



   