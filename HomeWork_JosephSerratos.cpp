#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int resultado = 0;
    char n[2];
    int m;
    int t;
    int s;
    int max;
    int min;
    int num;

    cout << "escriba un numero" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "el numero es negativo" << endl;
    }
    else {
        if (a > 0)
        {
            cout << "el numero es positivo" << endl;
        }
        else
        {
            if (a == 0)
            {
                cout << "el numero es igual 0" << endl;
            }
        }
    }

    cout << "escribe un numero de dos digitos" << endl;
    cin >> b;
    while (b != 0) {
        c = b % 10;
        b /= 10;
        resultado += c;
    }
    cout << "La suma de los digitos es: " << resultado << endl;
    cout << "escribe un numero de dos digitos" << endl;
    cin >> n;
    if (((n[0] % 2) == 0))
    {
        cout << "el digito que es par es " << n[0] << endl;
    }
    else {
        if (((n[1] % 2) == 0))
        {
            cout << "el digito que es par es " << n[1] << endl;
        }
        else {
            if (((n[0] % 2) == 0) && ((n[1] % 2) == 0))
            {
                cout << "los dos digitos son par " << n[0] << n[1] << endl;
            }
            else {
                cout << "ninguno es par" << endl;
            }
        }
    }


    cout << "escribe tres numeros" << endl;
    cin >> m;
    cin >> t;
    cin >> s;
    if (m > t && m > s)
    {
        cout << "el numero mayor es " << m << endl;
    }
    else {
        if (t > m && t > s)
        {
            cout << "el numero mayor es " << t << endl;
        }
        else {
            cout << "el numero mayor es " << s << endl;
        }
    }

    cout << "escribe el rango mayor y rango menor" << endl;
    cin >> max;
    cin >> min;
    for (num = min; num <= max; num++)

        if (num % 2 == 0)
            cout << "los numeros pares son " << num << endl;
    return 0;
}