// we learned about kadanes algo, time and space complexities. and buy and sell
// stock with power problems on leetcode
// we also learned 2 pointer approach, and solved container with most water
// and also 3 pointer approach with array except self

// Pointers
#include <iostream>
#include <stdio.h>
using namespace std;

// int main() {
//   int a = 5;
//   int *p = &a;
//   int **q = &p;
//   cout << *p << endl;
//   cout << **q << endl;
//   cout << p << endl;
//   cout << *q << endl;
//   return 0;
// }

// pass by value and reference

// void change(int *ptr) { *ptr = 20; } // using ptrs
// void change1(int &b) { b = 30; }

// int main() {
//   int a = 10;
//   int *ptr = &a;
//   // change(ptr);
//   change1(a);

//   cout << "inside main :" << a << endl;
// }

// array pointers
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  cout << arr << endl;  // array memory loc
  cout << *arr << endl; // 0th index value

  // array pointer is a constant pointer in c++ meaning it cant be changed
  int a = 10;
  // arr  = &a; , throws error

  // pointer arithmetic
  // if ptr p has address 100 , and it is an integer pointer;

  //   int *ptr = &a;
  //   cout << ptr << endl;
  //   ptr++;
  //   cout << ptr << endl; //+4 bytes
  // pointer subtraction is possible and comparison is there as well.
  int b = 100;
  int *ptr2 = &b;
  int *ptr1 = &a;
  ptr1++;
  ptr2++;
  ptr2++;

  cout << ptr2 - ptr1 << endl;
}
