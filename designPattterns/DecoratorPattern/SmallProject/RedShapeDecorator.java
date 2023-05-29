package designPattterns.DecoratorPattern.SmallProject;

public class RedShapeDecorator extends ShapeDecorator {
    

    public RedShapeDecorator(Shape shape){
        super(shape);
    }
    public void setRedBorder(Shape shape){
        System.out.println("Border Color: Red");
    }

    @Override
    public void draw() {
        shape.draw();
        setRedBorder(shape);
    }
    
}