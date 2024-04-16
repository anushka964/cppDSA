#include<iostream>
using namespace std;
class Shape{
public:
int side,length,breadth;
double radius;
Shape(int s){
  side=s;
}
Shape(int l,int b){
length=l;
breadth=b;
}
Shape(double r){
radius =r;
}
void square(){
 cout<<"Area of square "<<4*side<<endl;
}
void rectangle(){
cout<<"Area of rectangle "<<length*breadth<<endl;
}
void circle(){
cout<<"Area of circle "<<3.14*radius*radius<<endl;
}

};
int main(){
Shape s1(5.3);
s1.circle();
Shape s2(4,6);
s2.rectangle();
Shape s3(5);
s3.square();
return 0;
}
