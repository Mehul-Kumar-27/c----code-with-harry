#include<iostream>

using namespace std;

int main(){

    int m , n;
    cout<<"Enter the rows and columns of first matrix"<<endl;
    cin>>m>>n;

    int first_matrix[m][n];

    int p , q;
    cout<<"Enter the rows and columns of second matix"<<endl;
    cin>>p>>q;

    int second_matrix[p][q];

    int c, d;
    int product_matix[c][d];

    int sum=0;

    if (n!=p)
    {
        cout<<"The followind matrices cannot be multiplied"<<endl;

    }

    else{

        cout<<"Enter the values for matrix first"<<endl;

        for (int i = 0; i < m; i++)
        {
            for (int y = 0; y < n; y++)
            {
                cin>>first_matrix[i][y];
            }
            
        }

        cout<<"Enter the values of second matrix"<<endl;

         for (int i = 0; i < m; i++)
        {
            for (int y = 0; y < n; y++)
            {
                cin>>second_matrix[i][y];
            }
            
        }

            
        for (c = 0; c <m; c++)
        {
            for ( d = 0; d < q; d++)
            {
                for (int k = 0; k < p; k++)
                {
                    sum = sum + first_matrix[c][k]*second_matrix[k][d];
                }

                product_matix[c][d]=sum;

                sum =0;
                
            }
            
        }
        
        for (int i = 0; i < c; c++)
        {
            for (int y = 0;y < d ; y++)
            {
                cout<<product_matix[i][y]<<" ";
            }

            cout<<endl;
            
        }
        


        
    }
    



    return 0;
}