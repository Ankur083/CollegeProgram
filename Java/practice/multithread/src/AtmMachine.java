import java.sql.SQLOutput;

class ATM{
    synchronized public void checkBalance(String name){
        System.out.print(name+" Checking ");
        try{Thread.sleep(1000);}catch(Exception e){}
        System.out.println("Balance");
    }
    synchronized public void withdrawBalance(String name,int amount){
        System.out.print(name+" Withdrawing ");
        try{Thread.sleep(1000);}catch(Exception e){}
        System.out.println(amount);
    }
}
class Customer extends Thread{
    String name;
    ATM atm;
    int amount;
    Customer(String n,ATM a,int amt ){
        name=n;
        atm=a;
        amount=amt;
    }
    public void useATM(){
        atm.checkBalance(name);
        atm.withdrawBalance(name,amount);
    }
    public void run(){
        useATM();
    }
}

public class AtmMachine {
    public static void main(String[] args) {
        ATM atm=new ATM();
        Customer c1=new Customer("Ankur",atm,10000);
        Customer c2=new Customer("Sanjog",atm,5000);
        c1.start();
        c2.start();
    }
}
