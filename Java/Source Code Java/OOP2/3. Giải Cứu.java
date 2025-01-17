

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

class NhanVat{
    private int blood , power;
    private boolean alive;

    public NhanVat(int blood, int power, boolean alive) {
        this.blood = blood;
        this.power = power;
        this.alive = alive;
    }
    public void mushroom(){
        if(alive){
            blood -=15;
            power-=2;
            if(blood <=0 || power<=0){
                alive =false;
            }
        }
    }
    public void witch(int x){
        if(alive){
            if(x>=power){
                blood=0;
                power=0;
                alive=false;
            }
            else {
                power+=5;
            }
        }
    }
    public void pea(){
        if(alive){
            blood+=10;
            power+=2;
        }
    }
    public void soldier(int x){
        if(alive){
            if(x>=power){
                blood=0;
                power=0;
                alive=false;
            }
            else {
                blood+=5;
                power+=7;
            }
        }
    }

    @Override
    public String toString() {
        String tmp="ALIVE";
        if(!alive){
            tmp="DEAD";
        }
       return String.format("POWER : %d\n" +
"BLOOD : %d\n" +
"%s\n" +
"--------------------",this.power,this.blood,tmp);
    }
}
public class HocLapTrinh {
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       String s1=sc.nextLine();
       String s2=sc.nextLine();
       String s3=sc.nextLine();
       boolean alive=true;
       if(s3.equals("DEAD")){
           alive =false;
       }
       NhanVat s =new NhanVat(Integer.parseInt(s1.substring(8)),Integer.parseInt(s2.substring(8)),alive);
       int n=sc.nextInt();
       sc.nextLine();
       for(int i=0;i<n;i++){
           String t=sc.nextLine();
           if(t.charAt(0)=='m'){
               s.mushroom();
           }
           else if(t.charAt(0)=='p'){
               s.pea();
           }
           else if(t.charAt(0)=='w'){
               s.witch(Integer.parseInt(t.substring(6)));
           }
           else {
               s.soldier(Integer.parseInt(t.substring(8)));
           }
           System.out.println(s);
       } 
   }
} 



   