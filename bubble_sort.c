#include <stdio.h>

void bubbleSort(int *A, int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    bubbleSort(A, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
