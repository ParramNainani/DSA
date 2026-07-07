/*Problem: Given integers a and b, compute a^b using recursion without using
pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32*/

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int k;
//   cin >> k;
//   int ans = 1;
//   for (int i = 0; i < k; i++) {
//     ans = ans * n;
//   }
//   cout << ans << endl;
//   return 0;
// }

/*
Problem: A secret system stores code names in forward order. To display them in
mirror format, you must transform the given code name so that its characters
appear in the opposite order.

Input:
- Single line: a lowercase string containing only alphabetic characters (no
spaces)

Output:
- Print the transformed code name after applying the mirror operation

Example:
Input:
hello

Output:
olleh

Explanation: The first character moves to the last position, the second to the
second-last, and so on until the entire string is mirrored
*/

// #include <iostream>
// using namespace std;
// int main() {
//   string arr = "";
//   cin >> arr;
//   int start = 0;
//   int end = arr.length() - 1;
//   while (start <= end) {
//     char temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//   }
//   cout << arr << endl;
//   return 0;
// }

/*
Problem: Read a string and check if it is a palindrome using two-pointer
comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards
*/

// #include <iostream>
// using namespace std;
// int main() {
//   string arr = "";
//   cin >> arr;
//   int start = 0;
//   int end = arr.length() - 1;
//   while (start <= end) {
//     if (arr[start] == arr[end]) {
//       start++;
//       end--;
//     } else {
//       cout << "Not a palindrome" << endl;
//       return 0;
//     }
//   }
//   cout << "Palindrome" << endl;
// }
