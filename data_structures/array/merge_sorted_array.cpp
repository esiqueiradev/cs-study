#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int> &arr1, const std::vector<int> &arr2)
{
  std::vector<int> result;
  int i = 0, j = 0;

  while (i < arr1.size() && j < arr2.size())
  {
    if (arr1[i] < arr2[j])
    {
      result.push_back(arr1[i++]);
    }
    else
    {
      result.push_back(arr2[j++]);
    }
  }

  while (i < arr1.size())
  {
    result.push_back(arr1[i++]);
  }

  while (j < arr2.size())
  {
    result.push_back(arr2[j++]);
  }

  return result;
}

int main()
{
  std::vector<int> arr1 = {1, 3, 5, 7, 9};
  std::vector<int> arr2 = {2, 4, 6, 8, 10};

  std::vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

  std::cout << "Merged Array: ";
  for (int num : mergedArray)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
