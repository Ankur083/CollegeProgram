class Super{
    public void meth1(){
        System.out.println("Super meth1");
    }
    public void meth2(){
        System.out.println("Super meth2");
    }
}
class sub extends Super{
    public void meth1(){
        System.out.println("sub meth1");
    }
    public void meth3(){
        System.out.println("sub meth3");
    }
}
public class Dynamic_method_dispatch {
    public static void main(String[] args) {
        Super su=new sub();
        su.meth1();
        su.meth2();
        // su.meth3();
    }
    
}
