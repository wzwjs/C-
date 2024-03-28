#include<iostream>
using namespace std;
#include<string>
//结构体数组--将数组的每一个单位为数组
//结构： struct 结构体名 数组名[元素的个数]={{},{},...{}}

struct Student {

	string name;
	int age;
	float score;
};

int main() {

	//实例化结构体数组

	struct Student arr[3]{
		{"张三",23,87},
		{"王牛逼",23,87},
		{"张三帅",23,87},
	};

	int len = sizeof(arr) / sizeof(arr[0]);
	//cout << len;
	cout << "前三名的姓名依次是" << endl;
	//打印
	for (int i = 0; i < len; i++) {
		cout<<"	"<< arr[i].name << endl;
	}

	//修改结构体数组中元素的值
	arr[1].age = 100;
	arr[1].score = 100;
	cout << "修改后的分数" << arr[1].score << endl;
	system("pause");
	return 0;
}