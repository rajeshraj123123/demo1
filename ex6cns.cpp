#include <iostream>
#include <string>
using namespace std;
string encryptDecrypt(string text, char key) {
string result = text;
for (size_t i = 0; i < text.size(); ++i) {
result[i] = text[i] ^ key;
}
return result;
}
int main() {
string plaintext = "easy peasy";
char key = 'G';
string encryptedText = encryptDecrypt(plaintext, key);
cout << "key :" << key<< endl;
cout << "Plaintext: " << plaintext << endl;
cout << "Encrypted Text: " << encryptedText << endl;
string decryptedText = encryptDecrypt(encryptedText, key);
cout << "Decrypted Text: " << decryptedText << endl;
return 0;
}
