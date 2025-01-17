


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

class Club{
    private String ma,ten;
    private int daDau,hieu,diem;

    public Club() {
    }

    public Club(String ma, String ten, int daDau, int hieu, int diem) {
        this.ma = ma;
        this.ten = ten;
        this.daDau = daDau;
        this.hieu = hieu;
        this.diem = diem;
    }

    public String getMa() {
        return ma;
    }

    public void setMa(String ma) {
        this.ma = ma;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public int getDaDau() {
        return daDau;
    }

    public void setDaDau(int daDau) {
        this.daDau = daDau;
    }

    public int getHieu() {
        return hieu;
    }

    public void setHieu(int hieu) {
        this.hieu = hieu;
    }

    public int getDiem() {
        return diem;
    }

    public void setDiem(int diem) {
        this.diem = diem;
    }
    public void display(int i){
        System.out.println("#"+i+" "+ma+" "+ten+" "+daDau+" "+hieu+" "+diem);
        System.out.println("------------------");
    }
}
public class HocLapTrinh {
       public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       ArrayList<Club> arr=new ArrayList<>();
       for(int i=1;i<=20;i++){
           sc.nextLine();
           Club a=new Club (sc.nextLine(),sc.nextLine(),sc.nextInt(),sc.nextInt(),sc.nextInt());
           arr.add(a);
           sc.nextLine();
           sc.nextLine();
       }
       for(int i=1;i<=10;i++){
           String s=sc.nextLine();
           String b[]=s.split("\\s+");
           int index=0;
           for(int j=0;j<b.length;j++){
               if(b[j].equals("-")){
                   index=j;
               }
           }
           int ban1=Integer.parseInt(b[index-1]);
           int ban2=Integer.parseInt(b[index+1]);
           String ans="";
           for(int j=0;j<index-1;j++){
               ans+=b[j]+" ";
           }
           ans=ans.substring(0,ans.length()-1);
           String res="";
           for(int j=index+2;j<b.length;j++){
               res+=b[j]+" ";
           }
           res=res.substring(0,res.length()-1);
           for(Club x:arr){
               if(x.getTen().equals(ans)){
                   x.setDaDau(x.getDaDau()+1);
                   x.setHieu(x.getHieu()+ban1-ban2);
                   if(ban1>ban2){
                       x.setDiem(x.getDiem()+3);
                   }
                   else if(ban1==ban2){
                       x.setDiem(x.getDiem()+1);
                   }
               }
               if(x.getTen().equals(res)){
                   x.setDaDau(x.getDaDau()+1);
                   x.setHieu(x.getHieu()+ban2-ban1);
                   if(ban2>ban1){
                       x.setDiem(x.getDiem()+3);
                   }
                   else if(ban1==ban2){
                       x.setDiem(x.getDiem()+1);
                   }
               }
                 
           }
           Collections.sort(arr,new Comparator<Club>(){
               @Override
               public int compare(Club t, Club t1) {
                   if(t.getDiem()==t1.getDiem()){
                       if(t.getHieu()>t1.getHieu()){
                           return -1;
                       }
                       return 1;
                   }
                   else {
                       if(t.getDiem()>t1.getDiem()){
                           return -1;
                       }
                       return 1;
                   }
               }
               
           });
       }
       int cnt=1;
           for(Club x:arr){
               x.display(cnt);
               cnt++;
           }
       
   }
} 



   