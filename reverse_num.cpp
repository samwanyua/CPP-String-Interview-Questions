#include <iostream>

//reversing a number
/*int reverseNumber(int num){
   //no index in numbers
   //use % operator
   int reverse = 0;
   int remainder;
   while(num != 0){
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;
   }

   return reverse;
}*/


int reverseNumber(int num) {
    int reverse;
    for (; num != 0; num /= 10) { //;: The initialization part is empty. This means that there is no specific initialization statement before the loop starts.
        reverse = reverse * 10 + num % 10;
    }
    return reverse;
}

int main(){
    std::cout << reverseNumber(232342234) << std::endl;
    return 0;
}