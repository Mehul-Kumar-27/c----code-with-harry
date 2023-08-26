#include<iostream>
using namespace std;

class ShopItem{

    int id , price;

    public:

    void setData(int a , int b ){

        id =a;
        price = b;
    }
    
    void getData(){

        cout<<"The item id is equal to "<<id<<" and the item price is equal to "<<price<<endl;
    }
};

int main(){

    int q , p , i;
    ShopItem *ptr = new ShopItem [3];
    ShopItem *ptrTemp = ptr;

    for ( q  = 0; q < 3; q++)
    {
        cout<<"Enter the item id and the price of the "<<q+1<<" item"<<endl;
        cin>>i;
        cin>>p;
        ptr->setData( i , p);
        ptr++;
    }

    for ( q = 0; q < 3; q++)
    {
        
        ptrTemp->getData();
        ptrTemp++;
        
    }
    









    return 0;
    
}