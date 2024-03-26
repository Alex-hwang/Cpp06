#include<iostream>
using namespace std;

class Base {//����һ������
private:
	int b_number;
public:
	Base() {}//���캯��
	Base(int i) :b_number(i) {}//���캯��
	int get_number() {//��ȡb_number��ֵ
		return b_number;
	}
	void print() {//���b_number��ֵ
		cout << b_number << endl;
	}
};

class Derived :public Base {//����һ���࣬�̳л���ĳ�Ա
	//class Derived :private Base {//����һ�������࣬�̳л���ĳ�Ա �����Ļ�������ĳ�Ա������������˽�е��޷����ʣ�����ʱ�ᱨ��
		//class Derived : protected Base {//����һ�������࣬�̳л���ĳ�Ա �����Ļ�������ĳ�Ա�����������Ǳ����ģ�ֻ������������������������Է��ʣ�����ʱҲ�������Ϊ��������b.print()���޷����ʵ�
	int d_number;
public:
	Derived(int i, int j) :Base(i), d_number(j) {};//���캯��
	void print() {//���b_number��d_number��ֵ
		cout << get_number() << " ";
		cout << d_number << endl;
	}
};

int main() {
	Base a(2);//����һ�����࣬���ù��캯�����������2����ʼ��b_numberΪ2
	Derived b(3, 4);//����һ�������࣬���ù��캯��������Ϊ3,4����ʼ��b_number��d_number�ֱ�Ϊ3,4
	//���a��b��ֵ
	cout << "a is ";
	cout << "b is ";
	b.print();//������������������
	cout << "base part of b is ";
	b.Base::print();//���û�����������
	return 0;
}