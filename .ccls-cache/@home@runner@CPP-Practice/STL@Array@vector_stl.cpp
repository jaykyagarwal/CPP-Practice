#if 0
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    static int func_caller_cnt = 0;
    func_caller_cnt++;
    int i=0;
    vector<int>::iterator itr;
    cout << "[" << func_caller_cnt <<"] Vector Display ----- \n";
    for(itr = v.begin();itr!= v.end();++itr, ++i)
    {
        cout << "Index:" << i << " Value:"<< *itr << endl;                 
    }
        cout << "Size :" << v.size() << endl;
        cout << "Capacity :" << v.capacity() << endl;
        cout << "Front :" <<v.front() << endl;
        cout << "Back :" << v.back() << endl;
        cout << "Begin Element:" << *v.begin() << endl;
        cout << "End Element:" << *v.end() << endl;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(6);
    v.push_back(4);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(7);
    //display(v);
    v.pop_back();
    //display(v);
    v.clear();
    display(v);      
    cout << v.back();
    return 0;
}
#endif