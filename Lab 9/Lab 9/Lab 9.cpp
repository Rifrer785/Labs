#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <Windows.h>
#include <fstream>

using namespace std;

void MainMenu() {
    cout << "      МЕНЮ\n"
        << "(1) Создание\n"
        << "(2) Просмотр\n"
        << "(3) Коррекция\n"
        << "(4) Задание\n"
        << "(5) Запись в файл\n"
        << "(6) Считать с файла\n";
}
struct Student {
    char F[30], I[30], O[30], BD[20];  //ФИО, дата рождения
    double sb;     //средний балл
    int GR, fiz, him, mat, inf; //номер группы, физика, химия, математика, информатика
};
int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream start;
    ifstream end;
    int len = 1, chose, m;
    const int n = 10;
    int c[n];
    Student mass[n], rez[n];
    while (1)
    {
        system("cls");
        MainMenu();
        cin >> chose;
        cout << endl;
        switch (chose)
        {
        case 1:
            system("cls");
            cout << "\nФамилия: ";
            cin >> mass[len].F; cout << "\nИмя: ";
            cin >> mass[len].I; cout << "\nОтчество: ";
            cin >> mass[len].O; cout << "\nДата рождения: ";
            cin >> mass[len].BD; cout << "\nНомер группы: ";
            cin >> mass[len].GR; cout << "\nОценка по физике: ";
            cin >> mass[len].fiz; cout << "\nОценка по химии ";
            cin >> mass[len].him; cout << "\nОценка по математике ";
            cin >> mass[len].mat; cout << "\nОценка по информатике ";
            cin >> mass[len].inf;
            cout << endl;
            len++;
            break;
        case 2:
            system("cls");
            printf("%-2s%-36s%-20s%-20s%-10s%-10s%-15s%-15s%s\n", "№:", "ФИО:", "Дата рождения:", "Номер группы:", "Физика:", "Химия:", "Математика:", "Информатика:", "Ср. балл:");
            for (int i = 1; i < len; i++)
            {
                c[i] = i;
                double SB = (mass[i].fiz + mass[i].him + mass[i].mat + mass[i].inf) / 4.;
                cout << c[i] << "."; printf("%-15s%-10s%-15s%-22s%-19d%-11d%-11d%-15d%-15d%.2lf\n", mass[i].F, mass[i].I, mass[i].O, mass[i].BD, mass[i].GR, mass[i].fiz, mass[i].him, mass[i].mat, mass[i].inf, SB);
            }
            system("pause");
            break;
        case 3:
            cout << "Выберите ученика из списка: ";
            int l; cin >> l; cout << "\nФамилия: ";
            cin >> mass[l].F; cout << "\nИмя: ";
            cin >> mass[l].I; cout << "\nОтчество: ";
            cin >> mass[l].O; cout << "\nДата рождения: ";
            cin >> mass[l].BD; cout << "\nНомер группы: ";
            cin >> mass[l].GR; cout << "\nОценка по физике: ";
            cin >> mass[l].fiz; cout << "\nОценка по химии ";
            cin >> mass[l].him; cout << "\nОценка по математике ";
            cin >> mass[l].mat; cout << "\nОценка по информатике ";
            cin >> mass[l].inf;
            cout << endl;
            break;
        case 4:
            int gr;
            cout << "Выберите группу: ";
            cin >> gr;
            m = 0;
            for (int i = 1; i < len; i++)
            {
                double SB = (mass[i].fiz + mass[i].him + mass[i].mat + mass[i].inf) / 4.;
                if (mass[i].GR == gr && SB > 8)
                {
                    m++;
                    strcpy(mass[m].F, mass[i].F); strcpy(mass[m].I, mass[i].I); strcpy(mass[m].O, mass[i].O); strcpy(mass[m].BD, mass[i].BD); mass[m].GR = mass[i].GR;
                    mass[m].fiz = mass[i].fiz; mass[m].him = mass[i].him; mass[m].mat = mass[i].mat; mass[m].inf = mass[i].inf;
                }
            }
            len = m + 1;
            break;
        case 5:
            start.open("start.txt");
            if (start.is_open(), std::ios::in | std::ios::out) {
                cout << "Файл открыт\n" << endl;
                for (int i = 1; i < len; i++) {
                    c[i] = i;
                    double SB = (mass[i].fiz + mass[i].him + mass[i].mat + mass[i].inf) / 4.;
                    if (i > 1)
                    {
                        start << endl;
                    }
                    start<< c[i]<< ". " << mass[i].F<< " " << mass[i].I << " " << mass[i].O << "\t" << mass[i].BD <<
                    "\t" << mass[i].GR << "\t" << mass[i].fiz << "\t" << mass[i].him << "\t" << mass[i].mat << "\t" << mass[i].inf << "\t" << SB;
                }
                start.close();
                system("pause");
            }
            else
            {
                cout << "Ошибка открытия файла\n" << endl;
                return -1;
            }
            break;
        case 6:
            end.open("start.txt");
            if (end.is_open()) {
                cout << "Файл открыт\n" << endl;
                int o = 0, c = 0;
                int SB = 0; len = 1;
                string endline = " ", dot = " ";
                while (!end.eof())
                {
                    o++; len++;
                    end >> c;
                    end >> dot;
                    end >> mass[o].F;
                    end >> mass[o].I;
                    end >> mass[o].O;
                    end >> mass[o].BD;
                    end >> mass[o].GR;
                    end >> mass[o].fiz;
                    end >> mass[o].him;
                    end >> mass[o].mat;
                    end >> mass[o].inf;
                    end >> endline;

                }
            }
            else
            {
                cout << "Ошибка открытия файла\n";
            }
            end.close();
            system("pause");
            break;
        default:
            break;
        }
    }
}