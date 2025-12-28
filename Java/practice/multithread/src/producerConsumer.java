import java.sql.SQLOutput;

class MyData1{
    int value=0;
    boolean flag=true;
    synchronized void set(int v){
        while(flag!=true){
            try{wait();}catch(Exception e){}
        }
        value=v;
        flag=false;
        notify();

    }
    synchronized int get() {
        int x = 0;
        while (flag != false) {
            try {
                wait();
            }
            catch(Exception e){}
        }
        x = value;
        flag = true;
        notify();
        return x;
    }
}
class producer extends Thread{
    MyData1 d;
    producer(MyData1 dat){
        d=dat;
    }
    public void run(){
        int i=1;
        while(true){
            System.out.println("producer"+i);
            i++;
        }
    }
}
class consumer extends Thread{
    MyData1 data;
    consumer(MyData1 dat){
        data=dat;
    }
    public void run(){
        while(true) {
            System.out.println("consumer" + data.get());
        }
    }
}

public class producerConsumer {
    public static void main(String[] args) {
        MyData1 d=new MyData1();
        producer p=new producer(d);
        consumer c=new consumer(d);
        p.start();
        c.start();
    }
}
