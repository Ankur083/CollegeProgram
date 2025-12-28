abstract class Super{
    Super(){
        System.out.println("Super");
    }
    public void meth1(){
        System.out.println("meth1");
    }
    abstract  void meth2();
}
class sub extends Super{
    void meth2(){
        System.out.println("meth2");
    }


}
public class abstract_class {
    public static void main(String[] args) {
        // Super s1=new Super();
        sub s2=new sub();
        s2.meth2();
    }
    
}
