#include <iostream>
#include <unordered_map>

void printDuplicates(const std::string& str) {
    // Step 1: Declare an unordered_map to store character counts
    std::unordered_map<char, int> count;

    // Step 2: Iterate through each character in the string
    for (char c : str) {
        // Step 3: Increment the count for the current character in the map
        count[c]++;
    }

    // Step 4: Iterate through the map and print duplicate characters along with their counts
    for (const auto& it : count) {
        if (it.second > 1) {
            std::cout << it.first << ", count = " << it.second << std::endl;
        }
    }
}

int main() {
    printDuplicates("SJKJDJASDFSDFJSFSDFJL");
    return 0;
}
