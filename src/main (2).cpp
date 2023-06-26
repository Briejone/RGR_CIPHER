#include "cipher.h"
#include "workWithFiles.h"

int main() {
	setlocale(LC_ALL, "ru");
	textToFile();

	//cout << encodeSkitala("Èíôîðìàöèÿ! Èíôîðìàöèÿ?", 4) << endl;
	//cout << decodeSkitala(encodeSkitala("Èíôîðìàöèÿ! Èíôîðìàöèÿ?", 4), 4) << endl;
	//cout << encodeAtbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß!")<< endl;
	//cout << decodeAtbash(encodeAtbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß!")) << endl;
	//cout << encodeGronsfeld("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß!",2014)<< endl;
	//cout << decodeGronsfeld(encodeGronsfeld("ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß!",2014),2014) << endl;
}