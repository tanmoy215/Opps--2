#include<bits/stdc++.h>
using namespace std;
class Gun{
    public:
    int damage;
    int ammo;
    int level;
};
class player{
 private:
 class Helmat{   //inside the player class
      int hp;
      int level;
      public:
       //setter
       void sethp(int hp){
        this->hp = hp;
       }
       void setlevel(int level){
        this->level = level;
       }
       //getter
       int gethp(){
        return hp;
       }
       int getlevel(){
        return level;
       }
    };

    int health;
    int age;
    bool alive;
    Gun gun;    //outside the player class
    Helmat helmat;
    
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
      void setgun(Gun gun){
        this->gun = gun;
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
      Gun getgun(){
        return gun;
      }
      void sethelmat(int level){
        Helmat *helmat = new Helmat; //dynamically memory allocation 
        helmat->setlevel(level);
        int n=0;
        if(level==1) n=50;
        else if(level==2) n=100;
        else if(level==3) n=150;
        else cout<<"Invalid input"<<endl;
        helmat->sethp(n);
        this->helmat = *helmat;
      }
      void getHelmat(){
       cout<<helmat.gethp()<<endl<<helmat.getlevel()<<endl;
      }
};
int main(){
    //number - 1
    player tanmoy;
     tanmoy.setage(21);
     tanmoy.sethealth(200);
     tanmoy.setalive(true);
     tanmoy.sethelmat(2);   //Helmat
      //number - 2
      player majee;
      majee.setage(23);
      majee.setalive(false);
      majee.sethealth(300);
      majee.sethelmat(6);  //Helmat

      //gum number -1 
     Gun ak47;
     ak47.ammo = 30;
     ak47.damage = 40;
     ak47.level = 2;
      

      //gun number - 2
      Gun awm;
      awm.ammo = 15;
      awm.damage =150;
      awm.level = 3;

       tanmoy.setgun(ak47);
       majee.setgun(awm);
        
        //Gun class
     
      Gun gun123 = tanmoy.getgun();
     // cout<<gun123.damage<<endl<<gun123.ammo<<endl<<gun123.level<<endl;

       //majee gun
        Gun gun124 = majee.getgun();
        //cout<<gun124.ammo<<endl<<gun124.damage<<endl<<gun124.level<<endl;
       // tanmoy.getHelmat();
      // majee.getHelmat();
    return 0;
}