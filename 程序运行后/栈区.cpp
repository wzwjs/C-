#include<iostream>
using namespace std;

//程序运行后
	//栈区：
		//由编译器自动分配释放，存放函数的参数值，局部变量等
		//注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放--vs2022规则有一点变化。


int* func() {

	int a = 10;
	return &a;
}

int main() {

	//栈区

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;


	system("pause");
	return 0;
}