class MyThread extends Thread{
    String message;
    static int i;
    public MyThread(String message){
        this.message=message;
    }

    public void run(){
            if(message.equals("Thread1")) {
                i = i + 5;
                System.out.println(i);
            }
            if(message.equals("Thread2")){
                i=i+15;
                System.out.println(i);
            }
            if(message.equals("Thread3")) {
                i = i + 25;
                System.out.println(i);
            }
    }

}


public class threading {
    public static void main(String[]args){
        MyThread t1=new MyThread("Thread1");
        MyThread t2=new MyThread("Thread2");
        MyThread t3=new MyThread("Thread3");

        t1.start();
        try {
            t1.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }


        t2.start();
        try {
            t2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }


        t3.start();

        try {
            t3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Final value of i: " + MyThread.i);
    }
}
