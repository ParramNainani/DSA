// painters problem

#include <iostream>
#include <numeric>
#include <regex>
#include <stdio.h>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr, int mid, int m) {
  int painter = 1;
  int plank = 0;
  for (int i = 0; i < (int)arr.size(); i++) {
    if (arr[i] > mid) {
      return false;
    }
    if (plank + arr[i] <= mid) {
      plank += arr[i];
    } else {
      painter++;
      plank = arr[i];
    }
    if (painter > m) {
      return false;
    }
  }
  return true;
}

int painter(vector<int> &arr, int n, int m) {
  int start = 0;
  int end = 0;
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    end += arr[i];
  }
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (isValid(arr, mid, n) == true) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  vector<int> arr = {3, 6, 9, 12};
  int n = arr.size();
  int m = 3;
  cout << painter(arr, n, m) << endl;
}