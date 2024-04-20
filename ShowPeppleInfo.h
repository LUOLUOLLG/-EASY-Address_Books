#include"AddPeopleInfo.h"

int  ShowInfo(PeopleInfo p[], int count) {
	if (count == 0) {
		cout << "*********通讯录为空**********" << endl;
	}
	else {
		cout << "全部信息如下：" << endl;
		for (int i = 0; i < count; i++) {
			cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
		}
	}
	return 0;
}