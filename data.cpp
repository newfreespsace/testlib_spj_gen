#include <bits/stdc++.h>
using namespace std;

int main()
{
  for (int i = 1; i <= 10; i++)
  {
    string str = "1 <" + to_string(i) + " >" + to_string(i) + ".out ";
    system(str.c_str());
  }
}