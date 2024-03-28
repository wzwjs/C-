#include<iostream>
using namespace std;
//在结构体中可以定义另一个结构体作为成员，用来解决实际问题

//这个结构体案例就是以典型的二叉树的实例化概念---亲情二叉树

struct ancestor {
	string name;
	string sex;
};
struct parents {
	string name;
	string sex;
	ancestor bb;
	ancestor mm;
};

int main() {
	struct ancestor yeiyei;
	yeiyei.name = "爷爷";
	struct parents baibai;
	baibai.bb.name="爷爷";
	cout << baibai.bb.name << endl;
	cout<< yeiyei.name << endl;
	system("pause");
	return 0;
}