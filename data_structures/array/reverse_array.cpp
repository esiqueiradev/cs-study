#include <iostream>

using namespace std;

void reverse_array(int arr[], int size)
{
  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    int aux = arr[start];

    arr[start] = arr[end];

    arr[end] = aux;

    start++;
    end--;
  }
}

void print_array(int arr[], int size)
{
  cout << "The array is: ";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int array_size = sizeof(arr) / sizeof(arr[0]);

  reverse_array(arr, array_size);

  print_array(arr, array_size);
}