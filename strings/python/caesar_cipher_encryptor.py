'''
Given a non-empty string of lowercase letters and a non-negative integer representing a key, write a
function that returns a new string obtained by shifting every letter in the input string by k positions
in the alphabet, where k is the key.

Note: the letters should "wrap" around the alphabet; in other words, the letter z shifted by one returns
the letter a.
'''

def caesar_cipher_encryptor(string, key):
    newLetters = []
    newKey = key % 26
    alphabet = list('abcdefghijklmnopqrstuvwxyz')
    for letter in string:
        newLetters.append(get_new_letter(letter, key, alphabet))
    return ''.join(newLetters)

def get_new_letter(letter, key, alphabet):
    newLetterCode = alphabet.index(letter) + key
    return alphabet[newLetterCode % 26]
