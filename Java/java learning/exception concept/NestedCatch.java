

public class NestedCatch {
    public static void main(String[]args){
        try{
            int a[]={30,20,10,40,0};
        int c=a[0]/a[4];
        System.out.println("Division "+c);
        try{
        System.out.println(a[5]);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of bound");
        }
    }
        catch(ArithmeticException e){
            System.out.println("divison by zero");
        }
        System.out.println("Bye");

    }
    
}
