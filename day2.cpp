// vectors
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// int main() {
//   vector<int> vec = {1, 2, 3, 4, 5}; // vector describe
//   // doubles size when capacity is low;
//   // solved 2 leetcode problems , removing duplicates by XOR , 136 and 137
//   cout << vec.size() << endl;
//   vec.push_back(3);
//   cout << vec.size() << " " << vec.back() << endl;
//   vec.pop_back();
//   cout << vec.size() << " " << vec.back() << endl;
// }

// kadanes algorithms and MAX SUM SUBARRAY

// int main() {
//   // so for subarrays we need one start and end, lets first write to print
//   all
//   // subarrays
//   int n = 5;
//   int arr[5] = {1, 2, 3, 4, 5};
//   for (int start = 0; start < n; start++) {
//     for (int end = start; end < n; end++) {
//       for (int i = start; i <= end; i++) {
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }
// }

// bruteforce approach

// int main() {
//   int max_sum = -1000000;
//   int n = 7;
//   int arr[7] = {3, -4, 5, 4, -1, 7, -8};
//   for (int start = 0; start < n; start++) {
//     int currentsum = 0;
//     for (int end = start; end < n; end++) {
//       currentsum += arr[end];
//       max_sum = max(max_sum, currentsum);
//     }
//   }
//   cout << max_sum << endl;
//   return 0;
// }

// kadanes approach

int main() {
  int max_sum = INT_MIN;
  int currentsum = 0;
  int n = 7;
  int arr[7] = {3, -4, 5, 4, -1, 7, -8};
  for (int start = 0; start < n; start++) {
    currentsum += arr[start];
    max_sum = max(currentsum, max_sum);
    if (currentsum < 0) {
      currentsum = 0;
    }
  }
  cout << max_sum << endl;
  return 0;
}