#include "iostream"
#include "person.h"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{   
    int n;
    cout << "Enter the ammount of people: ";
    cin >> n;
    Person people[n];
    string name;
    string last_name;
    string hight;
    string id;

    for (int i = 0; i < n; i++)
    {
        cout << "Name: " ;
        cin >> name;
        cout << "Last name: ";
        cin >> last_name;
        cout << "Hight: ";
        cin >> hight;
        cout << "ID in numbers: ";
        cin >> id;
        cout << endl;

        people[i].set_last_name(last_name);
        people[i].set_name(name);
        people[i].set_hight(hight);
        people[i].set_id(id);
    }
    
    int option;
    int option2;
    string ID;
    
    cout << "What do you want?\n All names - press '1'\n Everything about a person - press '2'\n Change peson's info - press '3' " << endl;
    cout << "Option number: ";
    cin >> option;
    switch (option)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            cout  << people[i].get_name() << " " << people[i].get_last_name() << endl;
        }
    case 2:
        cout << "Enter the ID of a person you want to know about: ";
        cin >> ID;
        for (int i = 0; i < n; i++)
        {
            if (people[i].get_id() == ID)
            {
                people[i].get_all();
            }
            
        }
          
        break;
    case 3:
        cout << "Enter the ID of a person, whose info you want to change: ";
        cin >> ID;
        for (int i = 0; i < n; i++)
        {
            if (people[i].get_id() == ID)
            {
                cout << "What do you want to change?\n Name - 1\n Last Name - 2\n Hight - 3" << endl;
                cin >> option2;
                switch (option2)
                {
                case 1:
                    cout << "Change: \n";
                    cin >> name;
                    people[i].set_name(name);
                    break;
                case 2:
                    cout << "Change: \n";
                    cin >> last_name;
                    people[i].set_last_name(last_name);
                    break;
                case 3:
                    cout << "Change: \n";
                    cin >> hight;
                    people[i].set_hight(hight);
                    break;
                default:
                    break;
                }
                people[i].get_all();
            }
            
        }
        
    default:
        break;
    }
    return 0;
}
