#include<iostream>
using namespace std;
//Global variables
const int ROW = 3, COL = 3;
int row, col;
char arr[3][3];
//Funtions
int getIndx();
void print();
void setter();
void getZero();
void getEx();
void checkRow();
void checkCol();
void checkDiag();
void checkRevDiag();

int main()
{

	cout << "\n\n\t\t\t---->Developed BY ZAIN ALI<----\n\n";
	setter();
	print();

	getZero();
	print();

	for (int i = 0; i < 4; i++)
	{


		cout << "Player 1 has '0' \n\n";
		cout << "Player 2 has 'X' \n\n";

		//Player 1
		getEx();
		print();
		checkRow();
		checkCol();
		checkDiag();
		checkRevDiag();
		//player 2
		getZero();
		print();
		checkRow();
		checkCol();
		checkDiag();
		checkRevDiag();

		cout << "------------------------\n";
		if (i == 3) {
			cout << endl << "Match Tie.";
		}

	}

}
int getIndx()
{
	int r;
	cin >> r;
	while (r < 1 || r>3)
	{
		cout << "Enter value between 1 and 3";
		cin >> r;
	}
	return r;
}

void setter()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = '*';
		}
	}
}
void print()
{
	cout << "------------------------\n";

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << '\t'<<'|';
		}
		cout << endl<<"________________________\n";
	}
	cout << "------------------------\n";

}
void getZero()
{
	cout << "------------------------\n";

	do
	{
		cout << "Enter ROw no TO Inseert '0' :";
		row = getIndx();
		cout << "Enter col to Insert '0' : ";
		col = getIndx();
	} while (arr[row - 1][col - 1] == '0' || arr[row - 1][col - 1] == 'X');
	arr[row - 1][col - 1] = '0';
	cout << "------------------------\n";

}
void getEx()
{
	cout << "------------------------\n";

	do
	{
		cout << "Enter ROw no TO Inseert 'X' :";
		row = getIndx();
		cout << "Enter col to Insert 'X' : ";
		col = getIndx();
	} while (arr[row - 1][col - 1] == '0' || arr[row - 1][col - 1] == 'X');
	arr[row - 1][col - 1] = 'X';
	cout << "------------------------------\n";

}
void checkRow()
{
	long int tot = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			tot += arr[i][j];
		}
		if (tot == 144)
		{
			cout << "Player 1 wins\n";
			exit(0);
		}
		else if (tot == 264)
		{
			cout << "Player 2 wins \n";
			exit(0);
		}
		tot = 0;
	}
}
void checkCol()
{
	long int tot = 0;
	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			tot += arr[i][j];

		}
		if (tot == 144)
		{
			cout << "Player 1 wins\n";
			exit(0);
		}
		else if (tot == 264)
		{
			cout << "player 2 wins \n";
			exit(0);

		}
		tot = 0;
	}
}
void checkDiag()
{
	long int tot = 0;
	int i = 0;

	for (int j = 0; j < COL; j++)
	{
		tot += arr[i][j];
		i++;
	}
	if (tot == 144)
	{
		cout << "Player 1 wins\n";
		exit(0);
	}
	else if (tot == 264)
	{
		cout << "player 2 wins \n";
		exit(0);

	}

}
void checkRevDiag()
{
	long int tot = 0;
	int i = 0;

	for (int j = 2; j >= 0; j--)
	{
		tot += arr[i][j];
		i++;
	}
	if (tot == 144)
	{
		cout << "Player 1 wins\n";
		exit(0);
	}
	else if (tot == 264)
	{
		cout << "player 2 wins \n";
		exit(0);

	}
}