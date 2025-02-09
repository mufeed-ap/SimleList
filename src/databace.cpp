#include "include/database.h"

Database::Database()
{
}

Database::~Database()
{
}

void Database::read()
{
    string line;
    ifstream db;
    db.open("db/lists.sl");
    if(db.is_open())
    {
        while(getline(db,line,'\n'))
        {
            cout << line << "\n";
        }
    }
    else
    {
        cout << "Can not open file Reading";
    }

}

void Database::write(vector<string> list)
{
    ofstream db;
    db.open("db/lists.sl");
    if(db.is_open())
    {
        for( unsigned int list_index = 0; list_index < list.size();list_index++)
        {
            db << list[list_index] << "\n";
        }
    }
    else
    {
        cout << "Can not open file writing";
    }
    db.close();
}