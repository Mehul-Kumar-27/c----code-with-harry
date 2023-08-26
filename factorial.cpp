#include<iostream>

using namespace std;

int main(){

    int arr[10];

    int temp , i  , j ;

    for ( i; i < 10; i++)
    {
        cin>>arr[i];
    }

    // for ( i; i < 10; i++)
    // {
    //     for ( j = i+1; j < 10; j++)
    //     {
    //         if (arr[i]>arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
            
    //     }
        
    // }

    for ( i ; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
    
}