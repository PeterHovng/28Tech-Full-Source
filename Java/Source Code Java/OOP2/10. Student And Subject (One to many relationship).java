import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

class MonHoc {
    private String tenMonHoc;
    private int soTinChi;
    private double diem;

    public MonHoc(String tenMonHoc, int soTinChi, double diem) {
        this.tenMonHoc = tenMonHoc;
        this.soTinChi = soTinChi;
        this.diem = diem;
    }

    public String getTenMonHoc() {
        return tenMonHoc;
    }

    public void setTenMonHoc(String tenMonHoc) {
        this.tenMonHoc = tenMonHoc;
    }

    public int getSoTinChi() {
        return soTinChi;
    }

    public void setSoTinChi(int soTinChi) {
        this.soTinChi = soTinChi;
    }

    public double getDiem() {
        return diem;
    }

    public void setDiem(double diem) {
        this.diem = diem;
    }
    
}
class Student {
    private String maSinhVien, hoTen, lop;
    private ArrayList<MonHoc> list;

    public Student(String maSinhVien, String hoTen, String lop, ArrayList<MonHoc> list) {
        this.maSinhVien = maSinhVien;
        this.hoTen = hoTen;
        this.lop = lop;
        this.list = list;
    }
    
    public double getGpa(){
        int tongTinChi = 0;
        double tongDiem = 0;
        for(MonHoc x : list){
            tongTinChi += x.getSoTinChi();
            tongDiem += (x.getSoTinChi() * x.getDiem());
        }
        return tongDiem / tongTinChi;
    }

    public String getMaSinhVien() {
        return maSinhVien;
    }
    
    public String toString(){
        return maSinhVien + " " + hoTen + " " + lop + " " +String.format("%.2f", getGpa());
    }
}



public class Main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        Student[] arr = new Student[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            int m = Integer.parseInt(sc.nextLine());
            ArrayList<MonHoc> list = new ArrayList<>();
            for(int j = 0; j < m; j++){
                String tenMonHoc = sc.nextLine();
                int tinChi = sc.nextInt();
                double diem = sc.nextDouble();
                sc.nextLine();
                MonHoc x = new MonHoc(tenMonHoc, tinChi, diem);
                list.add(x);
            }
            arr[i] = new Student(ma, ten, lop, list);
        }
        Arrays.sort(arr, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
               if(o1.getGpa() != o2.getGpa()){
                   if(o1.getGpa() > o2.getGpa())
                       return -1;
                   else return 1;
               }
               else{
                   return o1.getMaSinhVien().compareTo(o2.getMaSinhVien());
               }
            }
        });
        for(Student x : arr){
            System.out.println(x);
            System.out.println("------------------------");
        }
    }
}