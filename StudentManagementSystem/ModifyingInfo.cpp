#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
HWND hwnd = GetForegroundWindow();
int getin, tail, ii;
int location[100000];
int number = 0;
char in[30];
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
} member[100000];
void Refresh()
{
    freopen("Cache//Cache.txt", "w", stdout);
    printf("%d\n", tail);
    for (int i = 1; i <= tail; i++)
        cout << member[i].name << endl
             << member[i].ge << endl
             << member[i].bir << endl
             << member[i].intoy << endl
             << member[i].cla << endl
             << member[i].clid << endl
             << member[i].scid << endl
             << member[i].naid << endl;
    freopen("CON", "w", stdout);
}
void ModifyInfo(int loca, int pj)
{
    if (pj == 1)
    {
        cout << "�������޸ĺ������" << endl;
        cin >> member[loca].name;
    }
    if (pj == 2)
    {
        cout << "�������޸ĺ���ձ�" << endl;
        cin >> member[loca].ge;
    }
    if (pj == 3)
    {
        cout << "�������޸ĺ�ĳ�������" << endl;
        cin >> member[loca].bir;
    }
    if (pj == 4)
    {
        cout << "�������޸ĺ����ѧ���" << endl;
        cin >> member[loca].intoy;
    }
    if (pj == 5)
    {
        cout << "�������޸ĺ�İ༶" << endl;
        cin >> member[loca].cla;
    }
    if (pj == 6)
    {
        cout << "�������޸ĺ����λ��" << endl;
        cin >> member[loca].clid;
    }
    if (pj == 7)
    {
        cout << "�������޸ĺ��У��ID" << endl;
        cin >> member[loca].scid;
    }
    if (pj == 8)
    {
        cout << "�������޸ĺ��ѧ����" << endl;
        cin >> member[loca].naid;
    }
    Refresh();
    cout << "�޸ĳɹ���" << endl;
}
int main()
{
    ShowWindow(hwnd, SW_MAXIMIZE);
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("�������ݡ��밴�ո�ʽ¼�������ٽ����޸ġ�"), TEXT("����"), MB_ICONERROR | MB_OK);
        return 0;
    }
    for (int i = 1; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
    }
    freopen("CON ", "r", stdin);
    cout << "������Ҫ�޸���Ϣ��ѧ������Ϣ�ؼ��ʵ���š�" << endl;
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
        cout << "������Ҫ�޸���Ϣ��ѧ��������" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ�����Ա�" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ���ĳ�������" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 4)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ������ѧ���" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 5)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ���İ༶" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 6)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ������λ��" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 7)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ����У��ID" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    else if (getin == 8)
    {
        cout << "������Ҫ�޸���Ϣ��ѧ����ѧ����" << endl;
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
        else if (number == 1)
        {
            cout << endl
                 << "1.������" << member[location[1]].name << endl
                 << "2.�Ա�" << member[location[1]].ge << endl
                 << "3.�������ڣ�" << member[location[1]].bir << endl
                 << "4.��ѧ��ݣ�" << member[location[1]].intoy << endl
                 << "5.��ţ�" << member[location[1]].cla << endl
                 << "6.��λ�ţ�" << member[location[1]].clid << endl
                 << "7.У��ID��" << member[location[1]].scid << endl
                 << "8.ѧ���ţ�" << member[location[1]].naid << endl
                 << endl;
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &getin);
            ModifyInfo(location[1], getin);
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
                     << "1.������" << member[location[j]].name << endl
                     << "2.�Ա�" << member[location[j]].ge << endl
                     << "3.�������ڣ�" << member[location[j]].bir << endl
                     << "4.��ѧ��ݣ�" << member[location[j]].intoy << endl
                     << "5.��ţ�" << member[location[j]].cla << endl
                     << "6.��λ�ţ�" << member[location[j]].clid << endl
                     << "7.У��ID��" << member[location[j]].scid << endl
                     << "8.ѧ���ţ�" << member[location[j]].naid << endl
                     << endl;
            }
            cout << "������Ҫ�޸���Ϣ��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ�޸ĵ����ݵ���š�" << endl;
            scanf(" %d", &ii);
            ModifyInfo(location[getin], ii);
            system("pause");
            return 0;
        }
    }
    return 0;
}