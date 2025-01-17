

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

class Circle {
    private double radius;
    private String color;
    private double pi=3.14;

    public Circle(double radius, String color) {
        this.radius = radius;
        this.color = color;
    } 
    public double getArea(){
        return this.pi*this.radius*this.radius;
    }

    public String getColor() {
        return color;
    }

    public double getRadius() {
        return radius;
    }
    
    
    
}
class Cylinder implements Comparable<Cylinder>{
    private double height;
    private Circle day;

    public Cylinder(double height, double radius,String color) {
        this.height = height;
        this.day=new Circle(radius,color);
    }
    public double getVolume(){
        return this.day.getArea()*this.height;
    }

    @Override
    public int compareTo(Cylinder t) {
        if(this.getVolume()>t.getVolume()){
            return -1;
        }
        if(this.getVolume()<t.getVolume()){
            return 1;
        }
        return this.day.getColor().compareTo(t.day.getColor());
    }

    @Override
    public String toString() {
        return String.format("Color : %s\n" +
"Height : %s\n" +
"Radius : %s\n" +
"Volume : %s\n" +
"-------------------",this.day.getColor(),String.format("%.2f",this.height),String.format("%.2f",this.day.getRadius()),String.format("%.2f",this.getVolume()));
    }
    
}
public class HocLapTrinh { 
       
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       ArrayList<Cylinder> list =new ArrayList<>();
       for(int i=0;i<n;i++){
           String mau=sc.next();
           Double radius=sc.nextDouble();
           Double h=sc.nextDouble();
           Circle a=new Circle(radius, mau);
           Cylinder s=new Cylinder(h,radius,mau);
           list.add(s); 
       }
       Collections.sort(list);
       for(Cylinder x:list){
           System.out.println(x);
       }
}
} 



   