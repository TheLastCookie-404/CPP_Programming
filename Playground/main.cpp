#include <iostream>
using namespace std;

int kek = 234;
int *lol = &kek;

void printStr(const char *str) 
{
  cout << str << endl;
}

int main()
{
  cout << "lol" << endl;
  printStr("kek");
  cout << lol << endl;
  return 0;
}