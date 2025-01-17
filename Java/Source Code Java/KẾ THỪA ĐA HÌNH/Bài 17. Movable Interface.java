import java.util.*;
interface Movable {
    public abstract void moveUp();

    public abstract void moveDown();

    public abstract void moveLeft();

    public abstract void moveRight();
}
class MovablePoint implements Movable {
    int x, y, xSpeed, ySpeed;

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
class MovableCircle implements Movable {
    private int radius;
    private MovablePoint center;

    public MovableCircle(int x, int y, int xSpeed, int ySpeed, int radius) {
        this.center = new MovablePoint(x, y, xSpeed, ySpeed);
        this.radius = radius;
    }

    @Override
    public void moveUp() {
        center.y -= center.ySpeed;
    }

    @Override
    public void moveDown() {
        center.y += center.ySpeed;
    }

    @Override
    public void moveLeft() {
        center.x -= center.xSpeed;
    }

    @Override
    public void moveRight() {
        center.x += center.xSpeed;
    }

    @Override
    public String toString() {
        return center.toString();
    }
}

public class Lean {
    static int mod = (int) 1e9 + 7;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<MovableCircle> arr = new ArrayList<>();
        for (int i = 0; i < t; ++i) {
            MovableCircle m = new MovableCircle(sc.nextInt(), sc.nextInt(), sc.nextInt(), sc.nextInt(), sc.nextInt());
            int n = sc.nextInt();
            sc.nextLine();
            for (int j = 0; j < n; ++j) {
                String s = sc.next();
                if (s.equals("Down")) {
                    m.moveDown();
                } else if (s.equals("Up")) {
                    m.moveUp();
                } else if (s.equals("Right")) {
                    m.moveRight();
                } else {
                    m.moveLeft();
                }
            }
            arr.add(m);
        }
        for (MovableCircle x : arr) {
            System.out.println(x);
        }
    }
}