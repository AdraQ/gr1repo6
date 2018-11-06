#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj wielkosc tablicy ";
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++) {
        cout << "Podaj " << i << " element tablicy: ";
        cin >> tab[i];
    }
    int wybor;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. najmniejszy" << endl;
        cout << "2. najwiekszy" << endl;
        cout << "3. suma" << endl;
        cout << "4. srednia" << endl;
        cout << "5. wyszukiwanie" << endl;
        cout << "6. odwracanie" << endl;
        cin >> wybor;
        if(wybor == 1) {
            //
        } else if(wybor == 2) {
            //
        } else if(wybor == 3) {
            //
        } else if(wybor == 4) {
            //
        } else if(wybor == 5) {
            //
        } else if(wybor == 6) {
            //
        }
    } while(wybor != 0);
    return 0;
}

