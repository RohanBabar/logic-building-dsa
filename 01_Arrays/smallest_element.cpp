/*
Problem:
Find the smallest number in a given array.

Approach:
Primary Approach:
- Initialize the first element of the array as the smallest.
- Traverse the array from the second element.
- If any element is smaller than the current smallest, update it.
- Return the smallest value.
This approach uses a single traversal.

Alternate Approach:
- Sort the array in ascending order.
- The first element after sorting will be the smallest.
- However, sorting is not preferred due to higher time complexity.

Time Complexity:
- Primary Approach: O(n)
- Sorting Approach: O(n log n)

Space Complexity:
- O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int findSmallest(int arr[], int n)
{
   int smallest = arr[0];

   for (int i = 1; i < n; i++)
   {
      if (arr[i] < smallest)
      {
         smallest = arr[i];
      }
   }
   return smallest;
}

int main()
{
   int arr[] = {2, 5, 1, 4, 0};
   int n = sizeof(arr) / sizeof(arr[0]);

   int result = findSmallest(arr, n);
   cout << "The smallest element in the given array is: " << result << endl;

   return 0;
}
