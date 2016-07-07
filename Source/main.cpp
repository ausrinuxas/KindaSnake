#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <conio.h>

#include "Board.h"
#include "utils.h"

using namespace std;

int main()
{
    Board panel;
	int userInput = 0;

	panel.set_start_elem(5,5);
	while (userInput != 27){
		panel.handle_input(userInput);
		panel.print();
		panel.print_score();
		if(panel.is_complete()) break;
		userInput = _getch();
		system("cls");
	};

	cout <<"GAME OVER"<< endl;
	panel.print_score();

	cin.ignore();

   return 0;
}
