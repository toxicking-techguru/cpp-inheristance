# include <iostream>
# include <string>
using namespace std;
//class name named Person data
class PersonData
{
    //member variables
    private:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        int zip;
        string phone;
    public:
        // this are the constructors of person data
        PersonData()
        {
            lastName = "";
            firstName = "";
            address = "";
            city = "";
            state = "";
            zip = 0;
            phone = "";
        }

        PersonData(string m, string n, string add, string c, string s, int j, string phn)
        {
            lastName = m;
            firstName = n;
            address = add;
            city = c;
            state = s;
            zip = j;
            phone = phn;
        }

        //this is the  mutator functions
        void setLastName(string m)
        { lastName = m; }

        void setFirstName(string n)
        { firstName = n; }

        void setAddress(string add)
        { address = add; }

        void setCity(string c)
        { city = c; }

        void setState(string s)
        { state = s; }

        void setZip(int j)
        { zip = j; }

        void setPhone(string phn)
        { phone = phn; }

        //this is  accessor functions
        string getLastName() const
        { return lastName; }

        string getFirstName() const
        { return firstName; }

        string getAddress() const
        { return address; }

        string getCity() const
        { return city; }

        string getState() const
        { return state; }

        int getZip() const
        { return zip; }

        string getPhone() const
        { return phone; }

        // display functions
        void displayPersonData() const
        {
            cout << "Last Name:\t\t" << getLastName() << endl;
            cout << "First Name:\t\t" << getFirstName() << endl;
            cout << "Address:\t\t" << getAddress() << endl;
            cout << "City:\t\t\t" << getCity() << endl;
            cout << "State:\t\t\t" << getState() << endl;
            cout << "Zip:\t\t\t" << getZip() << endl;
            cout << "Phone:\t\t\t" << getPhone() << endl;
        }
};
//castomer ddata
class CustomerData : public PersonData
{
    private:
        int customerNumber;
        bool mailingList;
    public:
        // this is the constructors
        CustomerData() : PersonData()
        {
            customerNumber = 0;
            //boolian
            mailingList = false;
        }

        CustomerData(int number, bool mail, string m, string n, string add, string c, string s, int j, string ph) : PersonData(m, n, add, c, s, j, ph)
        {
            customerNumber = number;
            mailingList = mail;
        }

        //this is the  mutator functions
        void setCustomerNumber(int number)
        { customerNumber = number; }

        void setMailingList(bool mail)
        { mailingList = mail; }

        // this is accessor functions
        int getCustomerNumber() const
        { return customerNumber; }

        bool getMailingList() const
        { return mailingList; }

        // display functions mamber variable
        void displayCustomerData() const
        {
            displayPersonData();
            cout << "Customer Number:\t" << getCustomerNumber() << endl;
            cout << "Mailing List:\t\t" << getMailingList() << endl;
        }
};

int main()
{
    
    cout << " welcome, we are using  class named CustomerData derived from a class named PersonData." << endl;

    cout << "\n\n";

   
    
    CustomerData noData;
    noData.displayCustomerData();

    cout << "\n\n";
    cout << "Press Enter  button to continue." << endl;
    cin.get();
    cout << endl;

    
    cout << "desplay of CustomerData  " << endl;
    cout << endl;

    CustomerData kyle(237, true, "toxicking", "kingpin", "vicks tytfgv.", "nagaswhtha", "IA", 50443, " 07 666-4365");
    kyle.displayCustomerData();


    
    cout << "\n\n";
    cout << "Press Enter batton to exit this  program." << endl;
    cin.get();
    return 0;
}
