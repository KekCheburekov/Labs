#include "iostream"
#include "string"
using namespace std;

class Warrior
{
private:
    string name;
    string last_name;
    string hight;
    int amount;

public:
    void set_name(string warrior_name)
    {
        name = warrior_name;
    }
    string get_name()
    {
        return name;
    }
    void set_last_name(string warrior_last_name)
    {
        last_name = warrior_last_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    void get_all()
    {
        cout << "My name is : "<< name << " "<< last_name << endl;
        cout << "Last name: "<< last_name << endl;
    }
};

class Archers: public Warrior
{
    private:
        string bow;
        int arrows;
    public:
        void set_bow(string bow_size)
        {
            bow = bow_size;
        }
        void set_arrows_amount(int arrows_amount)
        {
            arrows = arrows_amount;
        }
        string get_bow()
        {
            return bow;
        }
        int get_arrows()
        {
            return arrows;
        }
};

class Spearmen: public Warrior
{
    private:
        int spear;
        string shield;
    public:
        void set_spear_lenght(int spear_lenght)
        {
            spear = spear_lenght;
        }
        void set_shield_type(string shield_type)
        {
            shield = shield_type;
        }
        int get_spear_lenght()
        {
            return spear;
        }
        string get_shield_type()
        {
            return shield;
        }
};
