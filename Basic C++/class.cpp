#include <iostream>
#include <string>

using namespace std;

class employee
{
public:
    string name;
    int salary;
    int sp;

    employee(string name, int salary,int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name
             << " and his salary is " << this->salary << "$" << endl;
    }

    void getsecretPass()
    {
        cout<<"The secret password is "<< this->secretPassword;
    }
private:
    int secretPassword;


}; // <-- required semicolon

int main()
{
    employee first("Fahim", 500,45939);

    // first.name = "Fahim";
    // first.salary = 6000;

    first.printDetails(); // actually print details
    first.getsecretPass();
    return 0;
}
