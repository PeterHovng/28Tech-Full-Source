

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


public class HocLapTrinh {

 
static  class Account{
        private String ma,id,number,pin;
        private int balance;
        public static ArrayList<Account> list=new ArrayList<>();
        private  int MIN_Update=50000;

        public Account() {
        }

        public Account(String ma, String id, String number, String pin, int balance) {
            this.ma = ma;
            this.id = id;
            this.number=number;
            this.pin = pin;
            this.balance = balance;
            this.list.add(this);
        }
        public static Account findAccByNumber(String number){
            for(Account x:list){
                if(x.number.equals(number)){
                    return x;
                }
            }
            return null;
        }
        public  boolean cantUpdate(int money){
            return this.balance>=money+MIN_Update;
        }
        public void updateTransfer(int money){
            this.balance+=money;
        }
        public static  void Tranfer(String X,String Y,int Z){
            Account fromCus=findAccByNumber(X);
            Account toCus=findAccByNumber(Y);
            if(fromCus.cantUpdate(Z)){
                fromCus.updateTransfer(-Z);
                toCus.updateTransfer(Z);
            }
        }
        public  static void Deposit(String X, int Z){
            Account cust=findAccByNumber(X);
            cust.updateTransfer(Z);
        }
        public static void Withdraw(String X,int Z){
            Account cust =findAccByNumber(X);
            if(cust.cantUpdate(Z)){
                cust.updateTransfer(-Z);
            }
        }

        @Override
        public String toString() {
            return String.format("ID : %s\n" +
       "CusID : %s\n" +
       "Number : %s\n" +
       "PIN : %s\n" +
       "Balance : %dVND\n" +
       "-------------------",this.ma,this.id,this.number,this.pin,this.balance);
        }
    }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       for(int i=0;i<n;i++){
          new Account(sc.next(),sc.next(),sc.next(),sc.next(),sc.nextInt());
       }
       int t=sc.nextInt();
       while(t-->0){
           String action =sc.next();
           if(action.equals("transfer")){
               Account.Tranfer(sc.next(),sc.next(),sc.nextInt());
           }
           else if(action.equals("deposit")){
               Account.Deposit(sc.next(),sc.nextInt());
           }
           else{
               Account.Withdraw(sc.next(),sc.nextInt());
           }
       }
       for(Account x:Account.list){
           System.out.println(x);
       }
       
       
   }
} 



   