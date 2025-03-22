#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestPalindrome(string s) {
   
    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    int length = 0;
    bool hasOddCount = false;

    for (auto& entry : freqMap) {
        if (entry.second % 2 == 0) {
           
            length += entry.second;
        } else {
            
            length += entry.second - 1;
            hasOddCount = true;
        }
    }

   
    if (hasOddCount) {
        length += 1;
    }

    return length;
}

int main() {
   
    string s1 = "abccccdd";
    string s2 = "a";
    string s3 = "abcabc";

    cout << "Longest palindrome length of '" << s1 << "': " << longestPalindrome(s1) << endl;
    cout << "Longest palindrome length of '" << s2 << "': " << longestPalindrome(s2) << endl;
    cout << "Longest palindrome length of '" << s3 << "': " << longestPalindrome(s3) << endl;

    return 0;
} 