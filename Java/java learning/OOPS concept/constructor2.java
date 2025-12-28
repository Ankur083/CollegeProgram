class cylinder{
    private double radius;
    private double height;

    cylinder(){
        radius=7;
        height=14;
    }
    cylinder(int r,int h){
        setradius(r);
        setheight(h);
    }
    cylinder(double s){
        radius=height=s;
    }

    double getradius(){
        return radius;
    }

    double getheight(){
        return height;
    }

    void setradius(int r){
        if(r>0){
            radius=r;
        }
        else{
            radius=0;
        }

    }
    void setheight(int h){
        if(h>0){
            height=h;
        }
        else{
            height=0;
        }

    }
    double csa(){
        return 2*3.14*radius*height;
    }
    

}
public class constructor2 {
    public static void main(String[] args) {
        cylinder cy1=new cylinder();
        cylinder cy2=new cylinder(14,28);
        cylinder cy3=new cylinder(21);
        System.out.println("curved surface Area:"+cy1.csa());
        System.out.println("curved surface Area:"+cy2.csa());
        System.out.println("curved surface Area:"+cy3.csa());
    }
    
}
