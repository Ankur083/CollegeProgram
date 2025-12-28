class Test{
    static int x;
    public static void check(){
        System.out.println("Ankur");
    }
}

public class stat {
    public static void main(String[]args){
//        Test t1=new Test();
//        t1.check();
//        t1.x=20;
        Test.check();
        Test.x=20;
    }
}
