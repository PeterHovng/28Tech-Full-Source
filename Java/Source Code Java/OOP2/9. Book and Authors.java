import java.io.*;
import java.util.*;
import java.lang.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Author {
    private String name, mail, gender;


    public Author(String name, String mail, String gender) {
        this.name = name;
        this.mail = mail;
        this.gender = gender;
    }

    public String toString() {
        return "Name : " + this.name + "\n" + "Email : " + this.mail + "\n" + "Gender : " + this.gender;
    }
}

class Book {
    private String name;
    private ArrayList<Author> authors = new ArrayList<>();
    public static ArrayList<Book> listBook = new ArrayList<>();
    private double price;
    private int qty;
    public Book(){};

    public Book(String name, ArrayList<Author> authors, double price, int qty) {
        this.name = name;
        this.authors = authors;
        this.price = price;
        this.qty = qty;
        listBook.add(this);
    }

    public static void sapXep() {
        Collections.sort(listBook, new Comparator<Book>() {
            @Override
            public int compare(Book o1, Book o2) {
                return o1.name.compareTo(o2.name);
            }
        });
    }

    public void showInfor() {
        System.out.println("-----------------------\nBook information :\n" + "Name : " + this.name + "\n" +
                "Price : " + (int)this.price + "\n" + "Quantity : " + this.qty + "\n" +
                "Author information :");
        for (int i = 0; i < authors.size(); i++) {
            System.out.println("#" + (i + 1));
            System.out.println(authors.get(i));
        }
    }
}


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            String tmp = sc.nextLine();
            String tenSach = sc.nextLine();
            double price = sc.nextDouble();
            int qty = sc.nextInt();
            int n = sc.nextInt();
            sc.nextLine();
            ArrayList<Author> listAuthor = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                Author author = new Author(sc.nextLine(), sc.nextLine(), sc.nextLine());
                listAuthor.add(author);
            }
            Book book = new Book(tenSach, listAuthor, price, qty);
        }
        Book book = new Book();
        Book.sapXep();
        for (Book x : Book.listBook)
            x.showInfor();
    }
}