

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


 class chuanHoa {
    public static String chuanHoaTu(String s){
        return Character.toUpperCase(s.charAt(0))+s.substring(1).toLowerCase();
    }
}

 class testClass {
   private double width,height;
   private String color;

    public testClass() {
    }

    public testClass(double width, double height, String color) {
        this.width = width;
        this.height = height;
        this.color = chuanHoa.chuanHoaTu(color);
    }
    public double findArea(){
        return this.width*this.height;
    }
    public double findPerimeter(){
        return 2*(this.width+this.height);
    }

    @Override
    public String toString() { 
        return (long)findPerimeter()+" "+(long)findArea()+" "+this.color;
    }
    
}

public class HocLapTrinh {
         public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int m=sc.nextInt();
         if(n<=0 || m<=0){
             System.out.println("INVALID");
         }
         else {
             testClass rec=new testClass(n,m,sc.next());
             System.out.println(rec);
         }
         
         
         
         
         
         
        
 } 
} 


   
