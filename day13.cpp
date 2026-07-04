// agressive cows problem

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int isValid(vector<int> &arr, int n, int mid, int c) {
  int cows = 1;
  int last = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] - last >= mid) {
      last = arr[i];
      cows++;
    }
    if (cows == c) {
      return true;
    }
  }
  return false;
}
int cows1(int n, int cows, vector<int> &arr) {
  int minLow = 1;
  sort(arr.begin(), arr.end());
  int maxHigh = arr[n - 1] - arr[0];
  int ans = 0;
  // have to find largest possible answer from the cows
  while (minLow < maxHigh) {
    int mid = minLow + (maxHigh - minLow) / 2;
    if (isValid(arr, n, mid, cows)) {
      ans = mid;
      minLow = mid + 1;
    } else {
      maxHigh = mid - 1;
    }
  }
}
int main() {
  int n = 5;
  vector<int> arr = {1, 2, 8, 4, 9};
  int cows = 4;
  cout << cows1(n, cows, arr) << endl;
}