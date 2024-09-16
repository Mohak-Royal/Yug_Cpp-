#include<iostream>
#include<string.h>
using namespace std;

int main() {
   string s1 = "Hello";
   string s2 = "World";
//    append(new_str)
//    s1.append(" " + s2);
//    cout << s1 << endl;
   //assign(new_str)
//    s1.assign(s2);
//    cout << s1 << endl;
   //insert(pos, new_str)
//    s1.insert(3, "Good");
//    cout << s1 << endl;
   //replace(pos, n, new_str), n is the number of characters to be replaced
//    s1.replace(3, 4, "Bad");
//    cout << s1 << endl;
   //erase(pos, n), n is the number of characters to be erased
//    s1.erase(3, 1);
//    cout << s1 << endl;
   //c_str() -> converts string to c-string
//    char str[20] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    cout << s1.c_str() << endl;
//    find(str) -> returns the position of the first character of first occurrence of string s2 in string s1. If string s2 is not found, it returns string::npos
   // s1.assign("Hello World World");
//    cout << s1;
//    cout << s1.find("World", 7);
   //rfind(str) -> returns the position of the first character of last occurrence of string s2 in string s1. If string s2 is not found, it returns string::npos
//    cout << s1.rfind("World", 11) << endl;
   //substr(pos, n) -> returns a substring of n characters of string s1 starting from the position indicated by pos
   // cout << s1.substr(6, 5) << endl;
   //resize(n) -> resizes string s1 to n characters
   // s1.resize(5);
   // cout << s1 << endl;
   // swap(str) -> swaps string s1 with string s2
   // s1.swap(s2);
   // cout << s1 << endl;
   // cout << s2 << endl;
   //at(pos) -> returns the character at the position ‘pos’ in string s1
   // cout << s1.at(4) << endl;
   //front() -> returns the first character of string s1
   // cout << s1.front() << endl;
   //back() -> returns the last character of string s1
   // cout << s1.back() << endl;
   //begin() -> returns an iterator pointing to the beginning of string s1
   // cout << *s1.begin() << endl;
   //end() -> returns an iterator pointing to the end of string s1
   // cout << *s1.end() << endl;
   // rbegin() -> returns a reverse iterator pointing to the last character of string s1
   // cout << *s1.rbegin() << endl;
   //rend() -> returns a reverse iterator pointing to the character preceding the first character of string s1
   // cout << *s1.rend() << endl;
   //empty() -> returns true if string s1 is empty
   // s1 = "";
   // cout << s1.empty() << endl;
   //clear() -> erases all the characters of string s1
   // s1.clear();
   // cout << s1 << endl;

   //getline: reads a line from the input stream and stores it in the string object
   // getline(cin, s1);
   // cout << s1 << endl;

   return 0;
}

/*
Topic: Strings in C++

String methods in cpp using string header file

1. strcpy(s1, s2) - copies string s2 into string s1
2. strcat(s1, s2) - concatenates string s2 into string s1
3. strlen(s1) - gives the length of string s1
4. strcmp(s1, s2) - compares two strings s1 and s2. It returns an integer based on the comparison
5. strchr(s1, ch) - returns a pointer to the first occurrence of character ch in string s1
6. strstr(s1, s2) - returns a pointer to the first occurrence of string s2 in string s1
7. strrev(s1) - reverses the string s1
8. strlwr(s1) - converts string s1 to lowercase
9. strupr(s1) - converts string s1 to uppercase
10. strset(s1, ch) - sets all character of string s1 to a given character ch
11. strnset(s1, ch, n) - sets first n characters of string s1 to a given character ch
12. strtok(s1, delimiters) - extracts tokens from string s1. A token is a substring which is separated by delimiters.
13. itoa(value, buffer, radix) - converts an integer value to a null-terminated string using the specified base and stores the result in the array given by buffer parameter
14. atoi(str) - converts a string to an integer
15. atof(str) - converts a string to a floating-point value
16. atol(str) - converts a string to a long integer

in cpp:

1. s1.append(s2) - appends string s2 at the end of string s1
2. s1.assign(s2) - assigns a new value to the string s1
3. s1.insert(pos, s2) - inserts string s2 into string s1 at the position indicated by pos
4. s1.replace(pos, n, s2) - replaces n characters of string s1 from the position indicated by pos by string s2
5. s1.erase(pos, n) - erases n characters of string s1 from the position indicated by pos
6. s1.c_str() - converts string s1 to c-string (null terminated string)
7. s1.find(s2) - searches for the first occurrence of string s2 in string s1. It returns the position of the first character of first occurrence of string s2 in string s1. If string s2 is not found, it returns string::npos
8. s1.rfind(s2) - searches for the last occurrence of string s2 in string s1. It returns the position of the first character of last occurrence of string s2 in string s1. If string s2 is not found, it returns string::npos
9. s1.substr(pos, n) - returns a substring of n characters of string s1 starting from the position indicated by pos
10. s1.resize(n) - resizes string s1 to n characters
11. s1.swap(s2) - swaps string s1 with string s2
12. s1.at(pos) - returns the character at the position ‘pos’ in string s1   
13. s1.front() - returns the first character of string s1
14. s1.back() - returns the last character of string s1
15. s1.begin() - returns an iterator pointing to the beginning of string s1
16. s1.end() - returns an iterator pointing to the end of string s1
17. s1.rbegin() - returns a reverse iterator pointing to the last character of string s1
18. s1.rend() - returns a reverse iterator pointing to the character preceding the first character of string s1
19. s1.empty() - returns true if string s1 is empty
20. s1.clear() - erases all the characters of string s1

*/