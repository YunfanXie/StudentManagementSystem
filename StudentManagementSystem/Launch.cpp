#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int getin;
char in[10];
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int main()
{
    while (1)
    {
        cout << "��ӭ����ѧ������ϵͳ��" << endl
             << "������Ҫ���еĲ�������š� " << endl;
        cout << "1.����" << endl
             << "2.ɾ��" << endl
             << "3.�޸�" << endl
             << "4.����" << endl;
        scanf(" %d", &getin);
        if (getin == 1)
        {
            system("start DataSearchTool.exe");
            system("cls");
        }
        else if (getin == 4)
        {
            cout << "�밴�ո�ʽ��StudentManagementSystem/Data/InPut.txt���������,Ȼ�����롰yes����" << endl;
            while (1)
            {
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                    break;
            }
            system("start GetInfo.exe");
            system("cls");
        }
    }
    return 0;
}