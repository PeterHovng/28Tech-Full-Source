import java.util.ArrayList;
import java.util.Scanner;
interface GeometrixObject {
    public abstract double getArea();
    public abstract double getPerimeter();
}
interface Resizable {
    public abstract void resize(double percent);
}
class Circle implements GeometrixObject{
    protected double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public String toString() {
        return "Radius : "+String.format("%.2f",radius)+"\n"+"Perimeter : "+String.format("%.2f",this.getPerimeter())+"\n"+"Area : "+String.format("%.2f",this.getArea());
    }
    
    @Override
    public double getArea(){
        return 3.14 * radius * radius;
    }

    @Override
    public double getPerimeter() {
        return 2 * 3.14 *radius;
    }
    
}
class ResizableCircle extends Circle implements Resizable{
    
    public ResizableCircle(double radius) {
        super(radius);
    }
    

    @Override
    public String toString() {
        return "Radius : "+String.format("%.2f",radius)+"\n"+"Perimeter : "+String.format("%.2f",this.getPerimeter())+"\n"+"Area : "+String.format("%.2f",this.getArea());
    }

    @Override
    public void resize(double percent) {
        radius *= percent/(1.0*100);
    }
    
    
}


public class hackerrank {      
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<ResizableCircle> arr = new ArrayList();
        for(int i=0;i<n;i++){
            double radius =  Double.parseDouble(sc.next());
            int t = Integer.parseInt(sc.next());
            ResizableCircle tmp = new ResizableCircle(radius);
            while(t-->0){
                double percent = Double.parseDouble(sc.next());
                tmp.resize(percent);
            }
            arr.add(tmp);
        }
        for(ResizableCircle x : arr){
            System.out.println("---------------------");
            System.out.println(x);
            System.out.println("---------------------");
        }
    }
}