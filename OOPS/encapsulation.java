class Area
{
    //fields to calculate area
    int length;
    int breadth;

    //consturctor to initialize values
    Area(int length,int breadth)
    {
        this.length=length;    //The this keyword refers to the current object in a method or constructor.
        this.breadth=breadth;
    }

    //method to calculate area
    public void getArea()
    {
        int area=length*breadth;
        System.out.println("Area: " +area);
    }
}

class Main
{
    public static void main(String[] args)
    {
        //create object of Area
        //pass value of length and area
        Area rectangle=new Area(5,6);  //encapsulation rectangle=new Area(5,6);
        rectangle.getArea();
    }
}

//Output
//Area:32

/*In the above example, we have created a class named Area. The main purpose of this class is to calculate the area.

To calculate an area, we need two variables: length and breadth and a method: getArea(). Hence, we bundled these fields and methods inside a single class.

Here, the fields and methods can be accessed from other classes as well. Hence, this is not data hiding.

This is only encapsulation. We are just keeping similar codes together.*/