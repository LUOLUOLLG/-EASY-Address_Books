#include"PeopleInfo.h"
void SearchInfo(PeopleInfo p[]) {
	cout << "请输入待搜索的ID: " ;
	int searchID;
	cin >> searchID;
	bool foundID = false;
	for (int i = 0; i < label; i++) {
		if  (searchID == p[i].id) {
			cout << "信息如下：" << endl;
			cout << "id:" << p[i].id << "\t姓名 :" << p[i].name << "\t电话:" << p[i].number << endl;
			foundID = true;
			break;
		}
	}
	if (!foundID) {
		cout << "**********查无此人！************" << endl;
	}
} 