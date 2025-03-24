#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;
string sringReverse(const string fileData);

int main() {
    int vowel_count = 0;
    int word_count = 0;
    string fileData;
    ifstream myfile;
    myfile.open("textfile.txt");
    getline(myfile, fileData);
    //cout << fileData.length() << endl;
    
    for (int i = 0; i < fileData.length(); i++) {
        if (fileData[i]=='a'||fileData[i]=='e'||fileData[i]=='i'||fileData[i]=='o'||fileData[i]=='u') {
            vowel_count++;
        }
    }
    cout << "The file`s text has " << vowel_count << " vowels." << endl;

    string word;
    istringstream stream(fileData);
    while (stream >> word) {
        word_count++;
    }
    cout <<"the file has "<< word_count << " words" << endl;

    istringstream wistream(fileData);
    while (wistream >> word) {
        word[1] = toupper(word[1]);
        cout << word << " ";
    }
    cout << endl;
    string reversedstring = sringReverse(fileData);
    cout<< "The reversed string: " << reversedstring << endl;
}
string sringReverse(string fileData){
    reverse(fileData.begin(), fileData.end());
    return fileData;
}