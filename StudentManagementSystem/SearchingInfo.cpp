#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int getin, tail;
int location[100000];
int number = 0;
char in[30];
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
} member[100000];
HWND hwnd = GetForegroundWindow();
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("�������ݡ��밴�ո�ʽ¼�������ٽ��м�����"), TEXT("����"), MB_ICONERROR | MB_OK);
        return 0;
    }
    for (int i = 1; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
    }
    freopen("CON ", "r", stdin);
    cout << "������Ҫ������Ϣ�Ĺؼ��ʵ���š�" << endl;
    cout << "1.����" << endl
         << "2.�Ա�" << endl
         << "3.��������" << endl
         << "4.��ѧ���" << endl
         << "5.���" << endl
         << "6.��λ��" << endl
         << "7.У��ID" << endl
         << "8.ѧ����" << endl;
    scanf(" %d", &getin);
    freopen("CON", "r", stdin);
    if (getin == 1)
    {
        cout << "������Ҫ����������" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].name, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�����ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "������Ҫ�������Ա�" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].ge, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ����Ա���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "������Ҫ�����ĳ�������" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].bir, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�����������ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 4)
    {
        cout << "������Ҫ��������ѧ���" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].intoy, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�������ѧ���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 5)
    {
        cout << "������Ҫ�����İ༶" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].cla, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ��ð༶���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 6)
    {
        cout << "������Ҫ��������λ��" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].clid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�����λ�ŵ��ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "������Ҫ������У��ID" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].scid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�ӵ�и�У��ID���ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "������Ҫ������ѧ����" << endl;
        cin >> in;
        for (int i = 1; i <= tail; i++)
        {
            if (strcmp(member[i].naid, in) == 0)
            {
                number += 1;
                location[number] = i;
            }
        }
        if (number == 0)
        {
            cout << "��Ǹ������û�����������ҵ�ӵ�и�ѧ���ŵ��ˡ�" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "�����" << endl
                 << endl;
            for (int j = 1; j <= number; j++)
            {
                cout << "No." << j << endl
                     << "������" << member[location[j]].name << endl
                     << "�Ա�" << member[location[j]].ge << endl
                     << "�������ڣ�" << member[location[j]].bir << endl
                     << "��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "��ţ�" << member[location[j]].cla << endl
                     << "��λ�ţ�" << member[location[j]].clid << endl
                     << "У��ID��" << member[location[j]].scid << endl
                     << "ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            system("pause");
            return 0;
        }
    }
    return 0;
}