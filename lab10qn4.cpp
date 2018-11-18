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
      
      
   point()
   {x = 0; 
   y =0;}//primary constructor with no arguments
  	
   point(int x1, int y1)
   {x = x1; 
    y = y1;}//parametrized constructor
	
	
	// member getter and setter functions;
	int getx(){	
        return x;}
	int gety(){	
        return y;}
	void setx(int x)
        {this->x = x;};
	void sety(int y)
        {this->y = y;};
	void move(int dx, int dy)
        {
          this->x+= dx; this->y += dy;
         } //member function to move the distance of dimensions of rectangle
        // to display the value
   
        int show()//(int x,int y)
        {
        cout<<"\n the points are : ";
        cout<<"("<<x<<","<<y<<")";
        return 1;
        }
  
  
       
 };
//  class rectangle
class Rectangle
  {
	point p1, p2, p3, p4;
	int l;
        int b;
	//private member functions for calculation of sides
	int side1(int l)
	{
	l=p3.getx()-p1.getx();
	return l; 
        }
	int side2(int b)
	{
	b=p3.gety()-p1.gety();
	return b;
        }
	
	//treat objects now as variables
	public:
	Rectangle(point p1, point p3)// two points as arguments passedin a function
	{   
	    cout<<"\nENTER LENGTH AND BREADTH OF RECTANGLE:"<<endl;
	    cin>>l>>b;
	    /* 
	    the bottom left corner and the second as the top right corner*/
	    p1.setx(0);//bottom left corner
	    p1.sety(0);
	    p3.setx(l);//top right corner
	    p3.sety(b);
            this->p1 = p1;
            this->p3 = p3;
	    p2.move(l,0); 
	    p4.move(0,b);
	    p1.show();
	    p2.show();
	    p3.show();
	    p4.show();
		
	}
	// default constructor that creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 
	Rectangle()
       {
	p1.setx(0);
	p1.sety(0);
	p3.setx(1);
	p3.sety(1);
	p2.move(1,0); 
	p4.move(0,1);
 
	p1.show();
	p2.show();
	p3.show();
	p4.show();
	}
	
	int area()
        //member function using private side function to claculate area
	
        { 
          cout<<"area="<<side1(l)*side2(b);
        }
	
     };

 int main()
 {
   point p1, p2, p3, p4;
   Rectangle R1(p2,p3);
   Rectangle R2;
   R1.area();
   R2.area();
   return 0;	
	 
}
