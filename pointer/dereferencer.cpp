#include <iostream>

using namespace std;

int main(void)
{
  int ivar, *ptr;
  ivar = 2;
  ptr = &ivar;

  cout << *ptr << endl;

  *ptr = 4;

  cout << *ptr << endl;
  cout << ivar << endl;

  return 0;    
}