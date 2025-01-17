import java.util.Scanner;

class Lecturer {
    private static int count = 1;
    private int maNV;
    private String ten;
    private int luongCB, ngayCong;
    private String cvu;

    public Lecturer(String ten, int luongCB, int ngayCong, String cvu) {
        this.maNV = count++;
        this.ten = ten;
        this.luongCB = luongCB;
        this.ngayCong = ngayCong;
        this.cvu = cvu;
    }

    public int tienLuong() {
        return this.luongCB * this.ngayCong;
    }

    public int tienThuong() {
        int luong = tienLuong();
        if (this.ngayCong >= 25) {
            return luong / 5;
        }
        if (this.ngayCong >= 22) {
            return luong / 10;
        }
        return 0;
    }

    public int PhuCap() {
        if (this.cvu.equals("GD")) {
            return 250000;
        }
        if (this.cvu.equals("PGD")) {
            return 200000;
        }
        if (this.cvu.equals("TP")) {
            return 180000;
        }
        return 150000;
    }

    public int Luong() {
        return tienLuong() + PhuCap() + tienThuong();
    }

    public String toString() {
        return "NV" + String.format("%02d", maNV) + " " + ten + " " + tienLuong() + " " + tienThuong() + " " + PhuCap() + " " + Luong();
    }
}

public class HocLapTrinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       
        String ten = sc.nextLine();
        int luongCB = sc.nextInt();
        int ngayCong = sc.nextInt();
        sc.nextLine();
        String cvu = sc.nextLine();
        Lecturer a = new Lecturer(ten, luongCB, ngayCong, cvu);
        System.out.println(a);
    }
}
