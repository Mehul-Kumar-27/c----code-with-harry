#include<iostream>
#include <cmath>
using namespace std;


float ans;
class Simple_Calculator{
    protected:
    float a , b ;

    public:
    
    void set_number_simple( float , float);
    void calculator();
    void display_result();

};

void Simple_Calculator :: set_number_simple ( float a1 , float b1 ){
    a = a1;
    b = b1;
}

void Simple_Calculator :: calculator( ){
    int q;
    cout<<"To add the following numbers press 1"<<endl;
    cout<<"To substract the following numbers press 2"<<endl;
    cout<<"To divide the following numbers press 3"<<endl;
    cout<<"To multiply the following numbers press 4"<<endl;

    cin>>q;

    switch (q)
    {
    case 1:
         ans = a+b;
        break;
    case 2:
        ans = a - b;
        break;

    case 3:
        ans = a/b;
        break;

    case 4:
        ans = a*b;
        break;
    default:

        cout<<"Can perforn only the above calculations"<<endl;
        break;
    }
    
}

void Simple_Calculator :: display_result(){

    cout<<"The resut of the following operation is equal to "<<ans<<endl;
}
    
class Scientific_Calculator{
   
   protected:

    int c , d;

    public:

    void set_number_scientific(float , float);
    void scientific_calculator();
    void display_result();


};

void Scientific_Calculator :: set_number_scientific(float c1 , float d1){
    c = c1;
    d = d1;
}

void Scientific_Calculator :: scientific_calculator(){
        int p;
        cout<<"To find (c*d)^1/2 press 5"<<endl;
        cout<<"To find (c/d)^1/2 press 5"<<endl;
        cin>>p;

        switch (p)
        {
        case (5):
            ans = sqrt(c*d);
            break;
        case (6):
            ans = sqrt(c/d);    
            break;
       
        }
}

class Hybrid_Class : public Simple_Calculator , public Scientific_Calculator{

    public:

    void Choice(){
        int w;
        cout<<"To perform the simple calculation press 7"<<endl;
        cout<<"To perform the scientific calculation press 8"<<endl;
        cin>>w;
        
    }
};
int main(){

    Simple_Calculator op1;

    op1.set_number_simple(1,2);
    op1.calculator();
    op1.display_result();

    return 0;
}
    

