


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

 class Author{
    private String name,email;
    private char gender;

    public Author() {
    }

    public Author(String name, String email, char gender) {
        this.name = name;
        this.email = email;
        this.gender = gender;
    }

    @Override
    public String toString() {
        return String.format("Author Information :\n" +
"%s\n" +
"%s\n" +
"%c\n" +
"--------------------",name,email,gender);
     
}
 }
class Book{
    private String name;
    private Author athor;
    private double price;
    private int qty;

    public Book(String name, Author athor, double price, int qty) {
        this.name = name;
        this.athor = athor;
        this.price = price;
        this.qty = qty;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    @Override
    public String toString() {
        return String.format("Book Details :\n" +
"%s\n" +
"%d\n" +
"%d\n",name,(int)price,qty)+athor.toString();
    }
}
public class HocLapTrinh {
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       sc.nextLine();
       ArrayList<Book> arr=new ArrayList<>();
       for(int i=0;i<n;i++){
           String ten=sc.nextLine();
           double gia=sc.nextDouble();
           int qty=sc.nextInt();
           sc.nextLine();
           Author a=new Author(sc.nextLine(),sc.nextLine(),sc.nextLine().charAt(0));
           Book s=new Book(ten,a,gia,qty);
           arr.add(s);
       }
       Collections.sort(arr,new Comparator<Book>(){
           @Override
           public int compare(Book t, Book t1) {
               if(t.getPrice()!=t1.getPrice()){
                   return (int) (t1.getPrice()-t.getPrice());
               }
               return t.getName().compareTo(t1.getName());
            }
       });
       for(Book x:arr){
           System.out.println(x);
       }
       
       
   }
} 



   