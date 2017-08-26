#include <iostream>
using namespace std;

class Person {
public:
	Person() {}
	void eta()
	{
		cout << "eat\n";
	}
};

class PublicStudent :public Person
{
public:
	PublicStudent() {}

	void study()
	{
		cout << "study\n";
	}
};

class ProtecedStudent :protected Person
{
public:
	ProtecedStudent() {}

	void study()
	{
		cout << "study\n";
	}
	int b=666;
};

class PrivateStudent :private Person
{
public:
	PrivateStudent() {}

	void study()
	{
		cout << "study\n";
	}
	int a = 2;
};

void fun_test(Person &p)
{
	p.eta();
}

int main()
{
	PublicStudent public_s;
	ProtecedStudent protected_s;
	PrivateStudent privated_s;
	fun_test(public_s);
	int c = privated_s.a;
	c = protected_s.b;
	cout << c << endl;
	//fun_test(protected_s);
	//fun_test(privated_s);

	return 0;
}