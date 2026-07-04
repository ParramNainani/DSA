/*
Problem: A system receives two separate logs of user arrival times from two
different servers. Each log is already sorted in ascending order. Your task is
to create a single chronological log that preserves the correct order of
arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order,
separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append
the earlier one to the final log until all entries are processed*/

#include <iostream>
#include <vector>
using namespace std;
int main() {

  int n = 0;
  cin >> n;
  vector<int> nums1(n);
  for (int i = 0; i < n; i++) {
    cin >> nums1[i];
  }
  int m = 0;
  cin >> m;

  vector<int> nums2(m);
  for (int j = 0; j < m; j++) {
    cin >> nums2[j];
  }

  // n = no of elements in 1
  // m == number of elements in 2
  unsigned int l = m + n - 1;
  int k = m - 1;
  int t = n - 1;
  while (k >= 0 && t >= 0) {
    if (nums1[t] >= nums2[k]) {
      nums1[l] = nums1[t];
      l--;
      t--;
    } else {
      nums1[l] = nums2[k];
      l--;
      k--;
    }
  }
  while (k >= 0) {
    nums1[l] = nums2[k];
    k--;
    l--;
  }

  for (int i = 0; i < m + n; i++) {
    cout << nums1[i] << ' ';
  }

  return 0;
}


