#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int getin;
char in[10];
HWND hwnd = GetForegroundWindow();
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        cout << "��ӭ����ѧ������ϵͳ��" << endl
             << "������Ҫ���еĲ�������š� " << endl;
        cout << "1.����ѧ����Ϣ" << endl
             << "2.ɾ��ѧ����Ϣ" << endl
             << "3.�޸�ѧ����Ϣ" << endl
             << "4.����ѧ����Ϣ" << endl
             << "5.������У��¼" << endl
             << "6.ɾ����У��¼" << endl
             << "7.�޸���У��¼" << endl
             << "8.������У��¼" << endl;
        scanf(" %d", &getin);
        if (getin == 1)
        {
            system("start SearchingInfo.exe");
            system("cls");
        }
        else if (getin == 2)
        {
            system("start DeletingInfo.exe");
            system("cls");
        }
        else if (getin == 3)
        {
        }
        else if (getin == 4)
        {
            cout << "�밴�ո�ʽ��StudentManagementSystem/Data/AddInPut.txt���������,Ȼ�����롰yes����" << endl;
            while (1)
            {
                cin >> in;
                if (in[0] == 'y' && in[1] == 'e' && in[2] == 's')
                    break;
            }
            system("start AddingInfo.exe");
            system("cls");
        }
        else if (getin == 5)
        {
            system("start SearchingRecords.exe");
            system("cls");
        }
        else if (getin == 6)
        {
            system("start DeletingRecords.exe");
            system("cls");
        }
        else if (getin == 7)
        {
        }
        else if (getin == 8)
        {
            system("start AddingRecords.exe");
            system("cls");
        }
    }
    return 0;
}