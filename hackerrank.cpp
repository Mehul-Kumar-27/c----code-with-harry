// // // #include <iostream>
// // // using namespace std;

// // // class Student
// // // {
// // //     int N;

// // // public:
// // //     int Set_student_number()
// // //     {
// // //         cin >> N;
// // //         return 0;
// // //     }

// // //     int Set_student_number(){

// // //         int student_marks[N];
// // //         for (int i = 0; i <= N; i++)
// // //         {
// // //             cin>> student_marks[i];
// // //         }

// // //         return 0 ;

// // //     }

// // //     int Total_marks(){

// // //     }
// // // };

// // #include <iostream>
// // #include <vector>
// // #include<algorithm>
// // #include<cstdio>
// // #include<cmath>

// // using namespace std;

// // void display(vector<int> &v){

// // 	sort(v.begin(), v.end());
// // 	for ( int y = 0; y < v.size(); y++)
// // 	{
// // 		cout<<v[y]<<" ";
// // 	}

// // }
// // int main() {
// // 	int size;
// // 	cin>>size;
// // 	vector<int>v;

// // 	for (int i = 0; i < size; i++)
// // 	{
// // 		int element;
// // 		cin>>element;
// // 		v.push_back(element);

// // 	}

// // 	display(v);

// //     	return 0;

// // }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int N;
//     cin>>N;

//     vector<int> vec;

//     for (int i = 0; i< N; i++) {

//         int element ; cin>>element;
//         vec.push_back(element);
//     }

//     int position;
//     cin>>position;
//     vec.erase(vec.begin()+(position - 1));
//     int a ,b ; cin>>a >>b;
//     vec.erase(vec.begin()+a , vec.begin()+b);

//     int i = 0;
//     while (vec.size() == i) {
//     cout<<vec.at(i)<<" ";
//     i++;
//     }

//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
// 	vector<int>battery ;

// 	int T;
// 	cin>>T;

// 	for (int i = 0 ; i < T; i++) {

// 	    int battery_percentage;
// 	    cin>>battery_percentage;

// 	    battery.push_back(battery_percentage);
// 	}

// 	int position = 0;

// 	while(position < T ){

// 	    if (battery.at(position) <= 15){
// 	        cout<<"Yes";
// 	    }

// 	    else {cout<<"No";}

// 	    position++;
// 	}
// 	return 0;
// }

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{

	int i = 4;
	double d = 4.0;
	string s = "Hacker Rank ";

	int i2;
	cin >> i2;
	double d2;
	cin >> d2;

	string s2;
	 cin.get();
    getline(cin , s2);

	cout << i + i2 << endl;
	cout <<fixed <<  setprecision(1) << d + d2 << endl;
	cout << s << s2;

	return 0;
}
