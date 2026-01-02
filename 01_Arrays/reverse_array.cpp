/*
Problem:
Reverse a given array.

Approach:
Used the Two Pointer technique.
- Initialize one pointer at the start (p1) and another at the end (p2) of the array.
- Swap the elements at p1 and p2.
- Move p1 forward and p2 backward.
- Continue until both pointers meet.

This approach reverses the array in-place without using extra space.

Time Complexity:
O(n) — each element is visited once.

Space Complexity:
O(1) — no extra space is used (in-place).
*/

#include <iostream>
using namespace std;
int reversedarray(int arr[], int n)
{
    int p1 = 0;
    int p2 = n - 1;

    while (p1 < p2)
    {
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;

        p1++;
        p2--;
    }
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    reversedarray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to reverse the array in-place
//     void reverseArray(vector<int>& arr) {
//         // Initialize pointer to the beginning of the array
//         int p1 = 0;

//         // Initialize pointer to the end of the array
//         int p2 = arr.size() - 1;

//         // Loop until the two pointers meet in the middle
//         while (p1 < p2) {
//             // Swap the elements at p1 and p2
//             swap(arr[p1], arr[p2]);

//             // Move the left pointer one step to the right
//             p1++;

//             // Move the right pointer one step to the left
//             p2--;
//         }
//     }
// };

// // Driver code
// int main() {
//     // Create a Solution object
//     Solution sol;

//     // Input array
//     vector<int> arr = {1, 2, 3, 4, 5};

//     // Call the reverse function
//     sol.reverseArray(arr);

//     // Print the reversed array
//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }
