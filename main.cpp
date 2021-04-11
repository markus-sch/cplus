#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Variablentypen
    int
    float
    bool true und false immer mit Kleinbuchstaben vorn
    string ""
    char 'x' '0' 's'  Einzelne Zeichen, kann auch ein special character sein.
    */
    int x = 2;
    int y = 4;
    int z;

    int n;

    // Konstanten
    // const int gravity = -9.8;

    string MeinName = "Markus Schlußmeier";

    cout << "Hello world from C++!" << endl <<endl;
    cout << MeinName << endl;
    cout << x << " " << y << endl;

    // Eingabe von Werten
    cin >> n;
    cout << "Die Eingabe war: " << n << endl;
    cout << "Eingabe fehlerhaft? " << cin.fail() << endl;       // Hat den Wert 1 bei fehlerhafter Eingabe
    cin.clear();                                                // Damit wird das Errorflag gelöscht, nicht (!) die fehlerhafte Eingabe.
    cin.ignore(1000, '\n');                                           // Anzahl Zeichen, die aus der fehlerhaften Eingabe entfernt werden.

    // cout << "z ist gleich: " << z << endl;                   // Da z nicht mit einem Wert versehen war, wird hier "irgendein" Wert angezeigt.

    // Eine einfache Berechnung
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;


    // Arithmetic operators
    /*
    +
    -
    /
    *
    ++
    --
    */
    int xx = 8;
    float yy = 9;
    float sumf = xx / yy;
    cout << "Ergebnis der Division: " << sumf << endl;                 // Wenn einer der beiden Operanden float ist, bekommt man als Ergebnis eine Zahl mit Komma (0,8...)

    x += 2;
    x -= 2;
    x *= 2;
    x /= 2;
    x++;                                                       // Addition von 1 (Kurzform für x += 1;)
    x--;                                                       // Subtraktion von 1 (Kurzform für x -= 1;)

    // Remainder of a division (Modulo)
    int m = 8;
    int p = 5;
    cout << "Das Ergebnis der Modulo-Operation lautet " << m % p << endl;



    return 0;
}

