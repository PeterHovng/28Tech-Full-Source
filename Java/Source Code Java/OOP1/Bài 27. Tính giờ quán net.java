

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

 static class Time{
    private int h,m;

        public Time() {
        }
    
        public Time(String str) {
            this.h =Integer.parseInt(str.substring(0,2));
            this.m =Integer.parseInt(str.substring(3));
        }
        public Time(int totalMinutes){
            this.h=totalMinutes/60;
            this.m=totalMinutes%60;
        }
        public int toMinutes(){
            return this.h*60+this.m;
        }
        public Time Diff(Time b){
            int minutesDiff=Math.abs(this.toMinutes()-b.toMinutes());
            return new Time(minutesDiff);
        }

        @Override
        public String toString() {
            return this.h+" gio "+this.m+" phut";
        }
        
    
}
 static  class Gamer{
    private String username,password,player;
    private Time timeIn,timeOut;

        public Gamer(String username, String password, String player, Time timeIn, Time timeOut) {
            this.username = username;
            this.password = password;
            this.player = player;
            this.timeIn = timeIn;
            this.timeOut = timeOut;
        }
        public Time calcDuration(){
           return timeOut.Diff(timeIn); 
        }

        @Override
        public String toString() {
            return username+" "+password+" "+player+" "+this.calcDuration().toString();
        } 

        public String getUsername() {
            return username;
        }
        
}


         public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int n=sc.nextInt();
         sc.nextLine();
         ArrayList<Gamer>  arr=new ArrayList<>();
         for(int i=0;i<n;i++){
             String username=sc.nextLine();
             String password=sc.nextLine();
             String player =sc.nextLine();
             String timeInStr=sc.nextLine();
             String timeOutStr=sc.nextLine();
             Time timeIn=new Time(timeInStr);
             Time timeOut =new Time(timeOutStr);
             Gamer a=new Gamer(username, password, player, timeIn, timeOut);
             arr.add(a);  
         }
         Collections.sort(arr, new Comparator<Gamer>(){
             @Override
             public int compare(Gamer t, Gamer t1) {
                 int m1=t.calcDuration().toMinutes();
                 int m2=t1.calcDuration().toMinutes();
                 if(m1!=m2){
                     return m2-m1;
                 }
                 return t.getUsername().compareTo(t1.getUsername());
             }
         });
         for(Gamer x:arr){
             System.out.println(x);
         }
         }
} 



   