#include<iostream>
using namespace std;
#include<string>
//�ṹ��ָ��
//����:ͨ��ָ����ʽṹ���еĳ�Ա
//������������� 
//�ܽ᣺�ṹ��ָ�����ͨ��->�����������ʽṹ���еĳ�Ա

struct student {
	string name;
	int age;
}stu1 = {"����",18};
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������
int main() {

	struct student * p = &stu1;
	cout <<p->age << endl;
	system("pause");
	return 0;
}