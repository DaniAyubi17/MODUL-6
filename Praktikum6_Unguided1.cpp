#include <iostream> 
#include <stack> 
#include <string> 
using namespace std; 

bool isPalindrome(const string& word) 
{ 
    stack<char> charStack; 

    // Push characters onto the stack 
    for (char ch : word) 
    { 
        charStack.push(ch); 
    } 

    // Pop characters from the stack and compare with the original word 
    for (char ch : word) 
    { 
        if (ch != charStack.top()) 
        { 
            return false; 
        } 
        charStack.pop(); 
    } 

    return true; 
} 

int main() 
{ 
    string input; 
    char choice; 
    bool continueInput = true; 

    while (continueInput) 
    { 
        cout << "Masukkan sebuah kata: "; 
        cin >> input; 

        if (input.empty()) {
            cout << "Input tidak boleh kosong." << endl;
            continue;
        }

        bool palindrome = isPalindrome(input); 

        if (palindrome) 
        { 
            cout << "Kata " << input << " adalah palindrom." << endl; 
        } 
        else 
        { 
            cout << "Kata " << input << " bukan palindrom." << endl; 
        } 

        cout << "Lanjutkan? (y/n): "; 
        cin >> choice; 

        if (choice == 'n' || choice == 'N') 
        { 
            continueInput = false; 
        } 

        cout << endl; 
    } 

    return 0; 
}
