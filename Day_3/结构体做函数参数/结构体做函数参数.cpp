//�ṹ������������
//1,ֵ���ݲ��ı�ʵ��
//2,��ַ���ݸı�ʵ��

#include<iostream>
using namespace std;
#include<string>


struct Student {
	string name;
	int age;
};
//1,ֵ���ݲ��ı�ʵ��
void value_printf(Student one) {
	one.age = 18;
}
//2,��ַ���ݸı�ʵ����
void address_printf(Student *two) {
	two->age = 18;
}

int main() {
	//1,ֵ���ݲ��ı�ʵ��
/*	struct Student one;
	one.age = 10;
	value_printf(one);
	cout << one.age << endl;
*/

//2,��ַ���ݸı�ʵ����
	
/*	struct Student two;
	two.age = 10;
	address_printf(&two);
	cout << two.age << endl;
	*/

	system("pause");
	return 0;
}
