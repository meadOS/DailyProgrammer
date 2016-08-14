#include <iostream>
using namespace std;

int main()
{
  string name = "[unassigned]";
  string user = "[unassigned]";
  string age  = "[unassigned]";

  cout << "Please enter your name: ";
  cin >> name;
  cout << "Please enter your age: ";
  cin >> age;
  cout << "Please enter your username: ";
  cin >> user;

  cout << "Hello, " + name + " you are " + age;
  cout << " years old, and your username is " + user + "." << endl;

  return 0;
}
