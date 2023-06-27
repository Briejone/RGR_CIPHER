#include "cipher.h"

string encodeAtbash(string text) {
	string textEnc;
	for (int i = 0; i < text.size(); i++) {
		if (text[i] >= 65 && text[i] <= 90) { // îò êîíöà àëôàâèòà îòíèìàåì íîìåð ñèìâîëà ÷òîáû ïîëó÷èòü îáðàòíûé ïî àëôàâèòó
			textEnc += 90 - text[i] + 65;
		}
		else if (text[i] >= 97 && text[i] <= 122) {
			textEnc += 122 - text[i] + 97;
		}
		else if (text[i] >= -64 && text[i] <= -33) {
			textEnc += (-33) - text[i] + (-64);
		}
		else if (text[i] >= -32 && text[i] <= -1) {
			textEnc += (-1) - text[i] + (-32);
		}
		else {
			textEnc += text[i];
		}
	}
	return textEnc;
}

string decodeAtbash(string textEnc) {
	string text;
	for (int i = 0; i < textEnc.size(); i++) {
		if (textEnc[i] >= 65 && textEnc[i] <= 90) {
			text += 90 - textEnc[i] + 65;
		}
		else if (textEnc[i] >= 97 && textEnc[i] <= 122) {
			text += 122 - textEnc[i] + 97;
		}
		else if (textEnc[i] >= -64 && textEnc[i] <= -33) {
			text += (-33) - textEnc[i] + (-64);
		}
		else if (textEnc[i] >= -32 && textEnc[i] <= -1) {
			text += (-1) - textEnc[i] + (-32);
		}
		else {
			text += textEnc[i];
		}
	}
	return text;
}