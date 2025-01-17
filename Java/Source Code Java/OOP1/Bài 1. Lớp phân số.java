
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
       private long tu,mau;

    public testClass(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
    }

    
    public void toiGian(){
        long a=tu;
        long b=mau;
        while(b!=0){
            long r=a%b;
            a=b;
            b=r;
        }
        tu/=a;
        mau/=a;
    }

    public String toString(){
        return tu+ "/" +mau;
    }
    
     
}




public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
             testClass s = new testClass(sc.nextLong(),sc.nextLong());
             s.toiGian();
             System.out.println(s);
         }
}

   


