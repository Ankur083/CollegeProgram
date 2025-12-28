class MyThread extends Thread{
    public MyThread(String name){
        super(name);
    }
    public void run(){

            System.out.println(" started working "+currentThread().getName());
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println(" Work interrupted.. ");
            }

    }
}

public class program1 {
    public static void main(String[] args) {
        MyThread t1 = new MyThread(" Ankur ");
        MyThread t2 = new MyThread(" Aman ");
        MyThread t3 = new MyThread(" Sanjog ");
        MyThread t4 = new MyThread(" Aseem ");
        MyThread t5 = new MyThread(" Anmol ");

        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}

