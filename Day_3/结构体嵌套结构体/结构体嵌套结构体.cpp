#include<iostream>
using namespace std;
//�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������

//����ṹ�尸�������Ե��͵Ķ�������ʵ��������---���������

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
	yeiyei.name = "үү";
	struct parents baibai;
	baibai.bb.name="үү";
	cout << baibai.bb.name << endl;
	cout<< yeiyei.name << endl;
	system("pause");
	return 0;
}