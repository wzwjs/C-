#include<iostream>
using namespace std;
#include<string>
//�ṹ������--�������ÿһ����λΪ����
//�ṹ�� struct �ṹ���� ������[Ԫ�صĸ���]={{},{},...{}}

struct Student {

	string name;
	int age;
	float score;
};

int main() {

	//ʵ�����ṹ������

	struct Student arr[3]{
		{"����",23,87},
		{"��ţ��",23,87},
		{"����˧",23,87},
	};

	int len = sizeof(arr) / sizeof(arr[0]);
	//cout << len;
	cout << "ǰ����������������" << endl;
	//��ӡ
	for (int i = 0; i < len; i++) {
		cout<<"	"<< arr[i].name << endl;
	}

	//�޸Ľṹ��������Ԫ�ص�ֵ
	arr[1].age = 100;
	arr[1].score = 100;
	cout << "�޸ĺ�ķ���" << arr[1].score << endl;
	system("pause");
	return 0;
}