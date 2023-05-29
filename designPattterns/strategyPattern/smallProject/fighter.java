package designPattterns.strategyPattern.smallProject;

public abstract class fighter{
    kickBehavior kickBehavior;
    jumpBehavior jumpBehavior;
    
    public fighter(kickBehavior kickBehavior,jumpBehavior jumpBehavior){
        this.kickBehavior=kickBehavior;
        this.jumpBehavior=jumpBehavior;
    }
    void punch(){
        System.out.println("Default punch");
    }
    void jump(){
        jumpBehavior.jump();
    }
    void kick(){
        kickBehavior.kick();
    }
    void roll(){
        System.out.println("Default roll");
    }
    void SetJumpBehavior(jumpBehavior jumpBehavior){
        this.jumpBehavior=jumpBehavior;
    }
    void SetKickBehavior(kickBehavior kickBehavior){
        this.kickBehavior=kickBehavior;
    }
    public abstract void display();
    
}