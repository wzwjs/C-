#include<iostream>
using namespace std;

//�������к�
	//ջ����
		//�ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ�������
		//ע�������Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�--vs2022������һ��仯��


int* func() {

	int a = 10;
	return &a;
}

int main() {

	//ջ��

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	system("pause");
	return 0;
}