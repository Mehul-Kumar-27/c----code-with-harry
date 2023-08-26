






// int main(){
    
//     vector<int>vec;
//     int n; cin>>n;
    
//     for (int i = 0 ; i<n ; i++){
        
//         int element;
//         cin>>element;
//         vec.push_back(element);
//     }
    
//     int positive = 0;
//     int negative = 0;
//     int zero     = 0;
    
//     for(int position = 0; position<n ; position ++){
        
//         if(  0 < vec.at(position) ){
            
//             positive = positive + 1;
//         }
        
//         if (vec.at(position)== 0){
            
//             zero = zero +1;
//         }
        
//         if( vec.at(position)< 0 ){
            
//             negative = negative +1;
//         }
//     }
    
//     double p = positive / n;
//     double neg = negative / n;
//     double z =  zero / n;
    
//     cout<<setprecision(6)<<p  <<endl;
//     cout<< setprecision(6)<< neg <<endl;
//     cout<<  setprecision(6)<<z   <<endl;
// }



// void rotate(vector &v){

//     for (int i = 0; i < n; i++)
//     {
//         vec.at(i) = 
//     }
    
// }

// 

#include <bits/stdc++.h>
using namespace std;
 

// int countDigit(int n)
// {
//     int temp = n, count = 0;
//     while (temp != 0) {
        
//         int d = temp % 10;
//         temp /= 10;
 
        
//         if (d > 0 && n % d == 0)
//             count++;
//     }
 
//     return count;
// }
 

// int main()
// {
//     int t ; cin>> t;
 
//     for (int i = 0; i < t ; i++)
//     {
//        int num; cin>> num;
//        int temp = num, count = 0;
//     while (temp != 0) {
        
//         int digit = temp % 10;
//         temp /= 10;
 
        
//         if (digit > 0 && num % digit == 0)
//             count++;
//     }

//         cout<<count<<endl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int>vec1;
    int n , k , q ; cin>> n>> k >> q;
    
    for (int i =0; i < n; i ++) {
            
            int element ; cin >> element;
            
            vec1.push_back(element);
    }
    
    for (int i = 0; i < k ; i ++) {
            
            vector<int>vec(n);
            
            int temp = n-1;
            while (temp --) {
                    
                int val = vec1.at(n-1);
                for (int y = n-2; y >= 1; y--) {
                
                    int element2 = vec.at(y);
                    vec1.push_back(val);
                    vec1.push_back(element2);
                    
                }
            }
    }
    
    for (int i = 0; i < q; i ++) {
            
            cout<< vec1.at(i)<<endl;
            
            
    }
}