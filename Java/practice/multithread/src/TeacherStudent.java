class whiteBoard{
    String text;
    int no_of_student=0;
    int count=0;

    public void attandence(){
        no_of_student++;
    }

    synchronized public void write(String t){
        System.out.println(" Teacher is Writing "+t);
        while(count!=0)
            try{wait();}catch (Exception e){}
        text =t;
        count=no_of_student;
        notifyAll();
    }
    synchronized public String read(){
        while(count==0)
            try{wait();}catch (Exception e){}
        String t=text;
        count--;
        if(count==0)
            notify();
        return t;
    }
}
class Teacher extends Thread{
    whiteBoard wb;
    String notes[]={" Java is a language "," It is oops "," It is platform independent "," It supports Thread "," End "};

    public Teacher(whiteBoard w){
        wb=w;
    }
    public void run(){
        for(int i=0;i< notes.length;i++){
            wb.write(notes[i]);
        }

    }

}
class Student extends Thread{
    String name;
    whiteBoard wb;
    public Student(String n,whiteBoard w) {
        name = n;
        wb = w;
    }
    public void run(){
        String text;
        wb.attandence();
        do{
            text=wb.read();
            System.out.println(name+" Reading "+text);
            System.out.flush();
        }while(!text.equals(" End "));
    }


}
public class TeacherStudent {
    public static void main(String[] args) {
        whiteBoard wb=new whiteBoard();
        Teacher t=new Teacher(wb);
        Student s1=new Student("1. Ankur ",wb);
        Student s2=new Student("2. Aman ",wb);
        Student s3=new Student("3. Sanjog ",wb);
        Student s4=new Student("4. Subh ",wb);

        t.start();
        s1.start();
        s2.start();
        s3.start();
        s4.start();
    }
}
