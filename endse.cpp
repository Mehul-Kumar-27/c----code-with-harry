#include <iostream>

using namespace std;

int main()
{
    int rows; cin >> rows;

    int i =1;

    for (int j = 1; j <= rows; j++)
    {
        for (int a = 1; a <= j; a++)
        {
            int pattern [1][a];

            for (int b = 3; b  <= a; b++)
            {
                pattern[1][1]=1;
                pattern[1][j]=1;

                pattern[1][b]= pattern[a-1][b] + pattern[a-1][b-1];
                cout<<pattern[1][b]<<endl;

            }
            
        }
        
    }
    

return 0;
        

        
             
        }
        
    
    

    
