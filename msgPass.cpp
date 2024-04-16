#include <iostream>
using namespace std;
class Receiver{
public :
    void receiveMsg(string m){
    cout<<"User Entered : "<<m<<endl;
    }
};
class Sender{
    public:
    void sendMsg(Receiver r1,string m){
    r1.receiveMsg( m);
    }
};
class hero{
public :
    int health;
    public:
    static string name;
    hero(int health){
    this->health=health;
    }
    static void print(){
    cout<<name<<endl;
    }
    };

   string  hero::name;
class student{

};
int main(){
Sender s1;
Receiver r1;
s1.sendMsg(r1,"Hello , I am learning c++");
//hero h1(50);
hero::name="Samurai";
hero::print();

student sh1;

//cout<<h1.health<<endl;
return 0;
}

