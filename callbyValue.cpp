#include<iostream>
using namespace std;
int sum(int num){
num=num+1;
return num;
}
void multiply(int &m){
m=m*2;
cout<<m;
}
int main(){
int num=5;

multiply(num);
cout<<num;
return 0;
}

