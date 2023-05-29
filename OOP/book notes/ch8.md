# ch8
## OCP (open-closed priciple)
- allowing change,doing it without requiring you to modify exiting code
- The OCP is about flexbility, and goes beyond just inheritance.
## SRP (single responsability priciple)
- Every object in your system should have a single responsibility, and all the object’s services should be focused on carrying out that single responsibility (the SRP)
## LSP
- use inheritsnce to the classes that can be subclasses of other classes
- if you don not need all functions of class, use delegation or composition or aggreation instead
## delegation
- delegation is when one class hands off the task of doing something to another class. It’s also just one of several alternatives to inheritance.
- If you need to use functionality in another class, but you don’t want to change that functionality, consider using delegation instead of inheritance.
## composition
- Composition allows you to use behavior from a family of other classes, and to change that behavior at runtime.
- if you made a property as on object of another class (that is called composition)
## aggregation 
- object of class is used inside class and outside it 
## when do use composition & aggregation
- If the object does make sense existing on its own, then you should use aggregation; if not, then go with composition.