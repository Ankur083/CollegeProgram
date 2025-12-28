class Circle{
    double radius;

    double Area( double radius){
        return 3.14 * radius * radius ;
    } 

    double circumference(double radius){
        return 2 * 3.14 * radius ;
    }
}
public class Circle1{
    public static void main(String[]args){
        double radius=7 ;
        Circle C1 = new Circle();
        System.out.println("Area of circle is :"+C1.Area(7));
        System.out.println("Circumference of circle is:"+C1.circumference(radius));

        Circle C2 = new Circle();
        System.out.println("Area of circle is "+C2.Area(14));
        System.out.println("Circumference of circle is :"+C2.circumference(radius));
    }
}