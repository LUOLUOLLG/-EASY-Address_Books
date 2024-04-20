#include"PeopleInfo.h"

void ChangeInfo(PeopleInfo p[]) {
	cout << "请输入待更改信息的ID: ";
	int searchID;
	cin >> searchID;
	bool foundID = false;
	for (int i = 0; i < label; i++) {
		if (searchID == p[i].id) {
			cout << "信息如下：" << endl;
			cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
			cout << "请输入更改选项：" ;
			int selID;
			cin >> selID;
			cout << "1.姓名\t2.电话" << endl;
		/*	int selID;
			cin >> selID;*/
			switch (selID) {
			case 1:
				cout << "请输入新的姓名：" << endl;
				cin >> p[i].name;
				cout << "新更改的信息如下：" << endl;
				cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
				break;
			case 2:
				cout << "请输入新的电话：" << endl;
				cin >> p[i].number;
				cout << " 新更改的信息如下：" << endl;
				cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
				break;
			}
			foundID = true;
			break;
		}
	}
	if (!foundID) {
		cout << "**********查无此人！************" << endl;
	}
}
