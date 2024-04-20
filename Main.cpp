#include"DeletePeopleInfo.h"
#include"ShowPeppleInfo.h"
#include"SearchPeopleInfo.h" 
#include"ChangePeopleInfo.h"
#include"EmptyPeopleInfo.h"
#include"PeopleInfo.h"
void MenuInfo();
void Quit();
int main() {
	MenuInfo();
}

void MenuInfo() {
	PeopleInfo peo[100];
	while (true) {
		cout << "*********通讯管理系统**********" << endl;
		cout << "1.添加联系人" << endl;
		cout << "2.显示联系人" << endl;
		cout << "3.删除联系人" << endl;
		cout << "4.查找联系人" << endl;
		cout << "5.修改联系人" << endl;
		cout << "6.清空联系人" << endl;
		cout << "7.退出" << endl;
		int selectNumber;
		cout << "请选择（1-7）：" << endl;
		cin >> selectNumber;
		switch (selectNumber)
		{
		case 1:
			AddInfo(peo, 100);
			break;
		case 2:
			ShowInfo(peo,label);
			break;
		case 3:
			cout << "************删除联系人************" << endl;
			DeleteInfo(peo);
			break;
		case 4:
			cout << "************寻找联系人************" << endl;
			SearchInfo(peo);
			break;
		case 5:
			cout << "************修改联系人************" << endl;
			ChangeInfo(peo);
			break;
		case 6:
			cout << "************清空联系人***********" << endl;
			EmptyInfo(peo);
			break;
		case 7:
			Quit();
			break;
		default:
			cout << "*********请输入正确选项！***********" << endl;
			break;
		}
	}
}
void Quit() {
	cout << "确定退出(Y/N)？" << endl;
	char ConfirmN;
	cin >> ConfirmN;
	switch (ConfirmN)
	{
	case 'Y':
		cout << "你已经成功退出！" << endl;
		exit(0);
		break;
	case'N':
		MenuInfo();
		break;
	default:
		cout << "请输入正确选项!" << endl;
		cout << endl;
		MenuInfo();
		break;
	}
}
