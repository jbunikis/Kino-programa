// kinas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    
    int a;
    string Filmai[10][10];
    string Darbuotojai[10][3];
    int Sales[10];
    int FilmSk = 0;
    int DarbSk = 0;
    string tempTekstas;
    while (1) {
               
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
                    getline(cin >> ws, tempTekstas);
                    Filmai[FilmSk+1][0] = tempTekstas;
                    cout << "Kiek seansu bus?\n";
                    int sk;
                    cin >> sk;
                    sk = sk * 2;
                    
                    for (int i = 1; i < sk; i++) {
                        cout << "\n";
                        cout << "Iveskite seansu laikus  00:00 formatu\n";
                        
                        
                        getline(cin >> ws, tempTekstas);
                        Filmai[FilmSk+1][i] = tempTekstas;
                        while (1) {

                            cout << "iveskite sales numeri\n";
                            getline(cin >> ws, tempTekstas);
                            if (tempTekstas == "1" || tempTekstas == "2" || tempTekstas == "3" || tempTekstas == "4" || tempTekstas == "5" || tempTekstas == "6" || tempTekstas == "7" || tempTekstas == "8" || tempTekstas == "9") {
                                i++;
                                tempTekstas = "sales numeris: " + tempTekstas + "   ";
                                Filmai[FilmSk + 1][i] = tempTekstas;
                                break;
                            }
                            cout << "blogai pasirinkta sale\n";
                        }
                    }
                    FilmSk++;
                    cout << "\nFilmas suvestas\n";
                }
                else if (a == 2) {

                    for (int i = 1; i <= FilmSk; i++) {
                        for (string x : Filmai[i]) {
                            if (x != "") {
                                cout << " " << x;
                            }
                        }
                        cout << "\n";
                    }
                }
                else if (a == 3) {
                    cout << "Kuri istrinti\n";
                    cin >> a;
                    if (a <= FilmSk) {
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
            while (1) {
                cout << "\n";
                cout << "Darbuotoju meniu\n";
                cout << "1. Prideti darbuotoja\n2. Atspauzdinti darbuotoju sarasa\n3. Atleisti darbuotoja\n0. Atgal\n";
                cin >> a;
                if (a == 1) {
                    int tempsk = 0;
                    cout << "Iveskite darbuotojo varda\n";
                    getline(cin >> ws, tempTekstas);
                    Darbuotojai[DarbSk+ 1][tempsk] = tempTekstas;
                    tempsk++;
                    cout << "Kokios darbuotojo pareigos?\n";
                    getline(cin >> ws, tempTekstas);
                    Darbuotojai[DarbSk + 1][tempsk] = tempTekstas;
                    tempsk++;
                    cout << "Kokia darbuotojo alga?\n";
                    getline(cin >> ws, tempTekstas);
                    Darbuotojai[DarbSk + 1][tempsk] = tempTekstas;
                    DarbSk++;
                    cout << "\nDarbuotojas ivestas\n";
                }
                else if (a == 2){
                    for (int i = 1; i <= DarbSk; i++) {
                        for (string x : Darbuotojai[i]) {
                            if (x != "") {
                                cout  << x << " ";
                            }
                        }
                        cout << "\n";
                    }
                
                }
                else if (a == 3) {
                    cout << "kuri Darbuotoja istrinti?\n";

                    cout << "Kuri istrinti\n";
                    cin >> a;
                    if (a <= DarbSk) {
                        int temp = a + 1;

                        for (a; a <= DarbSk; a++) {
                            int temp2 = 0;
                            for (string x : Darbuotojai[a]) {
                                if (x != "") {
                                    Darbuotojai[a][temp2] = Darbuotojai[temp][temp2];
                                    temp2++;
                                }
                                else {
                                    break;
                                }
                            }
                            temp++;
                        }
                        DarbSk--;
                    }
                    else {
                        cout << "darbuotojas neegzistuoja\n";
                    }

                }
                else if (a == 0) {
                    break;
                }
                else {
                    cout << " Blogas pasirinkimas\n";
                }
            
            }


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

