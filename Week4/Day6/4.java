class Box {

    double length;
    double breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

public class Main {

    public static void main(String[] args) {

        Box box = new Box(10, 5);
        System.out.println("Area = " + box.area());

        Box3D box3 = new Box3D(10, 5, 4);
        System.out.println("Area = " + box3.area());
        System.out.println("Volume = " + box3.volume());
    }
}