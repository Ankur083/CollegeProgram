 class phone{
    void call(){
        System.out.println("call Anyone");

    }
    void sms(){
        System.out.println("sms anyone");

    }
}
interface camera{
    void click();
    void record();
}
interface musicPlayer{
    void play();
    void pause();
    void stop();
}
class Smartphone extends phone implements camera ,musicPlayer{
    void videoCall(){
        System.out.println("I am talking in videocall ");

    }
     public void click(){
        System.out.println("click the phone");

    }
    public void record(){
        System.out.println("Video is recording");

    }
    public void play(){
        System.out.println("Music is playing");

    }
    public void pause(){
        System.out.println("Music is pause");

    }
    public  void stop(){
        System.out.println("Music is stop");
    }
}

public class interfaceExamples {
    public static void main(String[] args) {
        Smartphone s= new Smartphone();
        phone p=s;
        camera c=s;
        musicPlayer mp=s;
        s.record();
        p.call();
        p.sms();
        c.click();
        c.record();
        mp.play();
        mp.stop();
        s.pause();


    }
    
}
