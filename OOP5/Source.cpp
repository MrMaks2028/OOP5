#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "A " << this << " created\n\n";
	}
	A(int a):value(a){
	
	}
	virtual ~A() {
		cout << "A " << this << " destroied\n\n";
	}
	int value;
	void f00() {
		cout << "some work\n";
	}
};

class B: public A {
public:
	B():A(){
		cout << "B " << this << " created\n\n";
	}
	B(int b) :A(b) {

	}
	~B(){
		cout << "B " << this << " destroied\n\n";
	}
	void f01() {
		cout << "some B style work\n\n";
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	
	A a;
	A();
	B d;
	B* pd = new B(5);
	delete pd;
	B* pd2 = new B(10);
	delete pd2;

	return 0;
}