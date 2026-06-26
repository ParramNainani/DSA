// did leetcode problems available on github

// Book allocation problem
#include <iostream>
#include <numeric>
#include <regex>
#include <stdio.h>
#include <vector>
using namespace std;

// rules
// every student atleast one book.
// return min no. of pages
bool isValid(vector<int> &arr, int m, int mid) {
  int st = 1;
  int pages = 0;
  for (int i = 0; i < (int)arr.size(); i++) {
    if (arr[i] > mid) {
      return false;
    }
    if (pages + arr[i] <= mid) {
      pages += arr[i];
    } else {
      st++;
      pages = arr[i];
    }
    if (st > m) {
      return false;
    }
  }
  return true;
}

int allocateBooks(vector<int> &arr, int n, int m) {
  int ans = -1;
  int start = 0;
  int end = std::accumulate(arr.begin(), arr.end(), 0);
  if (n < m) {
    return -1;
  }
  while (start <= end) {

    int mid = start + (end - start) / 2;
    if (isValid(arr, m, mid) == true) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  vector<int> arr = {2, 1, 3, 4};
  int m = 2;
  int n = 4;
  cout << allocateBooks(arr, n, m) << endl;
  return 0;
}