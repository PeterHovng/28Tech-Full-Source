

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

class Person{
    protected String name,address;

    public Person() {
    }

    public Person(String name, String address) {
        this.name = name;
        this.address = address;
    }
}
class Student extends Person implements Comparable<Student>{
    private String program;
    private int year;
    private double fee;

    public Student() {
    }

    public Student(String name, String address,String program, int year, double fee) {
        super(name, address);
        this.program = program;
        this.year = year;
        this.fee = fee;
    }

    @Override
    public int compareTo(Student t) {
        if(this.fee<t.fee){
            return 1;
        }
        if(this.fee>t.fee){
            return -1;
        }
        return this.name.compareTo(t.name);
    }

    @Override
    public String toString() {
        return String.format("Full Name : %s\n" +
"Address : %s\n" +
"Program : %s\n" +
"Year : %d\n" +
"Fee : %s $\n" +
"-----------------",name,address,program,year,String.format("%.0f",fee));
    }
    
    
}
class Staff extends Person implements Comparable<Staff>{
    private String school;
    private double pay;

    public Staff() {
    }

    public Staff(String name, String address,String school, double pay) {
        super(name, address);
        this.school = school;
        this.pay = pay;
    }

    @Override
    public int compareTo(Staff t) {
        if(this.pay<t.pay){
            return 1;
        }
        if(this.pay>t.pay){
            return -1;
        }
        return this.name.compareTo(t.name);
    }

    @Override
    public String toString() {
       return String.format("Full Name : %s\n" +
"Address : %s\n" +
"School : %s\n" +
"Pay : %s $\n" +
"-----------------",name,address,school,String.format("%.0f",pay));
    }   
}
public class HocLapTrinh { 
       
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       int m=sc.nextInt();
       sc.nextLine();
       ArrayList<Student> list1=new ArrayList<>();
       ArrayList<Staff> list2=new ArrayList<>();
       for(int i=0;i<n;i++){
           sc.nextLine();
           Student s=new Student(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextInt(),sc.nextDouble());
           sc.nextLine();
           list1.add(s);
       }
       for(int i=0;i<m;i++){
           sc.nextLine();
           Staff s=new Staff(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextDouble());
           sc.nextLine();
           list2.add(s);
       }
       Collections.sort(list1);
       Collections.sort(list2);
           System.out.println("Student List :\n" +
"-----------------");
       for(Student x:list1){
           System.out.println(x);
       }
           System.out.println("Staff List :\n" +
"-----------------");
       for(Staff x:list2){
           System.out.println(x);
       }
       
       
       
}
} 



   