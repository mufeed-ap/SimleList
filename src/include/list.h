#include "database.h"

class List
{
private:
    /* data */
public:
    Database data;
    vector<vector<string>> mainList;
    vector<string> list;
    string name;
    List();
    ~List();
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void find_userList();
};
