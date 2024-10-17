#if 1
#include<iostream>

using namespace std;

class singleton{
    private:
    static singleton *instance ;
    int data;

    private:
    singleton(){};

    public:
    static singleton* getInstance(){
        if(instance == NULL)
        {
          instance =  new singleton;
        }
        return instance;
    };
    
    int getdata(){
      return data;
    };
    
    void setdata(int d){
     data = d;
      retrun this 
    };

    void printdata(){
      cout << "Data value : " << data << endl;
    }
};//class singleton

singleton * singleton::instance = NULL;

int main(){
  singleton* s1 = singleton::getInstance();
  singleton* s2 = singleton::getInstance();
  singleton* s3 = singleton::getInstance();
  singleton* s4 = singleton::getInstance();
  singleton* s5 = singleton::getInstance();
  singleton* s6 = singleton::getInstance();
  
  s1->setdata(10);
  cout << s6->getdata();
  cout << endl;
  s2->setdata(20);
  cout << s5->getdata();
  cout << endl;
  s3->setdata(30);
  cout << s4->getdata();
  cout << endl;

  singleton::getInstance()->setdata(10).printdata();
  return 0;
}


#endif