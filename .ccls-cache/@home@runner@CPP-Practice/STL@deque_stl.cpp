#if 0   // For deque or double ended queue
#include<iostream>
#include<deque>

using namespace std;

void display(deque<int> q)
{
  static int cnt = 0;
  cnt++;
  cout << "\n[" << cnt << "] ---- Display --- \n";

  for(auto a = q.begin(); a!=q.end(); a++)
  {
    cout << *a << " ";
  }
  cout << endl;
  cout << "Size :" << q.size() << endl;
  cout << "Max Size : " << q.max_size() << endl;
  cout << "IsEmpty :" << q.empty() << endl;
  if(!q.empty())
  {
    cout << "Front :" << q.front() << endl;
    cout << "Back :" << q.back() << endl;
  }
}

int main()
{
  deque<int> q;
  display(q);
  q.push_back(51);
  display(q);
  q.push_back(22);
  display(q);
  q.push_front(63);
  display(q);
  q.push_back(64);
  display(q);
  q.push_back(15);
  display(q);
  q.push_back(76);
  display(q);
  q.push_front(97);
  display(q);
  q.push_back(8);
  display(q);

  cout << "\n Show 5th element/4th index : " << q.at(4) << endl;
  q[4] = 88;
  cout << "\n update abd Show 5th element/4th index : " << q.at(4) << endl;
  
  q.pop_front();
  display(q);
  q.pop_back();
  display(q);
  
  q.erase(q.begin()+3);
  display(q);

  q.erase(q.begin(), q.begin()+3);
  display(q);
  
  q.clear();
  display(q);
  return 0;
}
#endif