#include<bits/stdc++.h>
using namespace std;
class student{
public:
   string name;
   int rol;
   float per;
};
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cin.ignore();
   vector<student> ans;
   for(int i=0;i<n;i++){
    student st;
    cout<<i+1<<" th student : \n\n";
      cout<<"\tEnter Name : ";
       getline(cin,st.name);
       cout<<"\tEnter roll : ";
       cin>>st.rol;
       cin.ignore();
       cout<<"\tEnter Percentage : ";
       cin>>st.per;
       cin.ignore();
       ans.push_back(st);
       }
       //output
       for(int i=0;i<n;i++){
        cout<<i+1<<" th student\n\n"<<endl;
        cout<<"NAME : "<<ans[i].name<<endl;
        cout<<"ROLL : "<<ans[i].rol<<endl;
        cout<<"PERCENTAGE : "<<ans[i].per<<endl;
       }
    return 0;
}