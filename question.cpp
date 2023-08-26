#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<vector<int>> vec(n);

    

    for (int  i = 0; i < n; i++)
    {   int length;
        cin>>length;
        for (int y = 0; y < length ; y++)
        {
            int element;
            element = element + y;
            vec[i].push_back(element);

            cout<<vec[i].at(y);
        }

        
        return 0;
    }
    















    return 0;
}