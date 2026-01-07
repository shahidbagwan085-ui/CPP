#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, string> addressBook;
    string name, address;
    int i;

    cout << "Enter 5 Address Book Entries\n";

    for (i = 0; i < 5; i++)
    {
        cout << "\nEntry " << i + 1 << endl;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Address: ";
        cin >> address;

        addressBook[name] = address;
    }

    cout << "\n----- Address Book -----\n";

    map<string, string>::iterator it;
    for (it = addressBook.begin(); it != addressBook.end(); it++)
    {
        cout << "Name: " << it->first
             << " | Address: " << it->second << endl;
    }

    cout << "\nEnter name to delete address: ";
    cin >> name;

    if (addressBook.erase(name))
        cout << "Record deleted successfully.\n";
    else
        cout << "Name not found.\n";

    cout << "\n----- Address Book After Deletion -----\n";
    for (it = addressBook.begin(); it != addressBook.end(); it++)
    {
        cout << "Name: " << it->first
             << " | Address: " << it->second << endl;
    }

    return 0;
}

