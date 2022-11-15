#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>

using namespace std;

#define RED_COLOR  "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define NO_COLOR  "\033[0m"
#define PI 3.14159265358979323846

class Square{
    private:
        double side;
    public:
    // constructors in the class
    // default constructor
        Square(){
            side = 0;
        }

        // parameterized constructor
        Square(double s)
        {
            side = s;
        }

    // setter
        void setSide(int s)
        {
            side = s;
        }
    // getter
        double getSide()
        {
            return side;
        }
    // compute area
        double getArea()
        {
            return side * side;
        }
    // compute perimeter
        double getPerimeter()
        {
            return 4 * side;
        }

};

class Circle{
    private:
        double  radius;
    public:
    // default constructor
        Circle(){
            radius = 0;
        }
    // parameterized constructor
        Circle(double  r)
        {
            radius = r;
        }
    // setter
            void setRadius(double r)
        {
            radius = r;
        }
    // getter
        double getRadius()
        {
            return radius;
        }
    // compute area
        double  area()
        {
            return PI * radius * radius;
        }
    // compute perimeter
        double  getPerimeter()
        {
            return 2 * PI * radius;
        }

};
class Cylinder{
    private:
        double radius;
        double height;
    public:
        Cylinder(){
            radius = 0;
            height = 0;
        }
        Cylinder(double r, double h )
        {
            radius = r;
            height = h;
        }
        double getArea()
        {
            return 2 * PI * radius * (radius + height);
        }
        double getVolume()
        {
            return PI * radius * radius * height;
        }
        void setRadius(double r)
        {
            radius = r;
        }
        double getRadius()
        {
            return radius;
        }
        void setHeight(double h)
        {
            height = h;
        }
        double getHeight()
        {
            return height;
        }

};
class Sphere{
    private:
        int radius;
    public:
        Sphere(int r)
        {
            radius = r;
        }
        int area()
        {
            return 4 * 3.14 * radius * radius;
        }
        int volume()
        {
            return 4/3 * 3.14 * radius * radius * radius;
        }
        void setRadius(int r)
        {
            radius = r;
        }
        int getRadius()
        {
            return radius;
        }
};

void printDanger(string data) {
  cout << RED_COLOR << data  << "  " << NO_COLOR <<endl;
}

void printSuccess(string data) {
    cout << GREEN_COLOR << data  << "  " << NO_COLOR <<endl;
}

int main()
{

 

//    displaying  the name and registration number of a student
    printSuccess("Name:\tLEWIS MUNENE KIRIMI   \nReg. No.:\tSCT211-0014/2021   \nAssignment2    \nUnit code \t ICS2201    Unit Name : OBJECT ORIENTED  PROGRAMMING");


    // declaring  objects of the classes Square, Circle, Cylinder and Sphere
     Square square;
     Circle  circle;
     Cylinder cylinder;


     cout <<"The radius of the circle is " << circle.getRadius()<< endl;



    int choice;

    cout << "\n\n\n   Choose a Figure below: \n1.Square   \n2.Circle    \n3.Cylinder   \n4.Sphere   \n5.Exit   \n\n >>>>";


    // getting  the  input choice
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Enter  the length  of the square in centimetres : ";
        double side;
        cin >> side;
        square.setSide(side);
        cout << "\n\n\n Shape : Square \n\nLength :\t"<< square.getSide() << "cm\nArea :\t"<< square.getArea() << " cm squared\nPerimeter :\t"<< square.getPerimeter()<<"cm"<<endl;
       
        
        break;

    case 2:
        cout << "Enter  the radius  of the circle in centimetres : ";
        double circleRadius;
        cin >> circleRadius;
        circle.setRadius(circleRadius);
        cout << "\n\n\n Shape : Circle \n\nRadius :\t"<< circle.getRadius() << "cm\nArea :\t"<< circle.area() << " cm squared\nPerimeter :\t"<< circle.getPerimeter()<<"cm"<<endl;
       
        break;
    case 3:
        double cylinderRadius;
        double cylinderHeight;

        cout << "Enter  the radius  of the cylinder in centimetres : ";
        cin >> cylinderRadius;
        cout << "Enter  the height  of the cylinder in centimetres : ";
        cin >> cylinderHeight;

        cylinder.setRadius(cylinderRadius);
        cylinder.setHeight(cylinderHeight);
      
        cout << "\n\n\n Shape : Cylinder \n\nRadius :\t"<< cylinderRadius << "cm\nHeight :\t"<< cylinderHeight << "cm\nArea :\t"<< cylinder.getArea() << " cm squared\nVolume :\t"<< cylinder.getVolume()<<"cm cubed"<<endl;

        break;
    case 4:
        cout << "Sphere";
        break;
    case 5:
        cout << "exit";
        exit(0);
        break;
    
    
    
    default:
        break;
    }
   
}
