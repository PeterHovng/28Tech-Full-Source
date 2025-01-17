import java.util.ArrayList;
import java.util.Scanner;
interface GeometricObject {
    public double getArea();
    public double getPerimeter();
}
class Circle implements GeometricObject{
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }
    @Override
    public double getArea(){
        return 3.14 * radius * radius;
    }
    
    @Override
    public double getPerimeter(){
        return 2 * 3.14 * radius;
    }
    @Override
    public String toString(){
        return "-----------------------\nRadius : " + String.format("%.02f", radius) + "\nPerimeter : " + String.format("%.02f", this.getPerimeter()) 
                + "\nArea : " + String.format("%.02f", this.getArea()) + "\n-----------------------";
    }    
}

class Rectangle implements GeometricObject{
    private double width, length;

    public Rectangle(double width, double length) {
        this.width = width;
        this.length = length;
    }
    public double getArea(){
        return width * length;
    }
    public double getPerimeter(){
        return 2 * (width + length);
    }
    @Override
    public String toString(){
        return "-----------------------\nWidth : " + String.format("%.02f", width) + "\nLength : " + String.format("%.02f", length)
                + "\nPerimeter : " + String.format("%.02f", this.getPerimeter()) 
                + "\nArea : " + String.format("%.02f", this.getArea()) + "\n-----------------------";
    }      
}

/**
 *
 * @author HP
 */
public class Driven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Circle> circles = new ArrayList<>();
        ArrayList<Rectangle> rectangles = new ArrayList<>();
        for(int i = 0; i < n; i++){
            char type = sc.next().charAt(0);
            if(type == 'C'){
                circles.add(new Circle(sc.nextDouble()));
            }else {
                double a = sc.nextDouble(), b = sc.nextDouble();
                rectangles.add(new Rectangle(Math.min(a, b), Math.max(a, b)));
            }
        }
        System.out.println("Circle :");
        for(Circle x: circles){
            System.out.println(x);
        }
        System.out.println("Rectangle :");
        for(Rectangle x: rectangles){
            System.out.println(x);
        }
    }
}