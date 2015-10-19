#include <iostream>

using namespace std;

int main()
{
    // Wyswietlenie i wybranie z menu.
    int menu;
    cout << "1) Kwadrat pelny." << endl;
    cout << "2) Kwadrat pusty." << endl;
    cout << "3) Trojkat pelny." << endl;
    cout << "4) Trojkat pusty." << endl;
    cout << "Wybierz pozycje z menu: ";
    cin >> menu;

    // Wprowadzenie wielkosci.
    int wielkosc;
    cout << "Podaj wielkosc: ";
    cin >> wielkosc;

    switch (menu) {
    case 1:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j < wielkosc; j++) {
                cout << "X";
            }
            cout << endl;
        }
        break;
    case 2:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j < wielkosc; j++) {
                if ((i == 0) || (i == wielkosc - 1)) {
                    cout << "X";
                } else {
                    if((j == 0) || (j == wielkosc - 1)) {
                        cout << "X";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        break;
    case 3:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "X";
            }
            cout << endl;
        }
        break;
    case 4:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j <= i; j++) {
                if ((i == 0) || (i == wielkosc - 1)) {
                    cout << "X";
                } else {
                    if((j == 0) || (j == i)) {
                        cout << "X";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        break;
    default:
        cout << "Zostala wybrana niepoprawna pozycja w menu.";
    }

    return 0;
}
