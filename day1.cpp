// Linear Search DSA Day 1

// #include <iostream>
// using namespace std;
// void linearSearch(int arr[], int sz, int target) {
//   for (int i = 0; i < sz; i++) {
//     if (arr[i] == target) {
//       cout << "Target found at index " << i << endl;
//       break;
//     } else if (i == sz - 1) {
//       cout << "Target not found" << endl;
//     }
//   }
// }
// int main() {
//   int arr[5] = {1, 4, 32, 41, 68};
//   int sz = 5;
//   int target = 51;
//   linearSearch(arr, sz, target);
// }

// reverse an array

#include <iostream>
#include <utility>
using namespace std;

// void rev(int arr[], int sz) {
//   int newArr[6];
//   int j = sz - 1;
//   for (int i = 0; i < sz; i++) {
//     int k = arr[i];
//     newArr[j] = k;
//     j--;
//   }
//   for (int l = 0; l < sz; l++) {
//     cout << newArr[l] << endl;
//   }
// }

// int main() {
//   int arr[6] = {1, 4, 7, 0, 11, 34};
//   int sz = 6;
//   rev(arr, sz);
//   return 0;
// }

// reverse array two pointer approach

// void rev(int arr[], int sz) {
//   int start = 0;
//   int end = sz - 1;
//   while (start < end) {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
//   for (int i = 0; i < sz; i++) {
//     cout << arr[i] << endl;
//   }
// }

// int main() {
//   int arr[] = {1, 2, 3, 4, 5, 7, 45, 13, 234};
//   int sz = 9;
//   rev(arr, sz);
// }
