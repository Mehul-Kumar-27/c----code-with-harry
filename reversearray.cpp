#include<iostream>

using namespace std;

void reverseArray(int arr[]){
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0 ; i < len ; i++){
        
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main(){
    
    int t ; cin >> t;
    
    for(int  i = 0 ; i < t ; i++){
        
        int n ; cin >> n;
        
        int arr[n];
        
        for(int j = 0 ; j < n ; j++){
            
            cin >> arr[j];
        }
        
        reverseArray(arr);
        
        for(int j = 0 ; j < n ; j++){
            cout<< arr[j] << " ";
        }
    }
    
    return 0;
}