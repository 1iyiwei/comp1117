#include <iostream>
#include <string>
using namespace std;

struct Info 
{
    string name;
    int age;
    char sex;
};                   // <--- remember to put a semi-colon there

int main(void)
{
    string name_input;
    int age_input;
    char sex_input;
    
    const int MAX_NUM_STUDENT = 3;
    Info student[MAX_NUM_STUDENT];
    int count = 0;
    while(cin >> name_input >> age_input >> sex_input)
    {
        student[count].name = name_input;
        student[count].age = age_input;
        student[count].sex = sex_input;
        ++count;

        if(count >= sizeof(student)/sizeof(Info))
            break;
    }
	
    // find the average age of the students
	
    double total = 0;
    for (int i = 0; i < count; ++i)
        total += student[i].age;
	
    double average_age = total / count;
    cout << "Average age: " << average_age << endl;
	
    cout << "Students that are above the average age: " << endl;
    // show those students that are above that age
    for (int i = 0; i < count; ++i)
    {
        if (student[i].age > average_age)
            cout << student[i].name << ' ' << student[i].age << endl;
    }

    cout << "Female students" << endl;
    // show all the female students
    for (int i = 0; i < count; ++i)
    {
        if (student[i].sex == 'F')
            cout << student[i].name << endl;
    }

    return 0;
}

