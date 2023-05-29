package designPattterns.ObserverPattern.SmallProject;

import java.util.ArrayList;
import java.util.Iterator;

public class CricketData implements Subject {

    int runs;
    int wickets;
    float overs;
    ArrayList<Observer> observers;

    public CricketData()
    {
        observers=new ArrayList<Observer>();
    }

    @Override
    public void registerObserver(Observer o) {
       observers.add(o);
    }

    @Override
    public void unRegisterObserver(Observer o) {
       observers.remove(observers.indexOf(o));
    }

    @Override
    public void notifyObserver() {
        for (Iterator<Observer> it = observers.iterator(); it.hasNext();)
        {
            Observer o=it.next();
            o.update(runs,wickets,overs);
        }
    }

    public int getLatestRuns()
    {
        return 90;
    }
    public int getLatestWickets()
    {
        return 2;
    }
    public float getLatestOvers()
    {
        return (float)10.2;
    }
    public void dataChanged(){
        runs=getLatestRuns();
        wickets=getLatestWickets();
        overs=getLatestOvers();

        notifyObserver();
    }
    
}
