class MyThread1 extends Thread {
    public MyThread1(String name) {
        super(name);

    }
}

public class ThreadTest1 {
    public static void main(String[] args) {
        MyThread1 t = new MyThread1("Ankur");

        System.out.println("ID: " + t.getId());
        System.out.println("Name: " + t.getName());
        System.out.println("Priority: " + t.getPriority());
        System.out.println("State: " + t.getState());
        System.out.println("Alive: " + t.isAlive());
        t.start();
        System.out.println("State: " + t.getState());
        System.out.println("Alive: " + t.isAlive());
    }
}
