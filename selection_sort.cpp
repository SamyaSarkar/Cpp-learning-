#include <iostream>
using namespace std;
void selectionsort(int array[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (array[j] < array[i])
      {
        min = j;
      }
      
    }
    swap(array[min],array[i]);
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
  selectionsort(arr, N);
  // output
  for (int i = 0; i < N; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
