# Remember from ch4
- if i have an arow in uml has 1 on it and object name for example door 1 it means that:the door attribute holds single(1) DogDoor object
- *mean: unlimited number
- generic class means: it can be of any type which i will specify later
# uml cheat sheet
- Aggregation is a special form of association, and means that one thing is made up (in part) of another thing.
- generlization == inheritance

![](./Screenshot%202022-12-22%20144146.jpg)
## Abstarct class
- it is placeholder for actual implemntation
- abstarct class define behavior and sub class implement that behavior 
- i use abstract class to collect the data which is the same in two or more classes and put them in a new class ,that class i didn't want to use it ,i just use it to enhance my code and reduce reapeating .
## uml inheritance
- This line with a diamond means aggregation.Aggregation is a special form of association, and means that one thing is made up (in part) of another thing.  So Instrument is partly made up of InstrumentSpec
- generalization: we use it to show that a class extends and inherit behavior from another generized class
`uml notation & symbols page 207`
## abstaraction & instance
- abstract class and  its children can use key word (instanceof) with them 
## Great software
- if you want to make sure your sorftware is great try to change it, if you will do alot of work then it is not good
- By coding to an interface, your code will work with all of the interface’s subclasses—even ones that haven’t been created yet
- you should always encapsulate what will vary in your software
- to make your software easy to change: make sure every class has only one reason to change
- When you see a class that has more than one reason to change, it is probably trying to do too many things. See if you can break up the functionality into multiple classes, where each individual class does only one thing—and therefore has only one reason to change.
## OO Catastrophe
1- interface: code to an interface rather than imlementation

2- encapsulation: Encapsulate what varies

3- change: Each class in your software should have only one reason to change
## Encapsulation 
- we use encapsulation to make our app more flexiple and easy to change
- any time you see somtihing vary try to encapsulate it
- When you have a set of properties that vary across your objects, use a collection, like a Map, to store those properties dynamically.
## cohensive class & cohensive software
- A cohesive class does one thing really well and does not try to do or be something else.
- The more cohesive your classes are, the higher the cohesion of your software.
- Cohesion measures the degree of connectivity among the elements of a single module, class, or object. The higher the cohesion of your software is, the more well-defined and related the responsibilities of each individual class in your application. Each class has a very specific set of closely related actions it performs.
## how to know that your app is good and transform to the other project
- make sure that you use all OOP principles
- try to make changes to your software
- if your software is easy to change and extend then it is good
- make sure that your software is cohensive,again cohensive mean that every class make only one thing really well
- Always strive for higher cohesion as you move through your software’s design life cycle.
