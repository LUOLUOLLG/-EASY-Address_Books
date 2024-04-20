#include"PeopleInfo.h"

void DeleteInfo(PeopleInfo p[]) {
	cout << "输入需要删除的ID：" << endl;
	int delID;
	cin >> delID;
	for (int i = 0; i < label; i++) {
		if (delID == p[i].id) {
			for (int j = i; j < label - 1; j++) {
				p[j].id = p[j + 1].id;
				p[j].name = p[j + 1].name;
				p[j].number = p[j + 1].number;
			}
			cout << "**************删除成功**************" << endl;
		}
		else if(delID>label){
			cout << "通讯录搜不到此ID信息" << endl;
		}
	}
	label--;
}
 

