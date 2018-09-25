#include "std_lib_facilities.h"
int main()
{
string first_name; // string variable
string friend_n; //barát változó
string my_name;
char friend_sex=0; //közös barát neme
int age=0;

cout << "Feladó (add meg a nevedet majd nyomd meg az 'entert')" << endl;
cin >> my_name;
cout << "Add meg a címzettet" << endl;
cin >> first_name; // read a string
cout << "Kérlek add meg egy másik barátod nevét" << endl;
cin >> friend_n;
cout << "Kérlek írj be egy m betűt, ha a barátod férfi, vagy f betűt ha a barátod nő" << endl;
cin >> friend_sex;
cout << "Kérlek írd be a barátod életkorát!" << endl;
cin >> age;
if (age <= 0 || age >= 110)
{
simple_error ("Ne viccelj, az életkorod nem lehet kissebb mint 0 vagy nagyobb mint 110!");
}
cout << "Kedves, " << first_name << "!" << endl;
cout << "Nagy lelkesedéssel olvasom leveledet." << endl;
cout << "Hogy vagy, minden oké veled?"<< endl;
cout << "Láttad " << friend_n << " mostanság?"<< endl; 

if (friend_sex == 'f')
{
cout << "Ha találkozol " << friend_n << " nő/lány barátommal, akkor mondd meg neki,hogy kerestem" << endl;
}
if (friend_sex == 'm')
{
cout << "Ha találkozol " << friend_n << " férfi/fiú barátommal, akkor mondd meg neki,hogy kerestem" << endl;
}
 
cout << "Hallottam, hogy mostanság volt a születésnapod, és " << age << " éves lettél" << endl;

if (age == 17)
{
cout << "A következő évben már részt vehetsz a választásokon!" << endl;
}
if (age < 12)
{
cout << "A következő évben " << age + 1 << " éves leszel" << endl;
}

cout << "Sok szeretettel " << my_name << "." << endl;
}

