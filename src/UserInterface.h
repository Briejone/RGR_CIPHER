#pragma once

#include <iostream>

#include <fstream>
#include <string>
//#include <windows.h>
#include <locale>
#include "Ciphers/cipher.h"
using namespace std;

void passInput();

string textInput();

void textToFile(string text);

string fileToText();

string en_de_cryption_menu(int i, int cipherNum, string text);
string encryption_menu(int cipherNum, string text);

string decryption_menu(int cipherNum, string text);