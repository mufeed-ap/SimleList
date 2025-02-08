#include <iostream>
#include <vector>
using namespace std;

class List
{
private:
    /* data */
public:
    vector<string> list;
    string name;
    List();
    ~List();
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};
