// Working with strings

#include <iostream>

#include <string>

using namespace std;

int main() {
   string str = "Hello, World!";

   // Accessing characters
   cout << "First character: " << str.front() << endl;
   cout << "Last character: " << str.back() << endl;

   // Modifying strings
   str.append(" Welcome!");
   cout << "Appended string: " << str << endl;
   str.replace(7, 5, "Universe");
   cout << "Replaced string: " << str << endl;
   str.erase(13, 8);
   cout << "Erased string: " << str << endl;

   // Searching
   size_t pos = str.find("Universe");
   if (pos != string::npos) {
       cout << "Found 'Universe' at position: " << pos << endl;
   }

   // Substring
   string sub = str.substr(7, 8);
   cout << "Substring: " << sub << endl;
   return 0;
}