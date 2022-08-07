class Square extends Polygon
{
    //renders Square
    public void render()
    {
        System.out.println("Rendering square........");

    }
}

class Circle extends Polygon
{
    //renders circle
    public void render()
    {
        System.out.println("rendering circle........")
    }
}

class Main
{
    public static void main(String[] args)
    {
        //create an object of Square
        Square s1=new Square();
        s1.render();

        //create an object of circle
        Circle c1=new Circle();
        c1.render();
    }
}

//Output
/*Rendering Square...
Rendering Circle... */


/*In the above example, we have created a superclass: Polygon and two subclasses: Square and Circle. Notice the use of the render() method.

The main purpose of the render() method is to render the shape. However, the process of rendering a square is different than the process of rendering a circle.

Hence, the render() method behaves differently in different classes. Or, we can say render() is polymorphic. */