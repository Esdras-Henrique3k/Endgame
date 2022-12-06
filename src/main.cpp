#include <fstream>
#include <windows.h>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "bboard.hpp"
#include "User.hpp"

using namespace std;

void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    char ch;

    system("COLOR 0F");

    while (1) {
        system("cls");
        cout << endl
             << endl;
        fstream f2;
        f2.open("sysmbol.txt", ios::in);

        while (f2) {
            f2.get(ch);
            cout << ch;
        }

        Sleep(10);
        system("COLOR 0");
        char a[] = "                \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb      ENDGAME BUS       \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb";
        int size;
        size = strlen(a);

        for (int i = 0; i < size; i++) {
            Sleep(10);
            cout << a[i];
        }


        cout << endl
             << endl;

        Sleep(15);
        cout << "\n                    \t\t1.CADASTRAR \n                    \t\t2.CLIENT LOGIN \n                    \t\t3.ADM OU DRIVER LOGIN \n"
             << "                    \t\t4.SAIR LOGIN";

        for (int i = 0; i < 1; i++) {

            int x = 16;
            int y = 10;

            for (y = 4; y < 13; y++) {

                gotoXY(x, y);
                cout << "\xdb";
                Sleep(50);
            }

            y = 13;

            for (x = 16; x < 63; x++) {
                gotoXY(x, y);
                cout << "\xdb";
                Sleep(2);
            }

            for (y = 4; y < 14; y++) {
                gotoXY(x, y);
                cout << "\xdb";
                Sleep(50);
            }
        }

        cout << endl;
        bool on = true;
        int ch;
        while(on){
        cout << "\n                Selecione uma opcao :";
		
        cin >> ch;
        switch (ch) {
            case 1: {
                string cargo, user, senha;
                cout << "\nDigite seu cargo (adm/driver/client):";
                cin >> cargo;
                cout << "\nnome de usuario:";
                cin >> user;
                cout << "\nsenha:";
                cin >> senha;
                bboard::get_instance()->cadastrar(cargo, user, senha);
                break;
            }
            case 2: {
                bboard::get_instance()->login();
                break;
            }
            case 3: {
                bboard::get_instance()->login();
                break;
            }
            case 4: {
                on=false;
                break;
            }
            default: {
                cout << "\nComando invalido, tente novamente!\n";
                break;
            }
        }}

        return 0;
    }
}
