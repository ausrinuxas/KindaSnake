#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string line;

    vector<string> map; //[ ]

    int col(string in);
    int row=0, colm=-1;
    ifstream myfile ("map.txt");
    if (myfile.is_open())
    {
      while ( getline (myfile,line) )
      {
        if(colm == -1)
        {
          colm = 0;
          for (unsigned int i = 0;i < line.size(); i++)
          {
            if (line[i] != ' ')
            {
              ++colm;
            }
          }
        }
        map.push_back(line);
        cout << line << '\n';
        ++row;

      }
      myfile.close();
    }

    else cout << "Unable to open file";
    cout << "eilutes: " << row << "   stulpeliai: " << colm << endl;
   return 0;
}
