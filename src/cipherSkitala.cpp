#include "cipher.h"

string encodeSkitala(string text, float diameter) { //PI*diameter/2 - количество символов на одной половине стержня
	string textEnc;
	int** a = new int* [diameter];
	for (int i = 0; i < diameter; i++) {
		a[i] = new int[ceil(text.size() / diameter)];
	}
	int c = 0;
	for (int i = 0; i < diameter; i++) {
		for (int j = 0; j < ceil(text.size() / diameter); j++) {
			if (c < text.size()) {
				a[i][j] = text[c];
				c++;
			}
			else {
				a[i][j] = ' ';
			}
		}
	}
	for (int i = 0; i < ceil(text.size() / diameter); i++) {
		for (int j = 0; j < diameter; j++) {
			textEnc += a[j][i];
		}
	}
	return textEnc;
}

string decodeSkitala(string textEnc, float diameter) {
	string text;
	int** a = new int* [textEnc.size() / diameter];
	for (int i = 0; i < textEnc.size() / diameter; i++) {
		a[i] = new int[diameter];
	}
	int c = 0;
	for (int i = 0; i < textEnc.size() / diameter; i++) {
		for (int j = 0; j < diameter; j++) {
			a[i][j] = textEnc[c];
			c++;
		}
	}
	for (int i = 0; i < diameter; i++) {
		for (int j = 0; j < textEnc.size() / diameter; j++) {
			text += a[j][i];
		}
	}
	return text;
}