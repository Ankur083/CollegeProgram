class Rectangle{
    private int length;
    private int breadth;

    Rectangle(int l,int b){
        setlength(l);
        setbreadth(b);
    }


    Rectangle(int s){
        length=breadth=s;
    }


    Rectangle(){
        length=1;
        breadth=1;
    }

    int getlength(){
        return length;
    }


    int getbreadth(){
        return breadth;
    }

    void setlength(int l){
        if(l>0){
            length=l;
        }
        else{
            length=0;
        }
    }

    void setbreadth(int b){
        if(b>0){
            breadth=b;
        }
        else{
            breadth=0;
        }

    }
    double Area(){
        return getlength()*getbreadth();
    }

}
public class constructor {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        Rectangle r2 = new Rectangle(4,5);
        Rectangle r3 = new Rectangle(6);

        System.out.println("Area is:"+r1.Area());
    }
}