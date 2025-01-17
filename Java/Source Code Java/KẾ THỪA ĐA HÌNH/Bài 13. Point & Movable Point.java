


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

class Point {
    protected float x,y;

    public Point(float x, float y) {
        this.x = x;
        this.y = y;
    }
    
    
}
class MovablePoint extends Point{
    private float xSpeed,ySpeed;

    public MovablePoint( float x, float y,float xSpeed, float ySpeed) {
        super(x, y);
        this.xSpeed = xSpeed;
        this.ySpeed = ySpeed;
    }
    public MovablePoint move(){
        float xNew=this.x+this.xSpeed;
        float yNew=this.y+this.ySpeed;
        return new MovablePoint(xNew, yNew, xSpeed, ySpeed);
    }

    @Override
    public String toString() {
        return String.format("X : %s \n" +
"Y : %s \n" +
"X Speed : %s\n" +
"Y Speed : %s\n" +
"-------------------",String.format("%.2f",x),String.format("%.2f",y),String.format("%.2f",xSpeed),String.format("%.2f",ySpeed));
    
    
}
}
public class HocLapTrinh { 
       public static MovablePoint moveTime(MovablePoint a,int time){
           for(int i=0;i<time;i++){
               a=a.move();
           }
           return a;
           
       }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            MovablePoint a=new MovablePoint(sc.nextFloat(),sc.nextFloat(),sc.nextFloat(),sc.nextFloat());
            int times=sc.nextInt();
           
            System.out.println(moveTime(a, times));
            
        }   
}
} 



   