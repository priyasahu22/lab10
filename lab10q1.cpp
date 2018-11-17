//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

#include <iostream>

using namespace std;

class rectangle{
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      
      // Member functions declaration
      
      double perimeter( double len,double breadth);
      double area( double len,double breadth);
     
};

// Member functions definitions
double rectangle::perimeter(double l,double b) 
{
 return (2*(l+b));
}

double rectangle::area(double l,double b) 
{
  return (l*b);
}

int main()
{
   rectangle r1,r2;
   cout<<"\n for 1st rectangle : ";
   cout<<"\n enter length for 1st rectangle: \n";
   cin>>r1.length;
   cout<<"\n enter breadth for 1st rectangle: \n";
   cin>>r1.breadth;
   

   cout<<"\n for 2nd rectangle : ";
   cout<<"\n enter length for 2nd rectangle: \n";
   cin>>r2.length;
   cout<<"\n enter breadth for 2nd rectangle: \n";
   cin>>r2.breadth;
 if(r1.perimeter(r1.length,r1.breadth)>r2.perimeter(r2.length,r2.breadth))
{
   cout<<"\n the perimeter of rectangle 1 is greater:";
}
    
else
{
   cout<<"\n the perimeter of rectangle 2 is greater:";
}
 
if(r1.area(r1.length,r1.breadth)>r2.area(r2.length,r2.breadth))
{
   cout<<"\n the area of rectangle 1 is greater:";
}
    
else
{
   cout<<"\n the area of rectangle 2 is greater:";
}
  return 0;
}
