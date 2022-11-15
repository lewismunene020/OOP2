#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

#define RED_COLOR  "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define NO_COLOR  "\033[0m"

class Square{
    private:
        double side;
    public:
        Square(){
            side = 0;
        }
        Square(double s)
        {
            side = s;
        }
        double getArea()
        {
            return side * side;
        }
        double getPerimeter()
        {
            return 4 * side;
        }
        void setSide(int s)
        {
            side = s;
        }
        double getSide()
        {
            return side;
        }
};
class Circle{
    private:
        int radius;
    public:
        Circle(int r)
        {
            radius = r;
        }
        int area()
        {
            return 3.14 * radius * radius;
        }
        int perimeter()
        {
            return 2 * 3.14 * radius;
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
class Cylinder{
    private:
        int radius;
        int height;
    public:
        Cylinder(int r, int h)
        {
            radius = r;
            height = h;
        }
        int area()
        {
            return 2 * 3.14 * radius * (radius + height);
        }
        int volume()
        {
            return 3.14 * radius * radius * height;
        }
        void setRadius(int r)
        {
            radius = r;
        }
        int getRadius()
        {
            return radius;
        }
        void setHeight(int h)
        {
            height = h;
        }
        int getHeight()
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

    int choice;

    cout << "\n\n\n   Choose a Figure below: \n1.Square   \n2.Circle    \n3.Cylinder   \n4.Sphere   \n5.Exit   \n\n >>>>";

    // getting  the  input choice
    cin >> choice;

     Square square;


    switch (choice)
    {
    case 1:
        cout << "Enter  the length  of the square(centimetres) : ";
        double side;
        cin >> side;
        square.setSide(side);
        cout << "\n\n\n Shape : Square \n\nLength :\t"<< square.getSide() << "cm\nArea :\t"<< square.getArea() << "cm squared\nPerimiter :\t"<< square.getPerimeter()<<"cm"<<endl;
        // getting  the  length  of the square
        // cout << "\n\nSides : "<< square.getSide()<< endl;
        
        break;

    case 2:
        cout << "Circle";
        break;
    case 3:
        cout << "Cylinder";
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
