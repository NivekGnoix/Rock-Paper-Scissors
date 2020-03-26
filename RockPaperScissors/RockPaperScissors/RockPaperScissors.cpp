#include <iostream>
#include<cstdlib>

using namespace std;

int computerChoice()
{
	int com = rand() % 3 + 1;
	return(com);
}
int User()
{
	int user;
	cout << "Enter 1 for Rock/ Enter 2 for Paper / Enter 3 for Scissor:  ";
	cin >> user;
	return(user);
}
void display(int com, int user)
{
	cout << "Computer Choice: " << com << " " << "User choice: " << user;
}
void showWinner(int com, int user)
{
	int win;

	if (com == 1 && user == 2)
		win = 2;
	else if (com == 2 && user == 1)
		win = 1;
	else if (com == 1 && user == 3)
		win = 1;
	else if (com == 3 && user == 1)
		win = 2;
	else if (com == 2 && user == 3)
		win = 2;
	else if (com == 3 && user == 2)
		win = 1;
	else
		win = 0;
	if (win == 1)
		cout << "\nComputer wins!\n";
	else if (win == 2)
		cout << "\nYou won!\n";
	else
		cout << "\nIt's a tie!\n";
}
int main()
{
	int com, user;

	com = computerChoice(); 
	user = User(); 
	display(com, user); 
	showWinner(com, user); 

	system("pause");
		
}
