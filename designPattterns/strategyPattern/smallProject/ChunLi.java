package designPattterns.strategyPattern.smallProject;

public class ChunLi extends fighter{
    public ChunLi(kickBehavior kickBehavior,
           jumpBehavior jumpBehavior) {
        super(kickBehavior, jumpBehavior);
    }
    void kick(){

    }
    void punch(){

    }
    @Override
    public void display() {
        System.out.println("ChunLi");
    }
}
