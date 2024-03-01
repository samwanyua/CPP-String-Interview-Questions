#include <iostream>
using namespace std;
//checking if one string is a rotation of another string
/*
example "ABCD" >>  "CDAB" "BCDA"

Concantenate the main string
*/

bool checkRotation(string mainStr, string rotatedString){
    if(mainStr.length() != rotatedString.length()) return false;

    string concantenated = mainStr + rotatedString;

    return concantenated.find(rotatedString) != string::npos; // string::npos indicate that a specific element or position is not found.
       
}




int main(){
    if (checkRotation("ABCD", "DABC")) {
        cout << "CDAB is a rotation of ABCD" << endl;
    } else {
        cout << "CDAB is not a rotation of ABCD" << endl;
    }

}