#if 1
#include <iostream>

using namespace std;

class Singleton {
private:
    int data;
    // Static pointer to the Singleton instance
    static Singleton* instance;
    // Private Constructor
    Singleton() {}

public:
    // Static method to get the Singleton instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Method to set values
    void setData(int data) {
        this->data = data;
    }

    // Method to set values
    int getData() {
      return data;
    }

    // Method to print values
    void print() const {
        cout << "Values: " <<  data << endl;
    }
};

// Initialize static members
Singleton* Singleton::instance = nullptr;

// Driver code
int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->setData(10);
    s1->print();
    return 0;
}

#endif