#include"PeopleInfo.h"

void  AddInfo(PeopleInfo p[], int n) {
	bool isFlag = true;
	while(isFlag) {
		if (label < n) {
			cout << "************添加联系人中************" << endl;
			cout << "请输入id：" << endl;
			cin >> p[label].id;
			cout << "请输入姓名：" << endl;
			cin >> p[label].name;
			cout << "请输入电话：" << endl;
			cin >> p[label].number;
			cout << "************添加成功***********" << endl;
			cout << "新添加的信息如下：" << endl;
			cout << "id:" << p[label].id << "\t姓名 :" << p[label].name << "\t电话:" << p[label].number << endl;
			label++;
		}
		else {
			cout << "通讯里容量已经超出最大值！" << endl;
			break;
		}
		char choiceY;
		cout << "***************************"<<endl;
		cout << "是否继续添加（Y/N)" << endl;
		cin >> choiceY;
		if (choiceY != 'Y' && choiceY != 'y') {
			isFlag = false;
			break;
		}
	}
	cout << "全部信息如下：" << endl;
	for (int i = 0; i < label ; i++) {
		cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
	}
}
