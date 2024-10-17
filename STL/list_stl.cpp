#if 0 // list stl / double linked list
#include <iostream>

using namespace std;
void display()
{
  static int cnt = 0;
  cnt++;
  cout << "\n[" << cnt << "] ---- Display --- \n";
}

int main()
{
  display();
  display();
  display();
  return 0;
}
#endif