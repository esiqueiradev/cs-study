#include <iostream>

using namespace std;

void print_array(int arr[], int size)
{
  cout << "The array is: ";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}

void sum_array(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }

  cout << "The sum of this array is: " << sum << endl;
}

void find_biggest(int arr[], int size)
{
  int biggest = arr[0];

  for (int i = 1; i < size; i++)
  {
    if (biggest < arr[i])
    {
      biggest = arr[i];
    }
  }
  cout << "Biggest number in array is: " << biggest << endl;
}

int main()
{

  int arr[] = {1, 2, 3, 8, 123, 65, 4, 5};

  int array_size = sizeof(arr) / sizeof(arr[0]);

  print_array(arr, array_size);

  find_biggest(arr, array_size);

  sum_array(arr, array_size);

  return 0;
}