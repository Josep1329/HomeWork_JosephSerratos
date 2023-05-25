#include <cstdio>
#include <stdlib.h>
#include <iostream>

using namespace std;

void loop(char c[3][3]);

void Primera_Intro(char c[3][3]);

void Primera_Intro(char c[3][3]);

void tablero(char c[3][3]);

void Init_J1(char c[3][3]);

void Init_J2(char c[3][3]);

int ganador(char c[3][3]);

int
main() {

    char c[3][3];

    loop(c);

    return 0;

}

void loop(char c[3][3]) 
{


    int i, j;

    i = 0;

    Primera_Intro(c);

    tablero(c);

    do {

        system("clear");

        tablero(c);

        if (i % 2 == 0) {

            Init_J1(c);

        }
        else {

            Init_J2(c);

        }

        j = ganador(c);

        i++;

    } while (i < 9);

    if (j == 0) {

        cout << "Ha ganado el jugador 1.";

    }
    else if (j == 1) {

        cout << "Ha ganado el juagdor 2.";

    }
    else {

        cout << "Empate.";

    }

}

void Primera_Intro(char c[3][3])
{

    char a;

    a = '1';

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            c[i][j] = a++;

        }
    }
}


void
Init_J1(char c[3][3]) {

    char a;

    int i, j, k;

    do {

        do {

            cout << "Juega jugador 1: "; 

            scanf_s(" %c", &a); 
        } while (a < '1' || a > '9');

        k = 0;

        switch (a) { 
        case '1': {

            i = 0;

            j = 0;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '2': {

            i = 0;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '3': {

            i = 0;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '4': {

            i = 1;

            j = 0;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '5': {

            i = 1;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "\"Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '6': {

            i = 1;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '7': {

            i = 2;

            j = 0;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '8': {

            i = 2;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '9': {

            i = 2;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        }

    } while (k == 1); 

    c[i][j] = 'X';

}


void Init_J2(char c[3][3])
{


    char a;

    int i, j, k;

    do {

        do {

            cout << ("Juega jugador 2: "); 
            scanf_s(" %c", &a);
        } while (a < '1' || a > '9');

        k = 0;

        switch (a) { 
        case '1': {

            i = 0;

            j = 0;

            if (c[i][j] == 'X' || c[i][j] == 'O') { 
                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '2': {

            i = 0;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '3': {

            i = 0;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '4': {

            i = 1;
            j = 0;
            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '5': {

            i = 1;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '6': {

            i = 1;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '7': {

            i = 2;

            j = 0;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '8': {

            i = 2;

            j = 1;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        case '9': {

            i = 2;

            j = 2;

            if (c[i][j] == 'X' || c[i][j] == 'O') {

                k = 1;

                cout << "Casilla ocupada. Intentalo de nuevo.";

            }

            break;

        }

        }

    } while (k == 1);

    c[i][j] = 'O';

}

int ganador(char c[3][3])
{
    return 0;
}


void tablero(char c[3][3])
{

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (j < 2) {

                printf(" %c ", c[i][j]);

            }
            else {

                printf(" %c ", c[i][j]);

            }

        }

        if (i < 2) {

            cout << "\n---------\n";

        }

    }

    cout << "\n\n";

}

