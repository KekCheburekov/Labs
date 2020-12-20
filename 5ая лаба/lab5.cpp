#include "iostream"
#include "string"
#include "warrior.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int amount_spearmen;
    int amount_archers;
    string name;
    string last_name;
    string bow;
    int arrows;
    int spear;
    string shield;
    int option;
    string soldier;
    int ammo = 0;

    cout << "Enter the amount of whole army: ";
    cin >> n;
    cout << "How many of spearmen are there? ";
    cin >> amount_spearmen;
    amount_archers = n - amount_spearmen;
    cout << "Ok. Then you have " << amount_archers << " archers" << endl;
    Spearmen spears[amount_spearmen];
    Archers bows[amount_archers];
    for (int i = 0; i < amount_archers; i++)
    {
        cout << "Name: " ;
        cin >> name;
        cout << "Last name: ";
        cin >> last_name;
        cout << "Type of bow (long/short): ";
        cin >> bow;
        cout << "Amount of arrows: ";
        cin >> arrows;

        bows[i].set_name(name);
        bows[i].set_last_name(last_name);
        bows[i].set_bow(bow);
        bows[i].set_arrows_amount(arrows);
    }
    for (int i = 0; i < amount_spearmen; i++)
    {
        cout << "Name: " ;
        cin >> name;
        cout << "Last name: ";
        cin >> last_name;
        cout << "Type of shield: ";
        cin >> shield;
        cout << "Spear length: ";
        cin >> spear;
        
        spears[i].set_name(name);
        spears[i].set_last_name(last_name);
        spears[i].set_shield_type(shield);
        spears[i].set_spear_lenght(spear);
    }
    cout << "What are your commands, my sir?\n 1 - 'Show me all my army'\n 2 - 'How much man do we have'\n 3 - 'Bring me this soldier(tells a last name)'\n 4 - 'Does every archer in my army have enouth arrows?'\n 5 - 'Enouth of you, commander. You can be free'\n";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Archers: " << endl;
        for (int i = 0; i < amount_archers; i++)
        {
            cout << bows[i].get_name() << endl;
        }
        cout << "Spears: " << endl;
        for (int i = 0; i < amount_spearmen; i++)
        {
            cout << spears[i].get_name() << endl;
        }
        break;
    case 2:
        cout << "We have " << n << ", your Majesty\n";
        cout << amount_spearmen << " brave spearmen and " << amount_archers << " most accurate bowmen in all Christendom, my sir\n";
        break;
    case 3:
        cout << "Who exactly you want to see, your majesty?\n";
        cin >> soldier;
        cout << "Squire! Bring me " << soldier << " now!\n";
        cout << "(soldier enters the tent and bends the knee) Your majesty! (tells about himself)\n";
        for (int i = 0; i < amount_archers; i++)
        {
            if (bows[i].get_last_name() == soldier)
            {
                bows[i].get_all();
                cout << "I still have "<< bows[i].get_arrows()<< " arrows and a "<< bows[i].get_bow()<<" bow, that my father made for me" << endl;
            }
            
        }
        for (int i = 0; i < amount_spearmen; i++)
        {
            if (spears[i].get_last_name() == soldier)
            {
                spears[i].get_all();
                cout << "I have "<< spears[i].get_spear_lenght()<< " spear and a "<< spears[i].get_shield_type()<<" shield, that my father made for me" << endl;
            }
            
        }
        break;
    case 4:
        for (int i = 0; i < amount_archers; i++)
        {
            if (bows[i].get_arrows() == 0)
            {
                ammo += 1;
            }
            
        }
        if (ammo == 0)
        {
            cout << "My lord, every archer in your glorious army is well equipped\n";
        }
        else
        {
            cout << "Some of our men have used all of their arrows. Good to see how hungry are our enemy for another hole in their bodies\n";
            cout << "Those " << ammo << " archers will be given enouth arrows and an additional cup of soup for excellent military service\n";
        }
        ammo = 0;
        break;
    case 5:
        cout << "Thank you, your makesty\n";
    default:
        break;
    }
}   