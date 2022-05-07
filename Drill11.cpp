#include "std_lib_facilities.h"

int main()
try {
    int birth_year = 2002;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 19 << '\n';

    cout << '|' << setw(10) << "Arron" << '|' << setw(8) << "Pirku"
         << '|' << setw(24) << "arronpirku@gmail.com"
         << '|' << setw(12) << "+36306537520" << "|\n"

         << '|' << setw(10) << "Armond" << '|' << setw(8) << "Pirku"
         << '|' << setw(24) << "arpirku@gmail.com"
         << '|' << setw(12) << "+36302594061" << "|\n"

         << '|' << setw(10) << "Drenusha" << '|' << setw(8) << "Pirku"
         << '|' << setw(24) << "drpirku@gmail.com"
         << '|' << setw(12) << "+36305012459" << "|\n"

         << '|' << setw(10)<< "Art" << '|' << setw(8) << "Sharani"
         << '|' << setw(24) << "artsharani@gmail.com"
         << '|' << setw(12) << "+36301925494" << "|\n"

         << '|' << setw(10) << "Shkelqim" << '|' << setw(8) << "Hyseni"
         << '|' << setw(24) << "shkelqah12@gmail.com"
         << '|' << setw(12) << "+36306537520" << "|\n"

         << '|' << setw(10) << "Amaar" << '|' << setw(8) << "Pirku"
         << '|' << setw(24) << "amaarpirku@gmail.com"
         << '|' << setw(12) << "+36304103785" << "|\n";
        int a;
        int b;
        int c;
        int d;
        cin >> a >> hex >> b >> oct >> c >> d;
        cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

        cout << 1234567.89 << "\t(general)\n" << fixed
         << 1234567.89 << "\t(fixed)\n" << scientific
         << 1234567.89 << "\t(scientific)\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}
