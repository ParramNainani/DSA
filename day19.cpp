/*
Problem: Given an array of integers, rotate the array to the right by k
positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3
*/

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
  int k;
  cin >> k;

  for (int i = 0; i < k; i++) {
    arr.insert(arr.begin(), arr.back());
    arr.pop_back();
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
