#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void saveToFile(const string& filename, const vector<string>& data) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "error";
    }
    else {
        for (const string& word : data) {
            file << word << endl;
        }
    }
    file.close();
}
void loadFromFile(const string& filename, vector<string>& outData) {
    ifstream file(filename);
    if (file.is_open()) {
        std::string word;
        while (file >> word) {
            outData.push_back(word);
        }
        file.close();
    }
    else {
        cout << "error" << endl;
    }
}
int main()
{
    string filename;
    filename = "love.txt";
    vector<string>data;
    vector<string>data1;
    data1.push_back("I");
    data1.push_back("love");
    data1.push_back("my");
    data1.push_back("family");
    saveToFile(filename, data);
    loadFromFile(filename, data1);
    cout << data[1] << endl;
}
