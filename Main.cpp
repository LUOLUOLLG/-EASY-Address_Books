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
		cout << "*********ͨѶ����ϵͳ**********" << endl;
		cout << "1.�����ϵ��" << endl;
		cout << "2.��ʾ��ϵ��" << endl;
		cout << "3.ɾ����ϵ��" << endl;
		cout << "4.������ϵ��" << endl;
		cout << "5.�޸���ϵ��" << endl;
		cout << "6.�����ϵ��" << endl;
		cout << "7.�˳�" << endl;
		int selectNumber;
		cout << "��ѡ��1-7����" << endl;
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
			cout << "************ɾ����ϵ��************" << endl;
			DeleteInfo(peo);
			break;
		case 4:
			cout << "************Ѱ����ϵ��************" << endl;
			SearchInfo(peo);
			break;
		case 5:
			cout << "************�޸���ϵ��************" << endl;
			ChangeInfo(peo);
			break;
		case 6:
			cout << "************�����ϵ��***********" << endl;
			EmptyInfo(peo);
			break;
		case 7:
			Quit();
			break;
		default:
			cout << "*********��������ȷѡ�***********" << endl;
			break;
		}
	}
}
void Quit() {
	cout << "ȷ���˳�(Y/N)��" << endl;
	char ConfirmN;
	cin >> ConfirmN;
	switch (ConfirmN)
	{
	case 'Y':
		cout << "���Ѿ��ɹ��˳���" << endl;
		exit(0);
		break;
	case'N':
		MenuInfo();
		break;
	default:
		cout << "��������ȷѡ��!" << endl;
		cout << endl;
		MenuInfo();
		break;
	}
}
