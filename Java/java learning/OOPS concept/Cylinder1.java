class Cylinder{
    double radius;
    double height;

    double csa(){
        return 2 * 3.14 * radius * height;
    }
    double tsa(){
        return 2*3.14*radius*(radius+height);
    }
    double vol(){
        return 3.14*radius*radius*height;
    }
}

public class Cylinder1 {
    public static void main(String[] args) {
        
        Cylinder cy1 = new Cylinder();
        cy1.radius = 14;
        cy1.height = 28;
        System.out.println("Curved Surface Area of cylinder:"+cy1.csa());
        System.out.println("Total surface area of cylinder:"+cy1.tsa());
        System.out.println("Volume of a cylinder:"+cy1.vol());
    }
    
}
