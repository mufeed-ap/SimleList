#include "include/list.h"

int main(int arg_count, char *args[])
{
    List simpleList;
    if(arg_count > 1)
    {
        simpleList.name = string(args[1]);
        simpleList.print_menu();
        simpleList.data.write(simpleList.list);
        simpleList.data.read();
    }
    else
    {
        cout << "Username not supplied exiting the program" << endl;
    }

    return 0;
}

