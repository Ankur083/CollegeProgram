class rectangle {
    private int length;
    private int breadth;


    int getlength(){
        return length;
    }

    
    }
    void setlength(int l){
        if(l>0){
            length=l;
        }
        else{
            length=0;
        }
    }
    int getbreadth(){
        return breadth;
    }
    void setbreadth(int b){
        if(b>0){
            breadth=b;
        }
        else{
            breadth=0;
        }
    }
    int area(){
        return length*breadth;
    }
}



public class data_hiding {
    public static void main(String[] args) {
        rectangle r = new rectangle();
        r.setlength(5);
        r.setbreadth(10);
        System.out.println("Area is :"+r.area());
        System.out.println("length"+r.getlength());
        System.out.println("breadth"+r.getbreadth());

    }
    
}
