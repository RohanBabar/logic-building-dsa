/*
Problem:
Find the largest element in a given array.

Approach:
Primary Approach:
- Initialize the first element of the array as the maximum.
- Traverse the array from the second element.
- If any element is greater than the current maximum, update it.
- Return the maximum value.
This approach uses a single traversal.

Alternate Approach:
- Sort the array in ascending order.
- The last element after sorting will be the largest.
- Sorting is not preferred because it increases time complexity.

Time Complexity:
- Primary Approach: O(n)
- Sorting Approach: O(n log n)

Space Complexity:
- O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int Findmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr1[] = {5, 3, 7, 1, 8};
    int n = 5;
    int max = Findmax(arr1, n);
    cout << "The Largest Element in array is" << max << endl;
    return 0;
}