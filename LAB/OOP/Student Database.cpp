#include <iostream>
#include <cstring>

using namespace std;

class PersonClass
{
private:
    char name[40], clas[10], div[2], dob[15], bloodgrp[5];
    int roll;

public:
    static int count; // static data
    friend class PersonnelClass;
    
    PersonClass() : roll(0) {}

    static void TotalRecordCount() // static method
    {
        cout << "\nTOTAL NUMBER OF RECORDS CREATED : " << count<<endl;
    }
};

class PersonnelClass
{
private:
    char address[30], telephone_no[15], policy_no[10], license_no[10];

public:
    PersonnelClass() : address(""), telephone_no(""), policy_no(""), license_no("") {}

    void InputData(PersonClass *obj);
    void DisplayData(PersonClass *obj);
    friend class PersonClass;
};

int PersonClass::count = 0;
void PersonnelClass::InputData(PersonClass *obj)
{
    cout << "ROLLNO : ";
    cin >> obj->roll;
    cout << "NAME : ";
   
    cin.getline(obj->name, 40);
    cout <<"CLASS : ";
    cin >> obj->clas;
    cout << "DIVISION : ";
    cin >> obj->div;
    cout << "DATE OF BIRTH(DD - MM - YYYY) : ";
    cin >> obj->dob;
    cout << "BLOOD GROUP : ";
    cin >> obj->bloodgrp;
    cout << "ADDRESS : ";
    
    cin.getline(this->address, 30);
    cout << "Mobile NUMBER : ";
    cin >> this->telephone_no;
    cout << "DRIVING LICENSE NUMBER : ";
    cin >> this->license_no;
    cout << "POLICY NUMBER : ";
    cin >> this->policy_no;
    obj->count++;
}

void PersonnelClass::DisplayData(PersonClass *obj)
{
    cout<<"\nStudent Details: "<<endl;
    cout <<"Roll No: "<< obj->roll <<endl;
    cout<< "Name: " << obj->name <<endl;
    cout<< "Class: " << obj->clas <<endl;
    cout<< "Division: " << obj->div <<endl;
    cout<< "Date of Birth: " << obj->dob <<endl;
    cout<< "Address: " << this->address <<endl;
    cout<<"Mobile:  " << this->telephone_no <<endl;
    cout<< "Blood Group: " << obj->bloodgrp << endl;
    cout<<"Driving License: " << this->license_no <<endl;
    cout<< "Policy No: " << this->policy_no<<endl;
}

int main()
{
    PersonnelClass *a[10];
    PersonClass *c[10];
    int n = 0, i, choice;
    char ans;
    
    do
    {
        cout << "\nMENU : ";
        cout << "\n1.Input Data\n2.Display Data\n3.Exit"<<endl;
        cout << "Enter your choice : ";

        cin >> choice;
        
        switch (choice)
        {
        case 1:
            cout << "ENTER THE DETAILS"<<endl;

                a[n] = new PersonnelClass;
                c[n] = new PersonClass;
                a[n]->InputData(c[n]);
                n++;
                PersonClass::TotalRecordCount();
               
            break;
        case 2:         
            for (i = 0; i < n; i++){
                a[i]->DisplayData(c[i]);
            }
            PersonClass::TotalRecordCount();
            break;

        case 3:
            cout<<"Thank You...";
            break;
        }
        
        
    } while (choice!=3);
    
    return 0;
}
