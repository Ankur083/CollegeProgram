
 interface test{
    void meth1();
    void meth2();

 }
 class Mytest implements test{
    public void meth1(){
        System.out.println("hello");
    }
    public void meth2(){
        System.out.println("world");
    }
    public void meth3(){
        System.out.println("Ankur");
    }
 }

public class interface_method {
    public static void main(String[] args) {
        test t=new Mytest();
        t.meth1();
        t.meth2();
        // t.meth3();
        Mytest tb=new Mytest();
        tb.meth1();
        tb.meth2();
        tb.meth3();

    

    }
    
}
