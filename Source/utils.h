#ifndef _utils
#define _utils

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

namespace utilities{

	vector<string> read_board(string file_name);

	void print_array(const vector<string> &pr_arr);

};

#endif
