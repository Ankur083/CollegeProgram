class Product{
   public int itemNo;
    public String name;
    public int price;
    public int quantity;
    
    int getitemNo(){
        return itemNo;
    }
    String getname(){
        return "name";
    }
    int getprice(){
        return price;

    }
    int getquantity(){
        return quantity;

    }
    void setprice(int p){
        if(p>0){
            price=p;
        }
        else{
            price=0;
        }
    }
    Product(){
        itemNo=1;
        name="Ankur";
        price=1000;
        quantity=5;

    }

    Product(int itemNo,String name,int price,int quantity){
        this.itemNo=itemNo;
        this.name=name;
        this.price=price;
        this.quantity=quantity;
    }
}
class Customer{
    String customId;
    String name;
    String address;
    String phoneNum;

    Customer(String customId,String name){
        this.customId=customId;
        this.name=name;
        address="mumbai";
        phoneNum=9553356335;

    }
}


public class product1 {
    public static void main(String[] args) {
        Product p1=new Product();
        Product p2=new Product(2,sanjog,2000,7);
        Product p3=new Product(3,aseem,3000,3);
        Product p4=new Product(4,anmol,4000,9);
        System.out.println("name of the product"+p2.itemNo());
    }
    
}
