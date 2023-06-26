#pragma once
#include "imports.h"

using namespace std;

string encodeGronsfeld(string text, int key);
string decodeGronsfeld(string textEncoded, int key);

string encodeAtbash(string text);
string decodeAtbash(string textEncoded);

string encodeSkitala(string text, float diameter);
string decodeSkitala(string textEncoded, float diameter);

enum class codes {
	ENCODE = 1234,
	DEDCODE = 5678,
	ATBASH = 1,
	GRONSFELD = 2,
	SKITALA = 3
};