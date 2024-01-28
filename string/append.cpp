#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  string s = "A";
  s.append(s).append(s).append(s);
  cout << s.length () << endl;
  return 0;
}