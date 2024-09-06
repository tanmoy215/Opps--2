#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Cricketer{
public:
    string name;
    int age;
    int nt;
    float avg;
};

int main(){
    int n;
    cout<<"Enter the number of players: ";
    cin>>n;
    cin.ignore();  // Ignore the newline character left in the input buffer
    
    vector<Cricketer> ans;

    // Input data for n cricketers
    for(int i=0; i<n; i++){
        cout<<endl<<i+1<<"th Cricketer Details: "<<endl;

        Cricketer crick;

        // Name
        cout<<"\tEnter player name: ";
        getline(cin, crick.name);

        // Age
        cout<<"\tEnter age: ";
        cin>>crick.age;
        cin.ignore(); // Ignore the newline character left in the input buffer

        // Total number of matches
        cout<<"\tTotal number of matches: ";
        cin>>crick.nt;
        cin.ignore(); // Ignore the newline character left in the input buffer

        // Average run rate
        cout<<"\tAverage run rate: ";
        cin>>crick.avg;
        cin.ignore(); // Ignore the newline character left in the input buffer

        ans.push_back(crick);
    }

    // Read and display the data
    for(int i=0; i<ans.size(); i++){
        cout<<i+1<<"th Cricketer: "<<endl;
        cout<<"\tName: "<<ans[i].name<<endl;
        cout<<"\tAge: "<<ans[i].age<<endl;
        cout<<"\tTotal Number of Test Matches: "<<ans[i].nt<<endl;
        cout<<"\tAverage: "<<ans[i].avg<<endl<<endl;
    }

    return 0;
}

