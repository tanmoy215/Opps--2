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
    this->age = age;  //refers to the current object of the class
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
int main(){
    player tanmoy;   //static memory,complile time memory allocation
    tanmoy.setage(21);
    tanmoy.setalive(true);
    tanmoy.sethealth(200);
    cout<<"Tanmoy Details"<<endl;
     cout<<tanmoy.getage()<<endl<<tanmoy.getalive()<<endl<<tanmoy.gethealth()<<endl;
     player majee;   //static memory , compiletime memory allocation
     majee.setage(23);
     majee.sethealth(300);
     majee.setalive(false);
     cout<<"Majee Details"<<endl;
      cout<<majee.getage()<<endl<<majee.getalive()<<endl<<majee.gethealth()<<endl;

       ///using pointer to creating runtime memory allocatio or dynamic memory allocation
        player *amit = new player; 
        amit->setage(90);   //using arrow operator to access the pointer class 
        amit->setalive(false);
        amit->sethealth(400);
        cout<<"amit Details"<<endl;
        cout<<amit->getage()<<endl<<amit->getalive()<<endl<<amit->gethealth()<<endl;
    return 0;
}