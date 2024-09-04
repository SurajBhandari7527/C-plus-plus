//A library charges a fine for every book return late. For first 5 days the fine is 50 paise, for 
//6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book 
//after 30 days your membership will be cancelled .WAP to accept no. of days the member 
//is late to return the book and display the fine or appropriate message

#include<iostream>
using namespace std;
int main(){int late;
float fine=0.0;
    cout<<"No of days you are late: "<<endl;
    cin>>late;
    if(late<=5){
        fine=late*0.5;
        cout<<"Your fine is : "<<fine<<endl;
    }
    else if(late>=6 && late<=10){
        fine=5*0.5+(late-5)*1;
        cout<<"Your fine is : "<<fine<<endl;
    }
    else if(late>10 && late<30){
        fine=5*0.5+5*1+(late-10)*5;
        cout<<"Your fine is : "<<fine<<endl;
    }
    else if(late>30){
        cout<<"your membership is cancelled"<<endl;
    }
    return 0;
}