import java.util.Scanner;

class NhanVien {
    private String ma, ten, sex, ngaySinh, diaChi, mst, hd;

    public NhanVien(String ma, String ten, String sex, String ngaySinh, String diaChi, String mst, String hd) {
        this.ma = ma;
        this.ten = ten;
        this.sex = sex;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
        this.mst = mst;
        this.hd = hd;
    }

    public void chuanHoa() {
        StringBuilder sbNgaySinh = new StringBuilder(ngaySinh);
        if (sbNgaySinh.charAt(1) == '/') {
            sbNgaySinh.insert(0, "0");
        }
        if (sbNgaySinh.charAt(4) == '/') {
            sbNgaySinh.insert(3, "0");
        }
        ngaySinh = sbNgaySinh.toString();

        StringBuilder sbHd = new StringBuilder(hd);
        if (sbHd.charAt(1) == '/') {
            sbHd.insert(0, "0");
        }
        if (sbHd.charAt(4) == '/') {
            sbHd.insert(3, "0");
        }
        hd = sbHd.toString();
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + sex + " " + ngaySinh + " " + diaChi + " " + mst + " " + hd;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        NhanVien nv = new NhanVien("00001", sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        nv.chuanHoa();
        System.out.println(nv);
    }
}
