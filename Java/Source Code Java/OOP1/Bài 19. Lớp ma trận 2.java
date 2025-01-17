import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Matrix {
    private int n, m;
    private int a[][];
    
    public Matrix(int n, int m){
        this.n = n;
        this.m = m;
        a = new int[n][m];
    }
    
    public void nextMatrix(Scanner sc){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = sc.nextInt();
            }
        }
    }
    
    public Matrix mul(Matrix b){
        Matrix c = new Matrix(this.n, b.m);
        for(int i = 0; i < this.n; i++){
            for(int j = 0; j < b.m; j++){
                c.a[i][j] = 0;
                for(int k = 0; k < this.m; k++){
                    c.a[i][j] += this.a[i][k] * b.a[k][j];
                }
            }
        }
        return c;
    }
    
    public Matrix trans(){
        Matrix res = new Matrix(m, n);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                res.a[i][j] = this.a[j][i];
            }
        }
        return res;
    }
    
    public String toString(){
        String res = "";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                res += a[i][j] + " ";
            }
            res += "\n";
        }
        return res;
    }
}

public class DrivenClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        Matrix a = new Matrix(n, m);
        a.nextMatrix(sc);
        Matrix b = a.trans();
        System.out.println(a.mul(b));
    }
}