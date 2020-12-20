#include "string"
#include "iostream"
using namespace std;
class Person
{
private:
    string id;
    string hight;
    string name;
    string last_name;

public:
    void set_name(string person_name)
    {
        name = person_name;
    }
    string get_name()
    {
        return name;
    }
    void set_last_name(string person_last_name)
    {
        last_name = person_last_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_hight(string person_hight)
    {
        hight = person_hight;
    }
    string get_hight()
    {
        return hight;
    }
    void set_id(string person_id)
    {
        id = person_id;
    }
    string get_id()
    {
        return id;
    }
    void get_all()
    {
        cout << "Name: "<< name << endl;
        cout << "Last name: "<< last_name << endl;
        cout << "Hight: " << hight << endl;
    }
};

