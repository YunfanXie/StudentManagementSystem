#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
//Name;Male||Famale;The birthday;The year got into school;The Class;Class ID;School ID;National ID;
int tail, getin, number = 0, location[100000], tt;
char in[30];
struct student
{
    char name[15], bir[15];
    char ge[10];
    char intoy[12], cla[3], clid[3], scid[25], naid[25];
    char record[50][50];
    int rsum;
} member[100000];
bool control(student x, student y)
{
    return strcmp(x.scid, y.scid) < 0;
}
int main()
{
    freopen("Cache//Record.txt", "r", stdin);
    scanf(" %d", &tt);
    for (int i = 1; i <= tt; i++)
    {
        scanf(" %d", &member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cin >> member[i].record[j];
    }
    while (1)
    {
        freopen("Cache//Cache.txt", "r", stdin);
        scanf(" %d", &tail);
        if (tail)
            break;
        MessageBox(NULL, TEXT("�������ݡ��밴�ո�ʽ¼�������ٳ��������У��¼��"), TEXT("����"), MB_ICONERROR | MB_OK);
        return 0;
    }
    for (int i = 1; i <= tail; i++)
    {
        cin >> member[i].name >> member[i].ge >> member[i].bir >> member[i].intoy >> member[i].cla >> member[i].clid >> member[i].scid >> member[i].naid;
    }
    freopen("CON", "r", stdin);
    cout << "������Ҫ���У�ڼ�¼��ѧ���Ĺؼ�����š�" << endl;
    cout << "1.����" << endl
         << "2.У��ID" << endl
         << "3.ѧ����" << endl;
    scanf(" %d", &getin);
    if (getin == 1)
    {
        cout << "������Ҫ���У�ڼ�¼��ѧ������" << endl;
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
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "����������ѧ��" << endl
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
            cout << "������Ҫ��Ӽ�¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    else if (getin == 2)
    {
        cout << "������Ҫ���У�ڼ�¼��ѧ����У��ID" << endl;
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
            cout << "��Ǹ������û�����������ҵ�����ˡ�" << endl;
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "��ӵ�и�У��ID��ѧ��" << endl
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
            cout << "������Ҫ��Ӽ�¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    else if (getin == 3)
    {
        cout << "������Ҫ���У�ڼ�¼��ѧ����ѧ����" << endl;
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
            cout << "��Ǹ������û�����������ҵ�����ˡ�" << endl;
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else if (number == 1)
        {
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[1]].rsum += 1;
            cin >> member[location[1]].record[member[location[1]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
        else
        {
            cout << "Ϊ���ҵ�" << number << "��ӵ�и�ѧ���ŵ�ѧ��" << endl
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
            cout << "������Ҫ��Ӽ�¼��ѧ�������" << endl;
            scanf(" %d", &getin);
            cout << "������Ҫ��ӵļ�¼" << endl;
            member[location[getin]].rsum += 1;
            cin >> member[location[getin]].record[member[location[getin]].rsum];
            cout << "�����ɣ�" << endl;
            freopen("Cache//Record.txt", "w", stdout);
            printf("%d\n", tt);
            for (int i = 1; i <= tt; i++)
            {
                printf("%d\n", member[i].rsum);
                for (int j = 1; j <= member[i].rsum; j++)
                    cout << member[i].record[j] << endl;
            }
            freopen("CON", "w", stdout);
            system("pause");
            return 0;
        }
    }
    freopen("Cache//Record.txt", "w", stdout);
    printf("%d\n", tt);
    for (int i = 1; i <= tt; i++)
    {
        printf("%d\n", member[i].rsum);
        for (int j = 1; j <= member[i].rsum; j++)
            cout << member[i].record[j] << endl;
    }
    return 0;
}