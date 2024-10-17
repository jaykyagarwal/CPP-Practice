#if 1
#include<iostream>
#include<deque>

using namespace std;

void display()
{
  static int cnt = 0;
  cnt++;
  cout << "[" << cnt << "] ---- Display --- \n";
}

int main()
{
  display();
  display();
  display();
  return 0;
}
#endif