

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Shape[] a = new Shape[n];
        for(int i = 0; i < n; i++){
            String s = sc.next();
            if(s.equals("C")){
                double r = sc.nextDouble();
                String color = sc.next();
                boolean filled = sc.nextBoolean();
                a[i] = new Circle(r, color, filled);
            }
            else if(s.equals("R")){
                double w = sc.nextDouble();
                double l = sc.nextDouble();
                String color = sc.next();
                boolean filled = sc.nextBoolean();
                a[i] = new Rectangle(Math.min(w, l), Math.max(w, l), color, filled);
            }
            else{
                double side = sc.nextDouble();
                String color = sc.next();
                boolean filled = sc.nextBoolean();
                a[i] = new Square(side, side, color, filled);
            }
        }
        System.out.println("Circle :");
        for(int i = 0; i < n; i++){
            if(a[i] instanceof Circle){
                System.out.print(a[i]);
            }
        }
        System.out.println("Rectangle :");
        for(int i = 0; i < n; i++){
            if(a[i] instanceof Rectangle && !(a[i] instanceof Square)){
                System.out.print(a[i]);
            }
        }
        System.out.println("Square :");
        for(int i = 0; i < n; i++){
            if(a[i] instanceof Square){
                System.out.print(a[i]);
            }
        }
        
    }
}


class Square extends Rectangle{

    public Square(double width, double length, String color, boolean filled) {
        super(width, length, color, filled);
    }
    
    @Override
    public double getArea() {
        return width * length;
    }

    @Override
    public double getPerimeter() {
        return 2 * (width + length);
    }
    
    public String toString(){
        return "-----------------------\n" + "Side : " + String.format("%.2f", this.width)
                +"\nColor : " + this.color 
                +"\nFilled : " + this.filled 
                +"\nPerimeter : " + String.format("%.2f", this.getPerimeter())
                +"\nArea : " + String.format("%.2f", this.getArea())
                +"\n-----------------------\n";
    }
}

class Rectangle extends Shape{
    
    protected double width, length;

    public Rectangle(double width, double length, String color, boolean filled) {
        super(color, filled);
        this.width = width;
        this.length = length;
    }

    @Override
    public double getArea() {
        return width * length;
    }

    @Override
    public double getPerimeter() {
        return 2 * (width + length);
    }
    
    public String toString(){
        return "-----------------------\n" + "Width : " + String.format("%.2f", this.width)
                +"\nLength : " + String.format("%.2f", this.length) 
                +"\nColor : " + this.color 
                +"\nFilled : " + this.filled 
                +"\nPerimeter : " + String.format("%.2f", this.getPerimeter())
                +"\nArea : " + String.format("%.2f", this.getArea())
                +"\n-----------------------\n";
    }
}


class Circle extends Shape{
    protected double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public Circle(double radius, String color, boolean filled) {
        super(color, filled);
        this.radius = radius;
    }

    @Override
    public double getArea() {
        return 3.14 * 3.14 * radius;
    }

    @Override
    public double getPerimeter() {
        return 2 * 3.14 * radius;
    }
    
    public String toString(){
        return "-----------------------\n" + "Radius : " + String.format("%.2f", this.radius)
                +"\nColor : " + this.color + "\nFilled : " + this.filled +"\nPerimeter : " + String.format("%.2f", this.getPerimeter()) +""
                + "\nArea : " + String.format("%.2f", this.getArea()) + "\n-----------------------\n";
    }
}


abstract class Shape {
    protected String color = "red";
    protected boolean filled = true;

    public Shape() {
    }
    
    public Shape(String color,  boolean filled){
        this.color = color;
        this.filled = filled;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
    
    public boolean isFilled(){
        return this.filled;
    }

    public void setFilled(boolean filled) {
        this.filled = filled;
    }
    
    public abstract double getArea();
    public abstract double getPerimeter();
    
}
