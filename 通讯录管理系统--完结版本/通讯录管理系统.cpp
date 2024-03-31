//封装函数显示该界面如, void showMenu()
//在main函数中调用封装好的函数

//功能描述：
//实现添加联系人功能，联系人上限为1000人，
// 联系人信息包括
// （姓名、性别、年龄、联系电话、家庭住址）
//添加联系人实现步骤
	//设计联系人结构体
	//设计通讯录结构体

	//main函数中创建通讯录	?
	// 封装添加联系人函数	?	
	//测试添加联系人功能	?

#include<iostream>
using namespace std;
#include<string>

#define MAX 1000
//Struct_Area
//联系人的结构体
struct link_pepole {
	string name;
	int sex;
	//	string sex;
	int age;
	int moblie_number;
	string address;
};
//通讯录的结构体
struct link_book {
	link_pepole arr[MAX];
	int now_size;
};
//Fuction_Area
//Menu_Space
void showMenu() {
	cout << "********************" << endl;
	cout << "***  1,添加联系人***" << endl;
	cout << "***  2,显示联系人***" << endl;
	cout << "***  3,删除联系人***" << endl;
	cout << "***  4,查找联系人***" << endl;
	cout << "***  5,修改联系人***" << endl;
	cout << "***  6,清空联系人***" << endl;
	cout << "***  0,退出通讯录***" << endl;
	cout << "********************" << endl;

};

//add_function
void add(link_book * one) {

	//当通讯录已经满时
	if (one->now_size >= MAX) {
		cout << "当前通讯录已经有1000个人了" << endl;
		return;  //?
	}

	//当通讯录没有满时
	else {
		//姓名
		cout << "请输入姓名" << endl;
		cin >> one->arr[one->now_size].name;
		// 性别
		/*	这是我写的代码，跟老师的代码比起来感觉代码的健全性，可读性；还是有距离
		cout << "男性输入1,女性输入0" << endl;
		cin >> one->arr[one->now_size].sex;
		*/
			//老师写的代码
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "0----女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				one->arr[one->now_size].sex = sex;
				break;
			}
			else
				cout << "你输入的数字有误。请重新输入";
		}
		// 年龄
		/*	这是自己看题目写的代码，感觉代码可读性，健全性可以提高一下，以下就是学习老师关于性别写法的对于改进我年龄的写法
			cout << "请输入年龄" << endl;
			cin >> one->arr[one->now_size].age;
		*/
		cout << "请输入年龄：（年龄在0~150之间的整数）" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 && age < 150) {    //如何判断将输入非数字类型，关键是要判断输入非数字类型，应该怎么判断
				one->arr[one->now_size].age = age;
				break;
			}
			else
				cout << "你输入的年龄有误，请重新输入";
		}
		

	
		// 联系电话
		cout << "请输入联系电话" << endl;
		cin >> one->arr[one->now_size].moblie_number;

		// 家庭住址
		cout << "请输入家庭住址" << endl;
		cin >> one->arr[one->now_size].address;
		one->now_size++;
		cout << "当前通讯录的人数为：" << one->now_size << endl;
		cout << "添加成功" << endl;
		system("pause");//请点击任意键
		system("cls");//清屏操作
	}

};

void ShowPerson(link_book  *one) {
	//如果通讯录中没有人即打印提示，通讯录中没有人

	//一个错误，在写显示联系人的时候，将原本要写==的地方写成为了=，导至了这个地方写死了，搞的这个循环就死到了这里，一直没有运行了；将这个传入的这个通讯录变量的
	if (one->now_size == 0) {
		cout << "当前通讯录中没有联系人";
	}
	else
		for (int i = 0; i < one->now_size; i++)
		{
			//打印这个人的信息
			//姓名、性别、年龄、联系电话、家庭住址
		
			cout << "这个人的姓名是：" << one->arr[i].name << "\t";

			cout << "这个人的性别是：" << ((one->arr[i].sex==1)?"男": "女") << "\t";//这个是三目表达式()?，为什么这个里面对 汉字，也就是里面的字符的引用要加双引号，而对数字的引用就直接写就行了，？好像所有对汉字的引用都要加双引号
			//应该是这样理解的，第一：如果不加双引号，那这个从编译器层面就会报错误，因为编译器根本就不认识汉字，
			                   //  第二，加双引号的目的，就是让这个值的数据类型是字符串，从而编译器就可以对这个值继续操作，从语法层面和操作层面就可以了，
								//	第三，为什么不使用单引号，在汉字编码和英文字符编码在存储的单位就是不一样的，单引号表示的是一个字符，其存储空间是1，而一个汉字的存储空间是二个字符，如果分配一个字符去存储汉字，即有错误

			cout << "这个人的年龄是：" << one->arr[i].age << "\t";

			cout << "这个人的联系电话是：" << one->arr[i].moblie_number << "\t";

			cout << "这个人的家庭住址是：" << one->arr[i].address<< endl;

		/*	system("pause");//作用是暂停一下，然后显示一个请点击任意键结束
			system("cls");//清空当前屏幕，应该是清空由当前函数显示的屏幕，有一个局部作用域的功能，分其作用域的屏幕不能清空
			*/
			
		}//一个错误点，应该改进--2024，3，31修改
	system("pause");//作用是暂停一下，然后显示一个请点击任意键结束
	system("cls");//清空当前屏幕，应该是清空由当前函数显示的屏幕，有一个局部作用域的功能，分其作用域的屏幕不能清空
}
//在通讯录中删除一个人，首先要判断这个人在通讯录中是否存在
	//存在即返回对应下标的索引，不存在的话，就返回-1
    //然后在通讯录中遍历到这个索引所对应到的人，然后，再删除即可
