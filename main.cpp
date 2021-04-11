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
    cin.ignore(1000, '\n');                                     // Anzahl Zeichen, die aus der fehlerhaften Eingabe entfernt werden.

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
    cout << "Ergebnis der Division: " << sumf << endl;         // Wenn einer der beiden Operanden float ist, bekommt man als Ergebnis eine Zahl mit Komma (0,8...)

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

    // Comparison
    bool vgl = 1 < 2;
    cout << "Das Ergebnis des Vergleichs ist: " << vgl;

    // Logical operators
    /*
    !  not
    && and
    || or
    */

    // Trick für vereinfachte Programmierung. Die drei folgenden Befehle haben dieselbe Wirkung
    /*
    bool test = !(!false || !true);
    bool test = (!!false && !!true);
    bool test = (false && true);
    */

    // if then else
    if (x < 7)
    {
        cout << "x ist kleiner als 7!" << endl;

    }
    else if (x == 7)
    {
        cout << "x ist gleich 7!" << endl;
    }
    else
    {
        cout << "x ist nicht kleiner als 7!" << endl;
    }


    // Arrays
    int arr[5];                                          // Ein leeres Array
    int arr2[5] = {1, 2, 3, 4, 5}
    int arr3[] = {1, 2, 3, 4}                            // C++ erkennt die Größe es Arrays selbst
    arr3[0] = 10;

    cout << arr[0];                                      // Ausgabe des ersten Elements des Arrays



    {1, 2, 3}







    return 0;
}

