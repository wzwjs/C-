#include<iostream>
using namespace std;

//�������к�

	//����
		//�ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
		// ��C++����Ҫ����new�ڶ��������ڴ�
		// �����ɳ���Ա�����ٺ��ͷ�
		// ������������new�ؼ��ֽ��п����ڴ�

//����
int* func() {
	int* a = new int(10);
	return a;

}

int main() {



//����

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}