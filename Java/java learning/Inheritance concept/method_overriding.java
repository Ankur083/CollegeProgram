class Super{
    public void display(){
        System.out.println("My name is Ankur raj");
    }
}
class sub extends Super{
    public void display(){
        System.out.println("My name is Anmol raj");
    }

}
class method_overriding{
    public static void main(String[] args) {
        
    
    Super su=new Super();
    su.display();

    sub sb = new sub();
    sb.display();

    Super su1 = new sub();
    su1.display(); 
    }
}