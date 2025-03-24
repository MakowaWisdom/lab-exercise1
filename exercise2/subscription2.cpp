#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int daysUntilExpiration;
    srand((unsigned)time ( NULL));
    daysUntilExpiration = (0 + rand() % (11 - 0 + 1)) ;
    switch (daysUntilExpiration)
    {
    case 0:
        cout << "Your subsciption has expired.\n";   
        break; 
    case 1:
        cout << "Your subscription expires within a day!\n";
        cout << "Renew now and save 20%!\n";
        break;
    case 2:
        cout << "Your subscription expires in " << daysUntilExpiration<< " days" << endl;
        cout << "Renew now and save 10%!\n";
        break;
    case 3:
        cout << "Your subscription expires in " << daysUntilExpiration<< " days" << endl;
        cout << "Renew now and save 10%!\n"; 
        break; 
    case 4:
        cout << "Your subscription expires in " << daysUntilExpiration<< " days" << endl;
        cout << "Renew now and save 10%!\n"; 
        break;
    case 5:
        cout << "Your subscription expires in " << daysUntilExpiration<< " days" << endl;
        cout << "Renew now and save 10%!\n";
        break; 
    case 10:
        cout << "Your subscription wil expire soon. Renew now!\n";             
        break;
    default:
        cout << "You have an active subscription.\n";
        break;
    }
return 0;
}