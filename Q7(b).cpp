#include <iostream>
using namespace std;

class A{
	private:
		int a;
		int b;
		void setA(int a){
			this->a=a;					//"this" is a pointer in c++ programming that is used to
		}
		void setB(int b){
			this->b=b;
		}
	public:
		void getValue(int x,int y){
			setA(x);           			 //we have accessed the private member function in public access specifier.
			setB(y); 
		}
        void putValue(){
			cout<<"a = "<<a<<" and "<<"b = "<<b<<endl;
		}
};

int main(){

	cout<<"AKSHAT KUMAR (102206107)";
	
	A objABC;
	objABC.getValue(10,30);
	objABC.putValue();
	return 0;
}