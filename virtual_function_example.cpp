//     Rules for the Virtual Functions
//      1)They cannot be static
//      2)They are accessed by object pointers
//      3)Virtual functions can be a friend of another class
//      4)A virtual function in the base class might not be used.
//      5)If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class








#include<iostream>
#include<cstring>

using namespace std;

class CWH{

    protected:

    string title;
    float rating;

    public:

    CWH(string s , float r){

        title = s;
        rating = r;

    }

    virtual void display(){};
};

class CWHvideo : public CWH{

    float videoLength;

    public:

    CWHvideo(string s , float r, float vl): CWH( s , r){

        videoLength = vl;
    }

    void display(){

        cout<<"This is an amazing video lecture"<<endl;
        cout<<"The title of the video is equal to "<<title<<endl;
        cout<<"The rating of the video is equal to "<<rating<<endl;
        cout<<"The length of the video is equal to "<<videoLength<<endl;
    }
};

class CWHtextTut : public CWH{

    int words;

    public:

    CWHtextTut(string s , float r , int wrd): CWH ( s ,r){

        words = wrd;
    }

    void display(){

        cout<<"This is an amazing video lecture"<<endl;
        cout<<"The title of the video is equal to "<<title<<endl;
        cout<<"The rating of the video is equal to "<<rating<<endl;
        cout<<"The number of words in the tutorial is equal to "<<words<<endl;
    }
};

int main(){

    string title;
    float videoLength , rating;
    int words;
//   For the class video lecture

    title = "'Django video lecture'";
    videoLength = 4.65;
    rating = 4.8;
    CWHvideo django(title , rating , videoLength);
    django.display();

    CWH * ptr [2];
    ptr[0] = &django;
    ptr[0]-> display();

//   For class tutorials;

    title = "'Django tutorials'";
    words = 500;
    rating = 5;

    CWHtextTut djangoTuT(title, rating , words);
    djangoTuT.display();
    ptr[1]= &djangoTuT;
    ptr[1]->display();

}