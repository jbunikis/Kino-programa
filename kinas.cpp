// kinas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    
    int a;
    string Filmai[10][10];
    string Darbuotojai[10];
    int Sales[10];
    int FilmSk = 4;
    int DarbSk = 0;
    int salSk = 0;
    Filmai[1][0] = "filmlas";
    Filmai[1][1] = "00:00";
    Filmai[1][2] = "00:01";
    Filmai[2][0] = "and";
    Filmai[2][1] = "01:00";
    Filmai[2][2] = "01:01";
    Filmai[3][0] = "tre";
    Filmai[3][1] = "02:00";
    Filmai[3][2] = "02:01";
    Filmai[4][0] = "tre4";
    Filmai[4][1] = "03:00";
    Filmai[4][2] = "03:01";

    while (1) {
        //Filmai[0][0] = "stop";

       
        cout << "\nKino teatras\n";
        cout << "Pasirinkite norima meniu\n";

        cout << "1. Filmu sarasas\n2. Darbuotojai \n3. Tvarkarastis\n";
        cin >> a;
        if (a == 1) {
            while (1) {
                cout << "\n";
                cout << "Filmu saraso meniu\n";
                cout << "1. Prideti filma\n2. atspauzdinti sarasa\n3. Istrinti filma\n0. Atgal\n";
                cin >> a;
                if (a == 1) {
                    cout << "Iveskite filmo pavadinima\n";
                    string pavadinimas;

                    cin >> pavadinimas;
                    Filmai[FilmSk+1][0] = pavadinimas;
                    cout << "Kiek seansu bus?\n";
                    int sk;
                    cin >> sk;
                    sk = sk++;
                    cout << "Iveskite seansu laikus  00:00 formatu\n";
                    for (int i = 1; i < sk; i++) {
                        cout << "\n";
                        string TempLaikas;
                        cin >> TempLaikas;
                        Filmai[FilmSk+1][i] = TempLaikas;
                    }
                    FilmSk++;
                    cout << "\nFilmas suvestas\n";
                }
                else if (a == 2) {

                    for (int i = 1; i <= FilmSk; i++) {
                        for (string x : Filmai[i]) {
                            if (x != "") {
                                cout << " " << x << "\n";
                            }
                        }
                    }
                }
                else if (a == 3) {
                    cout << "Kuri istrinti\n";
                    cin >> a;
                    if (a <= FilmSk) {
                        string temp3;
                        int temp = a + 1;

                        for (a; a <= FilmSk; a++) {
                            int temp2 = 0;
                            for (string x : Filmai[a]) {
                                if (x != "") {
                                    Filmai[a][temp2] = Filmai[temp][temp2];
                                    temp2++;
                                }
                                else {
                                    break;
                                }
                            }
                            temp++;
                        }
                        FilmSk--;
                    }
                    else {
                        cout << "Blogai pasirinkta filmo numers\n";
                    }
                }
                else if (a == 0) {
                    break;
                }
                else cout << "pasirinkimas neagzistuoja. Pakartokite pasirinkima\n";
            }
        }

        else if (a == 2) {


        }
        else if (a == 3) {

        }
        else if (a == 0) {
            break;
        }
        else cout << "pasirinkimas neagzistuoja. Pakartokite pasirinkima\n";
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

