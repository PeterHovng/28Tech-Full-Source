

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

 
    
   static class Account{
       private String ma,id,user,pass;

        public Account() {
        }

        public Account(String ma, String id, String user, String pass) {
            this.ma = ma;
            this.id = id;
            this.user = user;
            this.pass = pass;
        }

        public String getUser() {
            return user;
        }

        public String getPass() {
            return pass;
        }
        
  
   }
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n=sc.nextInt();
       sc.nextLine();
       ArrayList<Account> arr=new ArrayList<>();
       for(int i=0;i<n;i++){
           Account x= new Account(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
           arr.add(x);
       }
       int t=sc.nextInt();
       sc.nextLine();
       while(t-->0){
           boolean ok=false;
           String user=sc.nextLine();
           String pass=sc.nextLine();
           for(Account x:arr){
               if(x.getUser().equals(user)){
                   if(x.getPass().equals(pass)){
                       ok=true;
                       break;
                   }
               }
               
           }
           if(ok){
               System.out.println("Login Successful");
           }
           else{
               System.out.println("Login Failed");
           }
       }
   }
} 



   