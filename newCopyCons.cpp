#include<iostream>
using namespace std;
class Student{
public:
int sem;
Student(){
sem=3;
}
Student(Student &x){
  sem=x.sem;
}
};
int main(){
Student s1;
Student s2(s1);
cout<<s2.sem<<endl;
return 0;

}
