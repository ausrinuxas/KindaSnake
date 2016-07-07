#include "Board.h"

Board::Board() : playerChar('*'){
	map = read_board("map.txt");
	row = map.size();
	col = map[0].size();
	score = 1;
}
Board::~Board(){}

void Board::print(){
	print_array(map);
};

char Board::get_elem(int x, int y){
	if ( x!=0 && y!=0 ){
		--x;
		--y;
	}
	return map[y][x];
};

void Board::set_elem(int x, int y, char setTo){
	if ( x!=0 && y!=0 ){
		--x;
		--y;
	}
	map[y][x] = setTo;
};

void Board::set_start_elem(int x, int y){
	playerX = x;
	playerY = y;
	map[y][x] = playerChar;
};

void Board::handle_input(int userInput){
	if(userInput == 224 || userInput == 0) return;
	switch (userInput){
		case 80:{
			if (playerY < row-1)
				playerY++;
			break;
		}
		case 75:{
			if (playerX > 0)
				playerX--;
			break;
		}
		case 77:{
			if (playerX < col-1)
				playerX++;
			break;
		}
		case 72:{
			if (playerY > 0)
				playerY--;
			break;
		}
		default:{
			break;
		}
	}
	occupy();
};

void Board::occupy(){
	if (map[playerY][playerX] != playerChar){
		score++;
		map[playerY][playerX] = playerChar;
	}
	else{
		score--;
	}

};

bool Board::is_complete(){
	for ( int i = 0; i < row; i++ ){
		for ( int j = 0; j < col; j++ ){
			if (map[i][j] != playerChar)
				return false;
		}
	}
	return true;
};

void Board::print_score(){
	cout << "SCORE: " << score << endl;
};