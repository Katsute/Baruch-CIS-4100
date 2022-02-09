#include <iostream>

using namespace std;

int main() {
    cout
        << "Vaccination type:"       << endl
        << "[0] Unvaccinated"        << endl
        << "[1] Medical Exemption"   << endl
        << "[2] Pfizer First Dose"   << endl
        << "[3] Pfizer Second Dose"  << endl
        << "[4] Pfizer Booster"      << endl
        << "[5] Moderna First Dose"  << endl
        << "[6] Moderna Second Dose" << endl
        << "[7] Moderna Booster"     << endl
        << "[8] J&J First Dose"      << endl
        << "[9] J&J Booster"         << endl;

    int choice;
    cin >> choice;

    if(!cin.good() || choice < 0 || choice > 9){
        cout << "ERR: Invalid choice" << endl;
        return -1;
    }

    switch(choice){
        case 0:
        case 2:
        case 5:
            cout << "CUNY does not consider you to be fully vaccinated" << endl;
            break;
        case 1:
        case 4:
        case 7:
        case 9:
            cout << "CUNY considers you to be fully vaccinated" << endl;
            break;
        case 3:
        case 6:
        case 8:
            cout << "CUNY considers you to be fully vaccinated only if you are not yet eligible for a booster,\nif you are eligible for a booster you are not considered fully vaccinated";
            break;
    }

    return 0;
}