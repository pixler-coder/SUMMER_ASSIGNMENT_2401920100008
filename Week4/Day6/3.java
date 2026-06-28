class Point {

    private int x;
    private int y;

    // Default Constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

public class Main {

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();
    }
}