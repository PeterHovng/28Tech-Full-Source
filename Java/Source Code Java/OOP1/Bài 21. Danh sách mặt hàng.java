

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
class MatHang{
    private String maMH,tenMH,donVi;
    private int giaMua,giaBan;
    public static ArrayList<MatHang> listMatHang=new ArrayList<>();

    public MatHang(int i, String tenMH, String donVi, int giaMua, int giaBan) {
        this.maMH = String.format("MH%04d",i);
        this.tenMH = tenMH;
        this.donVi = donVi;
        this.giaMua = giaMua;
        this.giaBan = giaBan;
        listMatHang.add(this);
        
    }
    public int loiNhuan(){
        return this.giaBan-this.giaMua;
    }
    public static void sort(){
        Collections.sort(listMatHang,new Comparator<MatHang>(){
            @Override
            public int compare(MatHang t, MatHang t1) {
                if(t.loiNhuan()!=t1.loiNhuan()){
                    return t1.loiNhuan()-t.loiNhuan();
                }
                return t.maMH.compareTo(t1.maMH);
            } 
        });
    }

    @Override
    public String toString() {
        return maMH + " " + tenMH + " " + donVi + " " + giaMua + " " + giaBan +" "+loiNhuan();
    } 
}
public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int n=sc.nextInt();
         for(int i=0;i<n;i++){
             sc.nextLine();
             MatHang a=new MatHang(i+1,sc.nextLine(),sc.next(),sc.nextInt(),sc.nextInt());
             a.loiNhuan();
         }
         MatHang.sort();
         for(MatHang x:MatHang.listMatHang){
             System.out.println(x);
         }
         }
} 



   