

class MyData{
    synchronized public  void display(String str){

        for(int i=0;i<str.length();i++){
            System.out.print(str.charAt(i));
        }
    }
}
class MyThread6 extends Thread{
    MyData d;
    MyThread6(MyData dat){
        d=dat;
    }
    public void run(){
        d.display("Hello World");
    }
}
class MyThread5 extends Thread{
    MyData data;
    MyThread5(MyData dat){
        data=dat;
    }
    public void run(){
        data.display("Welcome");
    }
}
public class TestSynchronize {
    public static void main(String[] args) {
        MyData d =new MyData();
        MyThread6 t1=new MyThread6(d);
        MyThread5 t2=new MyThread5(d);

        t2.start();
        t1.start();
    }
}