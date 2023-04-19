#include <iostream>
#include<cstdlib>

using namespace std;

void RockPaperScissors();
void replay();
int main()
{
	int RPS;

	cout << "Welcome to Rock, Paper, Scissors\n Wish to start?" << endl << "1  Rock, Paper & Scissors" << endl;
	cin >> RPS;

	switch (RPS)
	{

	case 1:
		RockPaperScissors();
		break;
	default:
		break;
	}
}



void RockPaperScissors()
{
	int counterPlayer = 0;
	int counterEnemy = 0;
	srand(time(NULL));
	int again = 0;
	do
	{
		do
		{
			system("cls");
			int enemy = (rand() % 3) + 1;
			int option = 0;

			cout << enemy << endl;
			if (enemy == 1)
			{
				cout << "   The Computer chose rock!" << endl;
			}
			else if (enemy == 2)
			{
				cout << "   The computer chose paper!" << endl;
			}
			else if (enemy == 3)
			{
				cout << "   The computer scissors!" << endl;
			}

			cout << endl;

			cout << "Player: " << counterPlayer << "      " << "CPU: " << counterEnemy << endl;
			cout << "Choose your option" << endl << "1 - rock" << endl << "2 - paper" << endl << "3 - scissors" << endl;
			cin >> option;

			switch (option)
			{
			case 1:
				if (option == 1 && enemy == 2)
				{
					cout << "You lose" << endl;
					counterEnemy += 1;
				}
				else if (option == enemy)
				{
					cout << "You tied" << endl;
				}
				else if (option == 1 && enemy == 3)
				{
					cout << "You win" << endl;
					counterPlayer += 1;
				}
				break;
			case 2:
				if (option == 2 && enemy == 3)
				{
					cout << "You lose" << endl;
					counterEnemy += 1;
				}
				else if (option == enemy)
				{
					cout << "You tied" << endl;
				}
				else if (option == 2 && enemy == 1)
				{
					cout << "You win" << endl;
					counterPlayer += 1;
				}
				break;
			case 3:
				if (option == 3 && enemy == 1)
				{
					cout << "You lose" << endl;
					counterEnemy += 1;
				}
				else if (option == enemy)
				{
					cout << "You tied" << endl;
				}
				else if (option == 3 && enemy == 2)
				{
					cout << "You win" << endl;
					counterPlayer += 1;
				}
				break;
			default:
				break;
			}
			system("pause");
		} while (counterEnemy < 2 && counterPlayer < 2);
		cout << endl << "           Final Score" << endl << "Player: " << counterPlayer << "      " << "CPU: " << counterEnemy << endl;
		system("pause");
		system("cls");

		replay();
	} while (again = !1);
}

void replay()
{
	int again = 0;

	cout << "Do you want to play again?" << endl << "0 - yes" << endl << "1 - no" << endl;
	cin >> again;
	if (again == 0)
	{
		return RockPaperScissors();
	}
	else if (again == 1)
	{
		cout << "Thank you for playing!" << endl;
		return;
	}
	else
	{
		if (again > 1 || again < 0)
		{
			cout << "Invalid option, the program will close" << endl;

		}
	}
}