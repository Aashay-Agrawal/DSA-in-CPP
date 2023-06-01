#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      // Compare adjacent elements
      if (arr[j] > arr[j + 1])
      {
        // Swap the elements
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Array before sorting: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  bubbleSort(arr, size);

  cout << "\nArray after sorting: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
