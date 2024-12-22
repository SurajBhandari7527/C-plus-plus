#include<iostream>
using namespace std;
class Book{
   
    public:
    string title;
    string author;
    int price;
    Book(string t,string a,int p):title(t),author(a),price(p){
        cout<<"Parent constructor"<<endl;
    }
   
    
};

class Textbook : public Book{
    public:
    string subject;
    Textbook(string t,string a,int p,string sub):Book(t,a,p),subject(sub){
    cout<<"Child constructor"<<endl;
    }
};
int main(){
    Textbook t("Mechanics","HC Verma",999,"physics");
    cout<<t.author<<endl;
    cout<<t.subject<<endl;
    cout<<t.title<<endl;
    cout<<t.price<<endl;

    
    return 0;
}