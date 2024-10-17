#if 0
#include<iostream>
#include<array>

using namespace std;

int main() {
  array<int, 10> arr;
  for(int i=0;i < arr.size();i++)
  {
          arr[i] = i;
  }

  cout << "Array:\n";
  for(int i=0;i < arr.size();i++)
  {
          cout << "Address : " << &arr[i];
          cout << " Value: " << arr.at(i) << endl;
          // (or) cout << arr[i] << endl;

  }
  cout << "Array print by indexing using begin and end function iterator :\n";
  for(auto a = arr.begin(); a!=arr.end(); a++)
  {
          cout << "Address : " << a;
          cout << " Value: " << *a << endl;
  }

  cout << "Array print by iterator variable:\n";
  array<int, 1> ::iterator it = arr.begin();
  for(it = arr.begin(); it!=arr.end(); it++)
  {
          cout << "Address : " << it;
          cout << " Value: " << *it << endl;
  }

  cout << "Size :" << arr.size() << endl;
  cout << "End refrence  :" << (arr.end()) << endl;
  cout << "Begin/First element refrence :" << (arr.begin()) << endl;
  cout << "Front Element :" << (arr.front()) << endl;
  cout << "Back/last Element :" << (arr.back()) << endl;
  
  return 0;

}
#endif