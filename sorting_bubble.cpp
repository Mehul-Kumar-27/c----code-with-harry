#include <iostream>

using namespace std;

void bubbleSort(int *arr, int n)
{

    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int y = 0; y < n - 1 - i; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}