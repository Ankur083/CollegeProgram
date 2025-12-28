class Student{
    int roll_no;
    String name;
    String course;
    int m1,m2,m3;

    int total(){
        return m1+m2+m3;
    }
    double average(){
        return (double)total()/3;

    }
    int grade(){
        if(average()>=60){
            return 'A';
        }
        else{
            return 'B';
        }

    }
    String details(){
        return "Roll no:"+roll_no+"\n"+"Name:"+name+"\n"+"Course name:"+course+"\n";
    }

}


public class StudentTest{
    public static void main(String[] args) {
        Student s=new Student();
        s.roll_no=1;
        s.name="Ankur";
        s.course="CS";
        s.m1=76;
        s.m2=94;
        s.m3=86;
        System.out.println("Total:"+s.total());
        System.out.println("Average:"+s.average());
        System.out.println("Details:\n"+s.details());

    }
    
}
