// Superclass
class Animal {
    int a=5;
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Subclass
class Dog extends Animal {
    int a=10;
    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

// Another Subclass
class Cat extends Animal {
    int a=15;
    @Override
    void sound() {
        System.out.println("Cat meows");
    }
}

public class Test{
    public static void main(String[] args) {
        Animal a; // superclass reference

        a = new Dog(); // object of Dog
        a.sound();
        System.out.println(a.a);// Output: Dog barks

        a = new Cat(); // object of Cat
        a.sound();
        System.out.println(a.a);// Output: Cat meows

     

    }
}



