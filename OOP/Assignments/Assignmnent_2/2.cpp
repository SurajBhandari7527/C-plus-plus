/*
. Differentiate between private and public access/scope. Perform the question no. 1
with class instead of structure with having the data members private and some
member functions in private scope and some in public scope.
*/

// the difference between private and public access is that we can't access the members of the private from outside the class but
// public members can be accessed from the outside and inside of the class

#include <iostream>
#include <string>
using namespace std;
class Students
{
private:
    string name;
    int roll;
    string Degree;
    string hostel;
    float cg;
    void update_cg()
    {   float new_cg;
        cout<<"Enter the new cg";
        cin>>new_cg;
        cg=new_cg;
    }
    void update_hostel()
    {   string new_hostel;
        cout<<"Enter the name of new hostel";
        cin>>new_hostel;
        hostel=new_hostel;
    }

public:
    void add_details()
    {
        cout << "Enter the name,roll,degree,hostel,cg" << endl;
        cin >> name >> roll >> Degree >> hostel >> cg;
    }
    void update_details()
    { int choice;
        cout<<"enter 1 to update hostel and 2 to update cg"<<endl;
        cin>>choice;
        if(choice==1){
            update_hostel();
        }
        else if (choice==2){
            update_cg();
        }
        else {
            cout<<"invalid input"<<endl;
                    }
        }

    

    void display_details()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << Degree << endl;
        cout << hostel << endl;
        cout << cg << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of students" << endl;
    cin >> n;
    Students s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].add_details();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].display_details();
    }

    s[1].update_details();
    s[1].display_details();
    return 0;
}