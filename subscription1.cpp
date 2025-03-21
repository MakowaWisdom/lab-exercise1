#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int daysUntilExpiration;
    srand((unsigned)time ( NULL));
    daysUntilExpiration = (0 + rand() % (11 - 0 + 1)) ;
    if ( daysUntilExpiration == 10) {
        cout << "Your subscription wil expire soon. Renew now!\n";
    }
    else if (daysUntilExpiration <= 5 & daysUntilExpiration > 1) {
        cout << "Your subscription expires in " << daysUntilExpiration<< " days" << endl;
        cout << "Renew now and save 10%!\n";
    }
    else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!\n";
        cout << "Renew now and save 20%!\n";
    }
    else if (daysUntilExpiration == 0) {
        cout << "Your subsciption has expired.\n";
    }
    else if (daysUntilExpiration > 10) {
        cout << "You have an active subscription.\n";
    }


    return 0;
}
