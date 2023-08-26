#include<iostream>
#include<vector>

using namespace std;



    void display(vector<int> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
           cout<<v[i]<<" ";
        }
        

    }

    void displayPrticular(vector<int> &v){
        int p ;
        cout<<"Enter the position at which you want to knoew value"<<endl;
        cin>> p;
        cout<<v.at(p-1);
    }

int main(){

    int size;
    int element;
    vector<int> vec1;

    cout<<"Enter the size of vector to be made "<<endl;
    cin>>size;

    for (int i = 0; i < size ; i++)
    {

        cout<<"Enter the value to be added in the vector "<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);
    vec1.pop_back();
    cout<<endl;
    display(vec1);

    cout<<endl;

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+4 , 6 , 89);
    display(vec1);
    cout<<endl;
    displayPrticular(vec1);
    

    return 0; 
    
}