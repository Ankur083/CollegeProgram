import java.util.*;

class LCM {
    static int n1;
    static int n2;
    static int large;
    static int sm;
    static int l;

    public LCM(){
        n1 = 4;
        n2 = 5;
    }

    public void  Accept(int n1,int n2 ){

        if(n1 > n2){
             large = n1;
             sm = n2;
        }
        else{
             large =n2;
             sm = n1;
        }


    }

    public static int getLCM(int large, int small, int i) {

        int multiple = large * i;

        if (multiple % small == 0) {
            return multiple;
        }
        return getLCM(large, small, i + 1);
    }


    public void display(int n1,int n2,int Lcm ){
        System.out.println("first integer:" + n1);
        System.out.println("Second integer:" + n2);
        System.out.println("LCM of a two number is:"+ Lcm);
    }



     public static void main(String[] args) {

        LCM lcm =new LCM();
        lcm.Accept(n1, n2);

        l = getLCM(large,sm,1);
        lcm.display(n1, n2, l);

     }
}
