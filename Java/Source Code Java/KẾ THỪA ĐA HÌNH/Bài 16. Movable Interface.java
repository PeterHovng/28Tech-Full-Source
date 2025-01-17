import java.util.*;
interface Movable {
    public abstract void moveUp();

    public abstract void moveDown();

    public abstract void moveLeft();

    public abstract void moveRight();
}

class MovablePoint implements Movable {
    private int x, y, xSpeed, ySpeed;

    public MovablePoint(int x, int y, int xSpeed, int ySpeed) {
        this.x = x;
        this.y = y;
        this.xSpeed = xSpeed;
        this.ySpeed = ySpeed;
    }

    @Override
    public void moveUp() {
        this.y -= this.ySpeed;
    }

    @Override
    public void moveDown() {
        this.y += this.ySpeed;
    }

    @Override
    public void moveLeft() {
        this.x -= this.xSpeed;
    }

    @Override
    public void moveRight() {
        this.x += this.xSpeed;
    }

    @Override
    public String toString() {
        return this.x + " " + this.y;
    }
}

public class Lean {
    static int mod = (int) 1e9 + 7;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<MovablePoint> arr = new ArrayList<>();
        for (int i = 0; i < n; ++i) {
            int x = sc.nextInt(), y = sc.nextInt(), xSpeed = sc.nextInt(), ySpeed = sc.nextInt();
            MovablePoint m = new MovablePoint(x, y, xSpeed, ySpeed);
            int q = sc.nextInt();
            sc.nextLine();
            while (q-- > 0) {
                String s = sc.next();
                if (s.equals("Down")) {
                    m.moveDown();
                } else if (s.equals("Up")) {
                    m.moveUp();
                } else if (s.equals("Left")) {
                    m.moveLeft();
                } else {
                    m.moveRight();
                }
            }
            arr.add(m);
        }
        for (MovablePoint x : arr) {
            System.out.println(x);
        }
    }
}