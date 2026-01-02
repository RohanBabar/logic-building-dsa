/*
Problem:
Find the second smallest and second largest element in an array.

Approach:
- Use a single traversal approach
- Maintain four variables:
  smallest, secondSmallest, largest, secondLargest
- Update values based on comparisons while traversing the array

Time Complexity:
O(n)  -> Single pass through the array

Space Complexity:
O(1)  -> Constant extra space
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find second smallest element

int secondSmallest(int arr[], int n)
{
    // If array has less than 2 elements, second smallest is not possible
    if (n < 2)
        return -1;

    // Initialize smallest and second smallest with maximum possible value
    int small = INT_MAX;
    int second_small = INT_MAX;

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        // If current element is smaller than smallest
        // Update second smallest first, then smallest
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        // If current element is greater than smallest
        // and smaller than second smallest
        // (arr[i] != small is used to avoid duplicates)
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }

    // Return the second smallest element
    return second_small;
}

// Function to find second largest element
int secondLargest(int arr[], int n)
{
    // If array has less than 2 elements, second largest is not possible
    if (n < 2)
        return -1;

    // Initialize largest and second largest with minimum possible value
    int large = INT_MIN;
    int second_large = INT_MIN;

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        // If current element is greater than the largest
        // Update second largest first, then largest
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        // If current element is smaller than largest
        // but greater than second largest
        // (arr[i] != large avoids duplicate values)
        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    // Return the second largest element
    return second_large;
}

int main()
{
    // Input array
    int arr[] = {2, 5, 6, 1, 8, 9};

    // Calculate size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call functions to get second smallest and second largest
    int sS = secondSmallest(arr, n);
    int sL = secondLargest(arr, n);

    // Print results
    cout << "The Second Smallest Number in given array is: " << sS << endl;
    cout << "The Second Largest Number in given array is: " << sL << endl;

    return 0;
}