//是否存在
int  isExist(link_book* one, string name) {
	for (int i = 0; i < one->now_size; i++) {
		if (one->arr[i].name == name) {
			return i;
		}
		else
			return -1;
	}

}


void DeletePerson(link_book * one) {
	//输入一个想要删除的值
	string name;
	cin >> name;
	//判断在通讯录中是否有这个人
	int ret = isExist(one, name);
	//有即删除
	if (ret != -1) {
		for (int j = ret; j < one->now_size - 1; j++) {
			one->arr[j] = one->arr[j + 1];
		}
		cout << "删除成功" << endl;
		one->now_size--;
	}
	else
		cout << "该通讯录中没有这个人";
	system("pause");
	system("cls");
}



//查找一个联系人的操作，首先去判断这个联系人是否存在，即可以调用那个IsExist这个函数，如何再通过调用ShowPerson这个函数去显示该值
void Find(link_book* one) {
	//首先应该输入要删除联系人的姓名
	string name;
	cout << "\n请输入要查找联系人的姓名" << "\n";
	cin >> name;

	
	int ret = isExist(one, name);
	//2024.3.31,启示三，函数之间是可以相互调用的
	//如果存在就调用函数给打印出来，不存在就提示不存在
	if (ret != -1) {

		cout <<"姓名：" << one->arr[ret].name << " 年龄：" << one->arr[ret].age <<"性别" << one->arr[ret].sex << "联系电话" << one->arr[ret].moblie_number << "  地址" << one->arr[ret].address << endl;
	}
	else
		cout << "查无此人" << endl;
	//2024，3，31第二次成长的地方
	system("pause");
	system("cls");
}



//修改联系人
//修改联系人的逻辑是，首先去通讯录中去寻找该联系人，
//在写完这一段代码的时候，我感觉真的，一个方法，一个函数真的很多时候都可以调用，以前对于重复造轮子会不是那么的有感觉，今天突然，感觉重复造相同的轮子真的太影响科技的进步速度
void Modify(link_book* one) {

	//输入想要修改联系人的姓名
	

	//修改联系人的进步点1，这里应该写一个输入提示，提高代码，程序的可使用性
	cout << "请输入你想要修改联系人的姓名：" << endl;
	string name;
	cin >> name;
	//然后从通讯录里面遍历查询看是否有该联系人的姓名
	int ret = isExist(one, name);

	//有，就修改其信息（姓名，性别，年龄，电话，地址）
	//先修改姓名试试看
	if (ret != -1) {
		
		string New_Name;
		int    New_Sex;
		int	   New_Age;
		int    New_Mobile_number;
		string New_Address;
		cout << "请输入修改后的姓名："<<"\t";
		cin >> New_Name;
		cout << "1---男，0----女" << "\t";
		cout << "请输入修改后的性别：" << "\t";
		//修改联系人的进步点2，
		//这里应该要限制输入，就只能给性别输入1或者0，不然会与之前的代码逻辑失联
	

		while (true) {
			cin >> New_Sex;
			if (New_Sex == 1 || New_Sex == 0) {
				one->arr[ret].sex = New_Sex;
				break;
			}
			cout << "请重新输入" << endl;				

		}
		//在教程视频里面，多次使用了死循环加分支结构的写法，就只留一个出口，没有满足条件的话，就一直循环输入，判断结果，这样很好的避免了一些无效，非法的输入，有利于提高程序的安全性·
		                      //在自己写代码的时候，总是有一种莫名的担心，担心这里会报错误，//担心看老师讲解视频的时候，看一下是什么问题
		cout << "请输入修改后的年龄：" << "\t";
		cin >> New_Age;
		cout << "请输入修改后的电话：" << "\t";
		cin >> New_Mobile_number;
		cout << "请输入修改后的地址：" << "\t";
		cin >> New_Address;

		cout << "\t";
		one->arr[ret].name = New_Name;
		
		one->arr[ret].age = New_Age;
		one->arr[ret].moblie_number = New_Mobile_number;
		one->arr[ret].address = New_Address;
		
		//修改联系人的进步点3，这里应该加一个，提示已经修改完成的语句，增强代码的可读性，程序的容易使用性
		cout << "修改完成" << endl;
	}
	
	//没有的话，就提示没有该联系人
	else
		cout << "该联系人并没有在该通讯录里面" << endl;

	system("pause");
	system("cls");
}

//清空操作---清空通讯录的本质就是其link_book的属性now_size的大小为0那自己令这个属性的值等于0，即相当于清空通讯录
void Clear(link_book* one) {
	one->now_size = 0;
	//清空当前屏幕
	system("pause");
	system("cls");

}

int main() {

	//
	// 初始化通讯录变量并给当前通讯录变量赋初值
	link_book one;
	one.now_size = 0;

	//use function--printf Menu_Space

	
//功能描述：退出通讯录系统

//思路：根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建 
//当用户选择0时候，执行退出，选择其他先不做操作，也不会退出程序

while (true) {
	showMenu();
	int select = 0;
	cin >> select;
	switch (select) {

		//	case 1:add(one);  1,添加联系人   自己写的错误1，值传递不修改实际的参数，
		//									让实参改变即应该使用地址传递
		// 	//修改代码为
	case 1:add(&one);
		break;
	case 2: ShowPerson(&one);//2,显示联系人
		break;
	case 3:DeletePerson(&one);//3,删除联系人
		break;
	case 4:Find(&one);// 4,查找联系人
		break;
	case 5:Modify(&one);// 5,修改联系人
		break;
	case 6:
		Clear(&one);
		//6,清空联系人
		break;
	case 0:// 0,退出通讯录
		cout << "欢迎下次使用" << endl;
		system("pause");
		return 0;
		break;

	}
};

system("pause");
return 0;
}


//