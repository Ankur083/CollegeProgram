public class Account {
    int  accNo;
    String custName;
    double balance=0;
    static int count=0;

    Account(String n,double b){
        accNo=++count;
        custName=n;
        balance=b;
    }

    void deposite(long money){
        System.out.println("Account number:"+accNo+"\nAccount holder name:"+custName+"\nDeposite money:"+money);
        balance=balance+money;
        System.out.println("balance amount:"+balance);
    }


    void withdraw(long money){
        System.out.println("Account number:"+accNo+"\nAccount holder name:"+custName+"\nwidthdraw money:"+money);
        balance=balance-money;
        System.out.println("balance amount:"+balance);
    }


    void checkBalance(){
        System.out.println("Account number:"+accNo+"\nAccount holder name:"+custName+"\nbalance on your account:"+balance);

    }

    public static void main(String[]args){
    Account a1=new Account("Ankur",100000);
    Account a2=new Account("jayesh",200000);
    Account a3=new Account("Aseem",300000);
    Account a4=new Account("Aman",400000);

    a1.deposite(100000);
    System.out.println();
    a2. withdraw(100000);
    System.out.println();
    a3.checkBalance();
}
}
