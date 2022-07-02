/*
Given a non-empty string of lowercase letters and a non-negative integer representing a key, write a
function that returns a new string obtained by shifting every letter in the input string by k positions
in the alphabet, where k is the key.

Note: the letters should "wrap" around the alphabet; in other words, the letter z shifted by one returns
the letter a.
*/

#include <vector>
#include <numeric>
using namespace std;

char get_new_letter(char letter, int key, string alphabet);

string caesar_cipher_encryptor(string str, int key) {
    vector<char> newLetters;
    int newKey = key % 26;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < str.length(); i++) {
        newLetters.push_back(get_new_letter(str[i], key, alphabet));
    }
    return string(newLetters.begin(), newLetters.end());
}

char get_new_letter(char letter, int key, string alphabet) {
    int newLetterCode = alphabet.find(letter) + key;
    return alphabet[newLetterCode % 26];
}