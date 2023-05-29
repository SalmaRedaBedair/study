package designPattterns.ObserverPattern.SmallProject;

public class AverageScoreDisplay implements Observer {

    int predictScore;
    float runRate;

    public void display(){
        System.out.println("\nAverage Score Display: \n"
                           + "Run Rate: " + runRate +
                           "\nPredictedScore: " +
                           predictScore);
    }

    @Override
    public void update(int runs, int wickets, float overs) {
        this.runRate=(float)runs/overs;
        this.predictScore=(int)this.runRate*50;

        display();
    }
    
}
