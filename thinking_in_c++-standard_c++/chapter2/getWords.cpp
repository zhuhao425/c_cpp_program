#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<string> words;
    ifstream in("getWords.cpp");
    string word;
    while(in>>word)
        words.push_back(word);
    for (int i = 0; i < words.size();++i)
        cout << words[i] << endl;
    in.close();
    return 0;
}