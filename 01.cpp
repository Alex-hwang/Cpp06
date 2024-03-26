#include<iostream>
using namespace std;

class Base {//声明一个基类
private:
	int b_number;
public:
	Base() {}//构造函数
	Base(int i) :b_number(i) {}//构造函数
	int get_number() {//获取b_number的值
		return b_number;
	}
	void print() {//输出b_number的值
		cout << b_number << endl;
	}
};

class Derived :public Base {//声明一个类，继承基类的成员
	//class Derived :private Base {//声明一个派生类，继承基类的成员 这样的话，基类的成员在派生类中是私有的无法访问，运行时会报错
		//class Derived : protected Base {//声明一个派生类，继承基类的成员 这样的话，基类的成员在派生类中是保护的，只有派生类和派生类的派生类可以访问，运行时也会出错，因为主函数中b.print()是无法访问的
	int d_number;
public:
	Derived(int i, int j) :Base(i), d_number(j) {};//构造函数
	void print() {//输出b_number和d_number的值
		cout << get_number() << " ";
		cout << d_number << endl;
	}
};

int main() {
	Base a(2);//声明一个基类，调用构造函数，传入参数2，初始化b_number为2
	Derived b(3, 4);//声明一个派生类，调用构造函数，参数为3,4，初始化b_number和d_number分别为3,4
	//输出a和b的值
	cout << "a is ";
	cout << "b is ";
	b.print();//调用派生类的输出函数
	cout << "base part of b is ";
	b.Base::print();//调用基类的输出函数
	return 0;
}