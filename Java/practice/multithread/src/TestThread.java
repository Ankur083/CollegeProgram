 class TestThread extends Thread {
    public void run(){
        int i=1;
        while(true){
            System.out.println(i+"Hello");
            i++;
        }
    }

     public static void main(String[] args) {
         TestThread t=new TestThread();
         t.start();
         int i=1;
         while(true){
             System.out.println(i+"World");
             i++;
         }
     }
}
