#include<iostream>
using namespace std;
class Order{
    static int order_id;
    string customer_name;
    string Item_list[100];
    double total_amount;
    Order(string c,double t){
        order_id++;
        this->customer_name=c;
        this->total_amount=t;
        int n;
        cout<<"Enter how many items do you need:"<<endl;
        cin>>n;
        Item_list[n];
        for(int i=0;i<n;i++){
            string m;
            cout<<"Enter the item name: "<<endl;
            cin>>m;
            Item_list[i]=m;
        }
        
    }
    void discount(){

    }
    void order_details(){

    }
    void next_available(){

    }
    friend void apply_discount(Order &order,double discountPercentage);
};
void apply_discount(Order &order,double discountPercentage){
    cout<<"After discount total amout is" <<order.total_amount-order.total_amount*discountPercentage/100<<endl;
}
int Order::order_id=0;
int main(){
    
    return 0;
}