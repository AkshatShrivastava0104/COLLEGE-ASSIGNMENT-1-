#include <iostream>
using namespace std;

class MyClass {
  private:
    int x;

    void privateFunction() {
      cout << "This is a private function" << endl;
    }

  public:
    void publicFunction() {
      cout << "This is a public function" << endl;
      privateFunction(); 
    }

    void accessPrivateFunction() {
      cout << "This is a function that access a private function" << endl;
      privateFunction(); 
    }
};

int main() {
  cout<<"AKSHAT KUMAR (102206107)"; 

  MyClass obj;
  obj.publicFunction();
  obj.accessPrivateFunction();

  return 0;
}
