#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool isPalindrome(string s){
    int len = s.length();

    for(int i =0; i< len/2; i++){
        if(s[i] != s[len - i -1]) return false;
    }
    return true;
}

int main(){
    //check if string is palindrome or not
    //example ababa, mum, poop

    if (isPalindrome("racecar")) {
        cout << "palindrome." << endl;
    } else {
        cout << "not a palindrome." << endl;
    }
     

    return 0;
}