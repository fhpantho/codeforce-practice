#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    private:
    string id;
    public:
    string name;
    int age;
    string subject;
    string department;
    string designation;
    Teacher(string name, int age, string subject, string department, string designation)
    {
        this->name = name;
        this->age = age;
        this->subject = subject;
        this->department = department;
        this->designation = designation;
    }

    void setid(string a)
    {
        id = a;
    }
    string getid()
    {
        return id;
    }


    protected:
    string email;
};
class Professor:public Teacher
{
    public:
    string email;
};

int main()
{
    Teacher t1("John", 30, "Maths", "Science", "Professor");
    t1.setid("574685534");
    cout<<t1.getid()<<endl;
    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.subject << endl;
    cout << t1.department << endl;
    cout << t1.designation << endl;
    cout << t1.getid() << endl;
    return 0;
}