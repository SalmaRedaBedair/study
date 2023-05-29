package designPattterns.ObserverPattern.SmallProject;

public class CurrentScore implements Observer {

    int runs;
    int wickets;
    float overs;

    public void display(){
        System.out.println("\nCurrent Score Display:\n"
                           + "Runs: " + runs +
                           "\nWickets:" + wickets +
                           "\nOvers: " + overs );
    }
    @Override
    public void update(int runs, int wickets, float overs) {
        this.runs=runs;
        this.wickets=wickets;
        this.overs=overs;

        display();
    }
    
}
