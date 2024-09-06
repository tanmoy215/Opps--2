#include<bits/stdc++.h>
using namespace std;
class player{
  private:
   int age;
   int health;
   bool alive;
   public:
   //setter
   void setage(int age){
    this->age = age;
   }
   void sethealth(int health){
    this->health = health;
   }
   void setalive(bool alive){
    this->alive = alive;
   }
   //getter
   int getage(){
    return age;
   }
   int gethealth(){
    return health;
   }
   bool getalive(){
    return alive;
   }
};
int addage(player a,player b){
    return a.getage() + b.getage();
}
 player check(player a,player b){
     if(a.getage() > b.getage()) return a;
     else return b;
 }
int main(){
    player Tanmoy;
    player Majee;
    Tanmoy.setage(21);
    Tanmoy.setalive(true);
    Tanmoy.sethealth(89);
    Majee.setage(29);
    Majee.setalive(false);
    Majee.sethealth(99);
    cout<<"Final ans is : "<<addage(Tanmoy,Majee);
    player amit = check(Tanmoy,Majee);
    cout<<amit.getage()<<endl<<amit.getalive()<<endl<<amit.gethealth()<<endl;
    return 0;
}