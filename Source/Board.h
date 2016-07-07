#ifndef Board_h
#define Board_h

#include <vector>
#include <iostream>
#include <string>
#include "utils.h"
using namespace std;
using namespace utilities;

class Board
{
public:

	Board();
	~Board();
	void print();
	char get_elem(int x, int y);
	void set_elem(int x, int y, char setTo);
	void handle_input(int userInput);
	void set_start_elem(int x, int y);
	bool is_complete();
	void print_score();

private:

	const char playerChar;
	vector<string> map;
	int row, col;
	int playerX, playerY;
	int score;
	void occupy();
};

#endif
