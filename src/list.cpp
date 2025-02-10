#include "include/list.h"

List::List()
{

}
List::~List()
{

}

void List::print_menu()
{
    int choice;

    cout << "*******************" << endl;
    cout << "1. Print List\n";
    cout << "2. Add to list\n";
    cout << "3. Delete from list\n";
    cout << "4. Quit\n";
    cout << "Enter your choice and press enter.\n";

    cin >> choice;
    if(choice==1)
    {
        print_list();
    }
    else if(choice==2)
    {
        add_item();
    }
    else if(choice==3)
    {
        delete_item();
    }
    else if(choice==4)
    {
        return;
    }
    else
    {
        cout << "Sorry choice hasn't been implemented.\n ";
    }

}

void List::print_list()
{
    cout << "\n\n\n\n\n";
    cout << "****Printing list****\n";

    for( unsigned int list_index = 0; list_index < list.size();list_index++)
    {
        cout << list_index << " : " << list[list_index] << "\n";
    }

    cout << "\n\nM - Menu\n";
    char choice;
    cin >> choice;

    if( choice == 'm' || choice == 'M' )
    {
        print_menu();
    }
    else
    {
        cout << "Invalid responce .... Quitting  \n";
    }
}
void List::add_item()
{
    cout << "\n\n\n\n\n\n\n\n";
    cout << "*** Add item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Successfully added an item to the list \n\n\n\n";

    print_menu();

}
void List::delete_item()
{
    cout << "***Delete Item***\n";

    if(list.size())
    {
        for(unsigned int i=0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }


        int choice_index;
        cout << "Select an item index number to delete: \n";
        cin >> choice_index;
        list.erase(list.begin()+choice_index);
    }
    else
    {
        cout << "No item in the list to delete\n";
    }

    print_menu();
}

void List::find_userList()
{
    bool userFound = false;
    cout << "\n\n\n\n\n\n\n\n";
    cout << "*** find item "<< name << "***\n";

    for(unsigned int user_index =0 ; user_index<mainList.size();user_index++)
    {
        //cout << mainList[user_index][0] << "\n";
        if (mainList[user_index][0]==name)
        {
            cout<< "User has been found " << mainList[user_index][0] << "\n";
            list = mainList[user_index];
            userFound = true;
            break;
        }
        
    }

}