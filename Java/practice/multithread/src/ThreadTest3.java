class MyThread3 extends Thread{
    public void run(){
        int count = 1;
        while(true){
            System.out.println(count++);
        }

    }
}
public class ThreadTest3{
    public static void main(String[] args) {
        MyThread3 t = new MyThread3();
        t.setDaemon(true);
        t.start();

//        try {
//            Thread.sleep(100);
//        }
//        catch (Exception e) {}
        Thread mainThread=Thread.currentThread();
        try{
            mainThread.join();
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}