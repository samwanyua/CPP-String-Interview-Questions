#include <iostream>
#include <string>


//Reverse a string
std::string reverseString(std::string s){
    int length = s.length();
    for(int i=0; i<length/2; i++){
        std::swap(s[i], s[length-i-1]); // s[i] >> is the first element,  s[len-i-1] >> is the last element 
    }

    return s;
}


int main(){
    std::cout << reverseString("Wasdkljfkljsdklfjklsdjfka") <<std::endl;

    return 0;
}