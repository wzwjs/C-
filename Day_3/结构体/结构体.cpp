#include<iostream>
using namespace std;
#include<string>
//结构体---用户自定义的数据类型

//结构体的定义和使用
//语法：struct 结构体名 {结构体成员列表}
	//三种方式创建变量
		//1,struct 结构体名 变量名
		//2,struct 结构体名 变量名=（成员1值，成员2值）
		//3,结构体变量与结构体同时定义


//1,struct 结构体名 变量名

struct student {
	string name;
	int age;
};
struct student wanyan;
//2,struct 结构体名 变量名=（成员1值，成员2值）

struct Teacher {
	string name;
	int age;
};

struct Teacher wanyans;

//3,结构体变量与结构体同时定义

struct headmaster {
	string name;
	int age;
}zhangshanf;
int main() {
	

	system("pause");
	return 0;
}