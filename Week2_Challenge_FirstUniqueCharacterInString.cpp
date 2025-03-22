#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int firstUniqChar(string s) {
    // Count frequency of each character in string
    unordered_map<char, int> freqMap;
    
    // Count each character's freq
    for (char c : s) {
        freqMap[c]++;
    }
    
    // Find first character with freq 1
    for (int i = 0; i < s.size(); i++) {
        if (freqMap[s[i]] == 1) {
            return i; 
            // Return  index of the first non-repeating chr
        }
    }
    
    // If no non-repeating chrr is found it return -1
    return -1;
}

int main() {

    string s1 = "leetcode";
    string s2 = "loveleetcode";
    string s3 = "aabb";

    cout << "First non-repeat char index in '" << s1 << "': " << firstUniqChar(s1) << endl;
    cout << "First non-repeat char index in '" << s2 << "': " << firstUniqChar(s2) << endl;
    cout << "First non-repeat char index in '" << s3 << "': " << firstUniqChar(s3) << endl;

    return 0;
}
