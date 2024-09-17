#include<bits/stdc++.h>
using namespace std;
class student{
public:
  string name;
  int roll;
  int marks;
};
int main(){ 
       vector<student> nums;
       int n;
       cout<<"Number of student : ";
       cin>>n;
       cin.ignore();
       for(int i=1;i<=n;i++){
          student st;
         cout<<i<<"t Student Details : ";
         cout<<"Enter Student Name : ";
          getline(cin,st.name);
          cout<<"Enter Roll : ";
          cin>>st.roll;
          cin.ignore();
          cout<<"Enter Marks  : ";
          cin>>st.marks;
          cin.ignore();
          nums.push_back(st);
       }
   return 0;
}