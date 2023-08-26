#include<stdio.h>

int main(){

    int arr[5];

    

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int y = i+1; y<5; y++)
        {
            if (arr[i]>arr[y])
            {
                int temp ;
                temp = arr[i];
                arr[i]=arr[y];
                arr[y]=temp;
            }
            
        }
        
    }

   for (int i = 0; i < 5; i++)
   {
       printf("%d ",arr[i]);
   }
   
    return 0;
    
}