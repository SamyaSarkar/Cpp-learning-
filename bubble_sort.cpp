#include <iostream>
using namespace std;
void bubblesort(int array[], int n)
{
    for (int step = 0; step < n; step++)
    {
        for (int i = 0; i < n - step; i++)
        {
            if (array[i] > array[i + 1])
            {

                swap(array[i + 1], array[i]);
            }
        }
    }
}
void bubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    // int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;

             // count++;
        }
        // if (count == 0)
        // {
        //     return;
        // }
        bubbleSort(arr, n - 1);
    }
}
int main()
{
    int N;
    cout << "Enter the size of the array " << endl;
    cin >> N;
    int arr[100];
    // input
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // bubblesort(arr, N);
    bubbleSort(arr, N);
    // output
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
