#include"AddPeopleInfo.h"

int  ShowInfo(PeopleInfo p[], int count) {
	if (count == 0) {
		cout << "*********ͨѶ¼Ϊ��**********" << endl;
	}
	else {
		cout << "ȫ����Ϣ���£�" << endl;
		for (int i = 0; i < count; i++) {
			cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
		}
	}
	return 0;
}