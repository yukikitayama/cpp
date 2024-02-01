#include <iostream>
using namespace std;
int main(void)
{
  int t[4] = { 8, 4, 2, 1 };

  cout << "t: ";
  cout << t << endl;

  // Use dereference operator, so *p1 is array element
  // *p1 = 2, t[2]: 2
  // *p2 = 2 - 1 = 1, t[1]: 4
  int *p1 = t + 2, *p2 = p1 - 1;

//   int *p1 = t + 2;
//   int *p2 = p1 - 1;


  // These use dereference operator *, so return array element, not array index.
  cout << "*p1: ";
  cout << *p1 << endl;

  cout << "*p2: ";
  cout << *p2 << endl;

  // Before this, p1 points t[2]
  p1++;
  // Now p1 points t[3]

  cout << "p1: ";
  cout << p1 << endl;

  cout << "*p1: ";
  cout << *p1 << endl;
  // t[3]: 1

  // This doesn't use dereference operator *, so it's index calculation
  cout << "p1 - p2: ";
  cout << p1 - p2 << endl;
  // p1: 3 - p2: 1 = 2

  // 4th array element - 3rd array element = 1 - 2 = -1
  cout << *p1 - t[p1 - p2] << endl;
}