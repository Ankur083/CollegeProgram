class MyThread1 extends Thread{
    public MyThread1(String name){
        super(name);
    }
    public void run(){
        while(true) {
            System.out.println(currentThread().getName());
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e) {}
        }
    }
}

class MyThread2 extends Thread{
    public MyThread2(String name){
        super(name);
    }
    public void run(){
        while(true) {
            System.out.println(currentThread().getName());
            try {
                Thread.sleep(2000);
            }
            catch (InterruptedException e) {}
        }
    }
}

class MyThread3 extends Thread{
    public MyThread3(String name){
        super(name);
    }
    public void run(){
        while(true) {
            System.out.println(currentThread().getName());
            try {
                Thread.sleep(3000);
            }
            catch (InterruptedException e) {}
        }
    }
}
public class program2 {
    public static void main(String[] args) {
       MyThread1 t1=new MyThread1( " Good Morning ");
        MyThread2 t2=new MyThread2( " Hello ");
        MyThread3 t3=new MyThread3( " Welcome ");

        t1.start();
        try {
            Thread.sleep(1000);
        }
        catch (InterruptedException e) {}

        t2.start();
        try {
            Thread.sleep(2000);
        }
        catch (InterruptedException e) {}

        t3.start();
        try {
            Thread.sleep(3000);
        }
        catch (InterruptedException e) {}
    }
}
