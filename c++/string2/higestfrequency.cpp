#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // string s;
    // cout << "Enter the string s: ";
    // getline(cin, s);
    // int max = 0;

    // // First loop to find the maximum frequency
    // for (int i = 0; i < s.length(); i++) {
    //     char ch = s[i];
    //     int count = 1; // start counting from 1 since we include s[i] itself
    //     for (int j = i + 1; j < s.length(); j++) {
    //         if (s[i] == s[j]) count++;
    //     }
    //     if (max < count) max = count;
    // }

    // // Second loop to print characters with maximum frequency
    // for (int i = 0; i < s.length(); i++) {
    //     char ch = s[i];
    //     int count = 1; // start counting from 1 since we include s[i] itself
    //     for (int j = i + 1; j < s.length(); j++) {
    //         if (s[i] == s[j]) count++;
    //     }
    //     if (count == max) {
    //         cout << ch << " " << max << endl;
    //         // Ensure this character is not printed again
    //         for (int k = i + 1; k < s.length(); k++) {
    //             if (s[k] == ch) {
    //                 s[k] = '\0'; // nullify further occurrences
    //             }
    //         }
    //     }
    // }

    // return 0;


      
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    vector<int> arr(26, 0); // Initialize vector with 26 integers set to 0

    // Counting frequency of each lowercase character
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') { // Only count lowercase letters
            int ascii = (int)ch;
            arr[ascii - 97]++;
        }
    }

    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) max = arr[i];
    }

    // Print characters with maximum frequency
    for (int i = 0; i < 26; i++) {
        if (arr[i] == max) {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout << ch << " " << max << endl; // Corrected printing statement
        }
    }

    return 0;
}


