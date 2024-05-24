#include <iostream> 
#include <stack> 
#include <vector> 
using namespace std; 
 
string reverseString(string input) 
{ 
    stack<char> charStack; 
    string reversedString = ""; 
 
    // Push characters onto the stack 
    for (char ch : input) 
    { 
        charStack.push(ch); 
    } 
 
    // Pop characters from the stack to reverse the string 
    while (!charStack.empty()) 
    { 
        reversedString += charStack.top(); 
        charStack.pop(); 
    } 
 
    return reversedString; 
} 
 
int main() 
{ 
    vector<string> words; 
 
    string input; 
    cout << "Masukkan kata (ketik 'DONE' untuk selesai): "; 
    getline(cin, input); 
 
    while (input != "DONE") 
    { 
        words.push_back(input); 
 
        cout << "Masukkan kata (ketik 'DONE' untuk selesai): "; 
        getline(cin, input); 
    } 
 
    cout << "Kata-kata yang telah diinputkan: " << endl; 
    for (string word : words) 
    { 
        cout << word << endl; 
    } 
    cout << endl; 
 
    cout << "Kata-kata dalam bentuk terbalik: " << endl; 
    for (string word : words) 
    { 
        string reversed = reverseString(word); 
        cout << reversed << endl; 
    } 
    cout << endl; 
return 0; 
} 