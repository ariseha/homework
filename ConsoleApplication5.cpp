#include<iostream>
using namespace std;
int main() {
    int GodRodjenja, Starost, Mjeseci;
    int TrenutnaGodina;
    int Mjesec;
    cout << "Koje ste godine rodjeni? " << endl;
    cin >> GodRodjenja;
    cout << "Koja je trenutna godina? " << endl;
    cin >> TrenutnaGodina;
    Starost = TrenutnaGodina - GodRodjenja;
    Mjeseci = Starost * Mjesec;
    cout << "Trenutno imate " << Starost << endl;
    cout << ",a to je pretvoreno u mjesece " << Mjeseci << " (mjeseci)" << endl;
    return 0;
}

