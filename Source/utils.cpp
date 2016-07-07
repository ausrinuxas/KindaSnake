#include "utils.h"

vector<string> utilities::read_board(string file_name){

	string line;
	vector<string> map;
	ifstream my_file (file_name);
	
	if (my_file.is_open())
	{
		while ( getline (my_file,line) )
		{
			map.push_back(line);
		}
		my_file.close();
	}
	else cout << "Unable to open file";

	return map;
}

void utilities::print_array(const vector<string> &pr_arr){

	for (int i = 0; i<pr_arr.size(); i++){
		for (int j = 0; j<pr_arr[i].size(); j++){
			cout << pr_arr[i][j] << " ";
		}
		cout << endl;
	}
}