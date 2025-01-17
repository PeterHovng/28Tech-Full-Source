import java.io.*;
import java.util.*;

import java.io.*;
import java.util.*;

class myTime{
    private int hour,minute,second;

    public myTime() {
        hour = minute = second = 0;
    }

    public myTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }
    
    public int getHour(){
        return this.hour;
    }
    
    public void setHour(int hour){
        this.hour = hour;
    }
    
    public int getMinute(){
        return this.minute;
    }
    
    public void setMinute(int minute){
        this.minute = minute;
    }
    
    public int getSecond(){
        return this.second;
    }
    
    public void setSecond(int second){
        this.second = second;
    }
    
    public void nextHour(){
        this.hour = (this.hour+1)%24;
    }
    
    public void nextMinute(){
        this.minute = this.minute+1;
        if(this.minute==60){
            this.minute = 0;
            nextHour();
        }
    }
    
    public void nextSecond(){
        this.second = this.second+1;
        if(this.second == 60){
            this.second = 0;
            nextMinute();
        }
    }
    
    public void lastHour(){
        this.hour = (this.hour - 1 + 24)%24;
    }
    
    public void lastMinute(){
        this.minute = this.minute - 1;
        if(this.minute == -1){
            this.minute = 59;
            lastHour();
        }
    }
    
    public void lastSecond(){
        this.second = this.second - 1;
        if(this.second == -1){
            this.second = 59;
            lastMinute();
        }
    }
    
    public String toString(){
        return String.format("%02d", this.hour)+":"+ String.format("%02d", this.minute)+":"+String.format("%02d",this.second);
        
    }
}

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String tmp = sc.nextLine();
        int h = Integer.parseInt(tmp.substring(0,2));
        int m = Integer.parseInt(tmp.substring(3,5));
        int s = Integer.parseInt(tmp.substring(6,8));
        myTime t = new myTime(h,m,s);
        t.nextSecond();
        System.out.println(t);
        t.lastSecond();
        
        t.nextMinute();
        System.out.println(t);
        t.lastMinute();
        
        t.nextHour();
        System.out.println(t);
        t.lastHour();
        
        t.lastSecond();
        System.out.println(t);
        t.nextSecond();
        
        t.lastMinute();
        System.out.println(t);
        t.nextMinute();
        
        t.lastHour();
        System.out.println(t);
        t.nextHour();
        
    }
}