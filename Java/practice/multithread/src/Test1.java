 class MyRunnable implements Runnable{
    public void run(){
        int i=1;
        while(true){
            System.out.println(i+"Hello");
            i++;
        }
    }
 }

 public class Test1 {
     public static void main(String[] args) {
         MyRunnable m=new MyRunnable();
         Thread t=new Thread(m);
         t.start();
         int i=1;
         while(true){
             System.out.println(i+"World");
             i++;
         }


     }
 }



