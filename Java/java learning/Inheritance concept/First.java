class Circle{
    public double radius;
    public double area(){
        return 3.14*radius*radius;
    }
    public double circumference(){
        return 2*3.14*radius;
    }
}
class Cylinder extends Circle{
    public double height ;
    public double volume(){
        return area()*height;
    }
}

public class First {
    public static void main(String[] args) {
        Cylinder c=new Cylinder();
        c.radius=7;
        c.height=14;
        System.out.println("Volume of a cylinder:"+c.volume());
        System.out.println("Area of circle:"+c.area());
    }
    
}
