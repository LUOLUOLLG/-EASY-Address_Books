#include"PeopleInfo.h"
void SearchInfo(PeopleInfo p[]) {
	cout << "�������������ID: " ;
	int searchID;
	cin >> searchID;
	bool foundID = false;
	for (int i = 0; i < label; i++) {
		if  (searchID == p[i].id) {
			cout << "��Ϣ���£�" << endl;
			cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
			foundID = true;
			break;
		}
	}
	if (!foundID) {
		cout << "**********���޴��ˣ�************" << endl;
	}
} 