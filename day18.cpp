/*Problem: Write a program to check whether a given square matrix is an Identity
Matrix. An identity matrix is a square matrix in which all diagonal elements are
1 and all non-diagonal elements are 0.

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements

Output:
- Print "Identity Matrix" if the matrix satisfies the condition
- Otherwise, print "Not an Identity Matrix"

Example:
Input:
3
1 0 0
0 1 0
0 0 1

Output:
Identity Matrix*/
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<vector<int>> arr(n, vector<int>(n, 0));
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >> arr[i][j];
//     }
//   }
//   int count = 0;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (arr[i][j] != 0 && i != j) {
//         cout << "Not identity" << endl;
//         return 0;
//       } else if (arr[i][j] == 1 && i == j) {
//         count++;
//       }
//     }
//   }
//   if (count == n) {
//     cout << "Identity Matrix";
//   }
// }

/*Problem: Given a matrix, calculate the sum of its primary diagonal elements.
The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each

Output:
- Print the sum of the primary diagonal elements

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
15

Explanation:
1 + 5 + 9 = 15*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<vector<int>> arr(n, vector<int>(n, 0));
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >> arr[i][j];
//     }
//   }
//   int sum = 0;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (i == j) {
//         sum += arr[i][j];
//       }
//     }
//   }
//   cout << sum << endl;
// }

/*Problem: Given an array of integers, count the frequency of each distinct
element and print the result.

Input:
- First line: integer n (size of array)
- Second line: n integers

Output:
- Print each element followed by its frequency in the format element:count

Example:
Input:
5
1 2 2 3 1

Output:
1:2 2:2 3:1*/

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   vector<int> arr(n, 0);
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }

//   unordered_map<int, int> map;
//   for (auto i : arr) {
//     map[i]++;
//   }

//   for (auto i = map.begin(); i != map.end(); i++) {
//     cout << i->first << ":" << i->second << " ";
//   }
// }

/*
Problem: Write a program to find the maximum and minimum values present in a
given array of integers.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the maximum and minimum elements

Example:
Input:
6
3 5 1 9 2 8

Output:
Max: 9
Min: 1
*/
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int Max = INT_MIN;
  int Min = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= Max) {
      Max = arr[i];
    }
    if (arr[i] <= Min) {
      Min = arr[i];
    }
  }
  cout << "Max:" << Max << endl;
  cout << "Min:" << Min << endl;

  return 0;
}