#include<iostream>
using namespace std;
#include<string>
//�ṹ��---�û��Զ������������

//�ṹ��Ķ����ʹ��
//�﷨��struct �ṹ���� {�ṹ���Ա�б�}
	//���ַ�ʽ��������
		//1,struct �ṹ���� ������
		//2,struct �ṹ���� ������=����Ա1ֵ����Ա2ֵ��
		//3,�ṹ�������ṹ��ͬʱ����


//1,struct �ṹ���� ������

struct student {
	string name;
	int age;
};
struct student wanyan;
//2,struct �ṹ���� ������=����Ա1ֵ����Ա2ֵ��

struct Teacher {
	string name;
	int age;
};

struct Teacher wanyans;

//3,�ṹ�������ṹ��ͬʱ����

struct headmaster {
	string name;
	int age;
}zhangshanf;
int main() {
	

	system("pause");
	return 0;
}