#include <iostream>
using namespace std;

class Complex {
  private:
    float real;
    float imaginary;

  public:

    void set(float r, float i) {
      real = r;
      imaginary = i;
    }

    void display() {
      cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
      Complex result;
      result.real = real + c.real;
      result.imaginary = imaginary + c.imaginary;
      return result;
    }
};

int main() {
  cout<<"AKSHAT KUMAR (102206107)";

  Complex c1, c2, c3;

  c1.set(3.0, 4.0);
  c2.set(2.0, 3.0);

  cout << "c1: ";
  c1.display();
  cout << "c2: ";
  c2.display();

  c3 = c1.sum(c2);
  cout << "c3: ";
  c3.display();

  return 0;
}
