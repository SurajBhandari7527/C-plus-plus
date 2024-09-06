#include<iostream>

using namespace std;
struct Students{        
    string name;
    int roll;
    string Degree;
    char hostel;
    float current_CG;

   void add_details(Students* ptr){
        cout<<"Enter the name,roll,Degree,hostel,currrent_CG for a student"<<endl;
        cin>>(*ptr).name,(*ptr).roll,(*ptr).Degree,(*ptr).hostel,(*ptr).current_CG;
    }
    // update_details(){

    // }
    // update_CG(){

    // }
    // update_hostel(){

    // }
    display_details(Students* ptr){

        cout<<(*ptr).name,(*ptr).roll,(*ptr).Degree,(*ptr).hostel,(*ptr).current_CG;
    }



};
int main(){
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Students s[n];
    for(int i=0;i<n;i++){
        Students* ptr = &s[i];
        s[i].add_details(ptr);
    }
       for(int i=0;i<n;i++){
        Students* ptr = &s[i];
        s[i].display_details(ptr);
    }
    return 0;
}