#include"PeopleInfo.h"

void ChangeInfo(PeopleInfo p[]) {
	cout << "�������������Ϣ��ID: ";
	int searchID;
	cin >> searchID;
	bool foundID = false;
	for (int i = 0; i < label; i++) {
		if (searchID == p[i].id) {
			cout << "��Ϣ���£�" << endl;
			cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
			cout << "���������ѡ�" ;
			int selID;
			cin >> selID;
			cout << "1.����\t2.�绰" << endl;
		/*	int selID;
			cin >> selID;*/
			switch (selID) {
			case 1:
				cout << "�������µ�������" << endl;
				cin >> p[i].name;
				cout << "�¸��ĵ���Ϣ���£�" << endl;
				cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
				break;
			case 2:
				cout << "�������µĵ绰��" << endl;
				cin >> p[i].number;
				cout << " �¸��ĵ���Ϣ���£�" << endl;
				cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
				break;
			}
			foundID = true;
			break;
		}
	}
	if (!foundID) {
		cout << "**********���޴��ˣ�************" << endl;
	}
}
