#include <iostream>

using namespace std;

int opcja_dz_nauki, procent, i;
char opcja, odpowied;

int main()
{
    procent = 0;
    i = 0;

    cout << "************************" << endl;
    cout << "MENU PROGRAMU - TEST WYBORU" << endl;
    cout << "1. BIOLOGIA" << endl;
    cout << "2. GEOGREAFIA" << endl;
    cout << "3. INFORMATIKA" << endl;
    cout << "************************" << endl;
    cout << "\nWprowadz numer testu: " << endl;

    cin >> opcja_dz_nauki;

    switch (opcja_dz_nauki)
    {
    case 1: // BIOLOGIA
        cout << "\n1. Jaki jest glowny cel fotosyntezy w roslinach?" << endl;
        cout << "	a. Rozmnazanie" << endl;
        cout << "	b. Oddychanie" << endl;
        cout << "	c. Produkcja tlenu" << endl;
        cout << "	d. Produkcja glukozy" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'd')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n2. Ktory narzad czlowieka jest odpowiedzialny za pompowanie krwi po ciele?" << endl;
        cout << "	a. Watroba" << endl;
        cout << "	b. Pluca" << endl;
        cout << "	c. Serce" << endl;
        cout << "	d. Nerki" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'c')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n3. Co to jest DNA?" << endl;
        cout << "	a. Jedzenie" << endl;
        cout << "	b. Kwiat" << endl;
        cout << "	c. Molekula genetyczna" << endl;
        cout << "	d. Planeta" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'c')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n4. Jakie zwierze jest ssakiem i potrafi latac?" << endl;
        cout << "	a. Rekin" << endl;
        cout << "	b. Wiewiorka" << endl;
        cout << "	c. Nietoperz" << endl;
        cout << "	d. Krokodyl" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'c')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        if (procent >= 50)
        {
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nTEST ZALICZONY. Gratulacje!";
        }
        else
        {
            cout << "\nTEST NIEZALICZON";
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nPrawidlowe odpowiedzi: \n1 - d.\n2 - c.\n3 - c.\n4 - c.";
        }
        break;

    case 2: // GEOGRAFIA
        cout << "\nKtory kontynent jest najwiekszy pod wzgledem powierzchni?" << endl;
        cout << "	a. Europa" << endl;
        cout << "	b. Afryka" << endl;
        cout << "	c. Azja" << endl;
        cout << "	d. Ameryka Poludniowa" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'c')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n2. Ktory ocean znajduje sie na wschod od Afryki?" << endl;
        cout << "	a. Ocean Indyjski" << endl;
        cout << "	b. Ocean Atlantycki" << endl;
        cout << "	c. Ocean Arktyczny" << endl;
        cout << "	d. Ocean Spokojny" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'a')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n3. Jaka jest najwyższa góra na świecie?" << endl;
        cout << "	a. Mont Blanc" << endl;
        cout << "	b. Gora McKinley" << endl;
        cout << "	c. K2" << endl;
        cout << "	d. Mount Everest" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'd')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n4. Ktory kraj lezy na polwyspie Apeninskim?" << endl;
        cout << "	a. Francja" << endl;
        cout << "	b. Hiszpania" << endl;
        cout << "	c. Grecja" << endl;
        cout << "	d. Wlochy" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'd')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        if (procent >= 50)
        {
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nTEST ZALICZONY. Gratulacje!";
        }
        else
        {
            cout << "\nTEST NIEZALICZON";
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nPrawidlowe odpowiedzi: \n1 - c.\n2 - a.\n3 - d.\n4 - d.";
            break;
        }

    case 3: // INFORMATIKA
        cout << "\n1. Jezykiem programowania kompilowanym NIE jest:" << endl;
        cout << "	a. C" << endl;
        cout << "	b. C++" << endl;
        cout << "	c. Python" << endl;
        cout << "	d. Java" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'c')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n2. Co oznacza skrot IDE w kontekscie programowania?" << endl;
        cout << "	a. Integral Development Environment" << endl;
        cout << "	b. Integrated Design Environment" << endl;
        cout << "	c. Interactive Debugging Environment" << endl;
        cout << "	d. Integrated Development Environment" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'd')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n3. Ktory symbol jest uzywany do komentowania jednolinijkowych komentarzy w C++?" << endl;
        cout << "	a. #" << endl;
        cout << "	b. //" << endl;
        cout << "	c. /*" << endl;
        cout << "	d. --" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'b')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        cout << "\n4. W jakim jezyku programowania uzywa sie nawiasow klamrowych {} do oznaczenia blokow kodu" << endl;
        cout << "	a. C++" << endl;
        cout << "	b. Java" << endl;
        cout << "	c. Python" << endl;
        cout << "	d. HTML" << endl;
        cout << "\nWybierz odpowiedz: ";
        cin >> odpowied;

        if (odpowied == 'a')
        {
            procent += 25;
            i++;
        }
        else
            procent += 0;

        if (procent >= 50)
        {
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nTEST ZALICZONY. Gratulacje!";
        }
        else
        {
            cout << "\nTEST NIEZALICZON";
            cout << "\nZdobyles(as) " << i << " punkty z 4 mozliwych do zdobycia. Stanowi to " << procent << "%.";
            cout << "\nPrawidlowe odpowiedzi: \n1 - c.\n2 - d.\n3 - b.\n4 - a.";
            break;
        }

    default:
        cout << "Nieistniejacy numer testu";
        break;
    }

    return 0;
}
