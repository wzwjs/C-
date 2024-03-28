//结构体做函数参数
//1,值传递不改变实参
//2,地址传递改变实参

#include<iostream>
using namespace std;
#include<string>


struct Student {
	string name;
	int age;
};
//1,值传递不改变实参
void value_printf(Student one) {
	one.age = 18;
}
//2,地址传递改变实参数
void address_printf(Student *two) {
	two->age = 18;
}

int main() {
	//1,值传递不改变实参
/*	struct Student one;
	one.age = 10;
	value_printf(one);
	cout << one.age << endl;
*/

//2,地址传递改变实参数
	
/*	struct Student two;
	two.age = 10;
	address_printf(&two);
	cout << two.age << endl;
	*/

	system("pause");
	return 0;
}
