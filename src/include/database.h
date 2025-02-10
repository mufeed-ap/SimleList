#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Database
{
private:
public:

    vector<vector<string>> mainList;
    string name;

    Database();
    ~Database();
    vector<vector<string>> read();
    void write(vector<vector<string>> mainList);
};


