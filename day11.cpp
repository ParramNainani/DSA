/*
Problem: Given an array of n integers, reverse the array in-place using
two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays
*/

#include <iostream>
#include <numeric>
#include <regex>
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> rev(vector<int> &nums) {
  int start = 0;
  int end = nums.size() - 1;
  while (start < end) {
    int temp = nums[start];
    nums[start] = nums[end];
    nums[end] = temp;
    start++;
    end--;
  }
  return nums;
}
int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> reverse = rev(nums);
  for (int i = 0; i < reverse.size(); i++) {
    cout << reverse[i] << endl;
  }
}
