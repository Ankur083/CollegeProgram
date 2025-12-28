class MyThread4 extends Thread {

    public void run() {
        int count = 1;
        while (true) {
            System.out.println(count++ + "MyThread");
        }
    }
}

public class ThreadTest4 {
    public static void main(String[] args) {
        MyThread4 t=new MyThread4();
        t.start();
        int count = 1;
        while(true){
            System.out.println(count++ +"Main");
            Thread.yield();

        }

    }
}
