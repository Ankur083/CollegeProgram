public class Main{
    public static void main(String[] args) {
        f(2);
    }
    public static void f(int n){
        if(n < 1)
            return;

        System.out.println("Ankur");

        f(n - 1);
        System.out.println("Aman");

        f(n - 1);
        System.out.println("shubh");

        f(n - 1);
        System.out.println("praveen");
    }
}