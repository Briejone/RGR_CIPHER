#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <locale>
#include <cmath>
#include <map>
#include <fstream>
#include <string>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;

using namespace std;

string encodeGronsfeld(string text, int key);
string decodeGronsfeld(string textEncoded, int key);

string encodeAtbash(string text);
string decodeAtbash(string textEncoded);

string encodeSkitala(string text, float diameter);
string decodeSkitala(string textEncoded, float diameter);

string encodeAtbash(string text);
string decodeAtbash(string textEnc);

bool _isEnglish_(string str);
string encryptCaesar(string message, int key);
string decryptCaesar(string message, int key);

void createNewAlphabet(char* newAlphabet);
string encodeCodeword(string source_text, char* ALPHABET_ENCODED);
string decodeCodeword(string encoded_text, char* ALPHABET_ENCODED);

string encodeGronsfeld(string text, int key);
string decodeGronsfeld(string textEnc, int key);

string encodeMatrix(string text);
string decodeMatrix(string text);

string encodeSkitala(string text, float diameter);
string decodeSkitala(string textEnc, float diameter);

string encryptTable(string plaintext, string key);
string decryptTable(string ciphertext, string key);

string encodeTarabar(const string& text);
string decodeTarabar(const string& encodedText);

void createVigenereTable();
string encodeVizhiner(string text, string mappedKey);
int itrCount(int key, int msg);
string decodeVizhiner(string text, string mappedKey);

enum class codes {
	ENCODE = 1234,
	DEDCODE = 5678,
	ATBASH = 1,
	GRONSFELD = 2,
	SKITALA = 3
};