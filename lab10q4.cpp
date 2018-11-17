/*Using the program point.cpp, add a member function print to the class Point so that it prints out coordinates as: 
    (2, 3)
for a point with coordinates (2, 3). Test it in main(). 
*/
#include <iostream>

using namespace std;
// a class point is to be declared which consist of x coordinate and y coordinate

class point{
   public:
       int x;       
       int y;        
      
      // Member functions declaration
 point()  
                 //default constructor
 {  
      x=0;
      y=0;
   } 
int move(int dx,int dy)
 {
  int x=x+dx;
  int y=y+dy;    //it will move the rectangle by the units we want    
 }
// to set the values of x and y
  void set_x(int X1)
  {
    x=X1;
  }
  void set_y(int Y1)
  {
    y=Y1;
  }
   // to display the value
   
   int show(int x,int y)
     {
        cout<<"\n the points are : ";
        cout<<"("<<x<<","<<y<<")";
        return 1;
      }
   int length()
{
  return(x3-x1);
}
int breadth()
{
  return(y3-y1);
}

//member function
int area()
{
   return(length()*breadth());
}  
        
 };
// a class rectangle is created to create rectangle from point
class rectangle
{
   
 point x1, x2, x3, x4;
 public:
 // Member functions declaration


};
int main()
{
  point x1,x2,x3,x4;
  x1.set_x(1);x1.set_y(1);x2.set_x(0);x2.set_y(1);x3.set_x(1);x3.set_y(0);
  x1.show(2,3);
  return 0;
}      
