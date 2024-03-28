#include<iostream>
using namespace std;
#include<string>
//结构体指针
//作用:通过指针访问结构体中的成员
//例如下面的例子 
//总结：结构体指针可以通过->操作符来访问结构体中的成员

struct student {
	string name;
	int age;
}stu1 = {"王炎",18};
//利用操作符->可以通过结构体指针访问结构体属性
int main() {

	struct student * p = &stu1;
	cout <<p->age << endl;
	system("pause");
	return 0;
}