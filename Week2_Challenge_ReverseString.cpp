#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    // Swaping characters
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};

    reverseString(s1);
    reverseString(s2);

    // Printing reversed strings
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    for (char c : s2) {
        cout << c;
    }
    cout << endl;

    return 0;
}