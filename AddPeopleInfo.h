#include"PeopleInfo.h"

void  AddInfo(PeopleInfo p[], int n) {
	bool isFlag = true;
	while(isFlag) {
		if (label < n) {
			cout << "************�����ϵ����************" << endl;
			cout << "������id��" << endl;
			cin >> p[label].id;
			cout << "������������" << endl;
			cin >> p[label].name;
			cout << "������绰��" << endl;
			cin >> p[label].number;
			cout << "************��ӳɹ�***********" << endl;
			cout << "����ӵ���Ϣ���£�" << endl;
			cout << "id:" << p[label].id << "\t���� :" << p[label].name << "\t�绰:" << p[label].number << endl;
			label++;
		}
		else {
			cout << "ͨѶ�������Ѿ��������ֵ��" << endl;
			break;
		}
		char choiceY;
		cout << "***************************"<<endl;
		cout << "�Ƿ������ӣ�Y/N)" << endl;
		cin >> choiceY;
		if (choiceY != 'Y' && choiceY != 'y') {
			isFlag = false;
			break;
		}
	}
	cout << "ȫ����Ϣ���£�" << endl;
	for (int i = 0; i < label ; i++) {
		cout << "id:" << p[i].id << "\t���� :" << p[i].name << "\t�绰:" << p[i].number << endl;
	}
}
