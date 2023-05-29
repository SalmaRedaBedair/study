package designPattterns.ObserverPattern.SmallProject;

public class Main {
    public static void main(String args[])
    {
        // create objects for testing
        AverageScoreDisplay averageScoreDisplay =
                          new AverageScoreDisplay();
        CurrentScore currentScoreDisplay =
                          new CurrentScore();
  
        // pass the displays to Cricket data
        CricketData cricketData = new CricketData();
  
        // register display elements
        cricketData.registerObserver(averageScoreDisplay);
        cricketData.registerObserver(currentScoreDisplay);
  
        // in real app you would have some logic to
        // call this function when data changes
        cricketData.dataChanged();
  
        //remove an observer
        cricketData.unRegisterObserver(averageScoreDisplay);
  
        // now only currentScoreDisplay gets the
        // notification
        cricketData.dataChanged();
    }
    
}
