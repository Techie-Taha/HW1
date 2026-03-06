/*
Write a program having a  String class that contains a function that can reverse the 
order of the characters in a string. A palindrome is a word or group of words that 
read the same forward and backward. For example, “madam” or “wow”. Write a 
program that takes a string argument from the command line and returns TRUE if 
the string is a palindrome. 
*/


#include <iostream>
#include <string>
using namespace std;

class String {
    public:
    bool ispalindrome(string str){
        int val = str.length();
        for(int i = 0; i < val/2; i++){
            if(str.at(i) != str.at(val-1-i))
            return false;
        }
        return true;
    }

};

int main(){
    String object;
    string word;
    cout << "Enter your word: ";

    cin >> word;

    if(object.ispalindrome(word)){

    cout << "True!! It's a palindrome" << endl;
    }

    else {
        cout << "False!! It's not a palindrome" << endl;
        
    }
    return 0;
   
}