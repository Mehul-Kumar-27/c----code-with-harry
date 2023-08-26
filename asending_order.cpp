#include<iostream>
using namespace std;

int main(){

    int n[5];

    for (int  i = 0; i < 5; i++)
    {
        cin>>n[i];
    }

    for (int  i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            int temp;

            if (n[i]> n[j])
            {
                temp = n[i];
                n[i]= n[j];
                n[j]= temp;
            }
            
        }
        
    }


    for (int i = 0; i < 5; i++)
    {
        cout<<n[i]<<" ";
    }
    
    
    
}