#include "cipher.h"
#include "workWithFiles.h"

int main() {
	setlocale(LC_ALL, "ru");
	textToFile();

	//cout << encodeSkitala("����������! ����������?", 4) << endl;
	//cout << decodeSkitala(encodeSkitala("����������! ����������?", 4), 4) << endl;
	//cout << encodeAtbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz �������������������������������� �����Ũ��������������������������!")<< endl;
	//cout << decodeAtbash(encodeAtbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz �������������������������������� �����Ũ��������������������������!")) << endl;
	//cout << encodeGronsfeld("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz �������������������������������� �����Ũ��������������������������!",2014)<< endl;
	//cout << decodeGronsfeld(encodeGronsfeld("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz �������������������������������� �����Ũ��������������������������!",2014),2014) << endl;
}