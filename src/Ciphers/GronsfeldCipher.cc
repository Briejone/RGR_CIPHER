#include "cipher.h"

string encodeGronsfeld(string text, int key) {
	int osc = 0;
	string textEnc;
	string keyStr = to_string(key);
	for (int i = 0; i < text.size(); i++) {
		if (text[i] >= 65 && text[i] <= 90) {
			textEnc += (text[i] + (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - 65) % 26 + 65;
		}
		else if (text[i] >= 97 && text[i] <= 122) {
			textEnc += (text[i] + (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - 97) % 26 + 97;
		}
		else if (text[i] >= -64 && text[i] <= -33) {
			textEnc += (text[i] + (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - (-64)) % 32 + (-64);
		}
		else if (text[i] >= -32 && text[i] <= -1) {
			textEnc += (text[i] + (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - (-32)) % 32 + (-32);
		}
		else {
			textEnc += text[i];
			osc++;
		}
	}
	return textEnc;
}

string decodeGronsfeld(string textEnc, int key) {
	int osc = 0;
	string text;
	string keyStr = to_string(key);
	for (int i = 0; i < textEnc.size(); i++) {
		if (textEnc[i] >= 65 && textEnc[i] <= 90) {
			text += (26 + textEnc[i] - (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - 65) % 26 + 65;
		}
		else if (textEnc[i] >= 97 && textEnc[i] <= 122) {
			text += (26 + textEnc[i] - (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - 97) % 26 + 97;
		}
		else if (textEnc[i] >= -64 && textEnc[i] <= -33) {
			text += (32 + textEnc[i] - (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - (-64)) % 32 + (-64);
		}
		else if (textEnc[i] >= -32 && textEnc[i] <= -1) {
			text += (32 + textEnc[i] - (int(keyStr[(keyStr.size() - osc + i) % keyStr.size()]) - 48) % (keyStr.size() + keyStr[i % keyStr.size()]) - (-32)) % 32 + (-32);
		}
		else {
			text += textEnc[i];
			osc++;
		}
	}
	return text;
}