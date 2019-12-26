//
// Created by Stephanie on 26.12.2019.
//

#ifndef EXAM_TEXTFILE_H
#define EXAM_TEXTFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


class TextFileExeption {

};

class TextFile {

public:
    vector<vector <int >> table;

    TextFile(string path, char type);
    ~TextFile();

    void copy(TextFile& file);
    void sort(char type, int col);
    void unique();
    void sum(int fst, int sec);

    friend ostream& operator <<(ostream& out, TextFile& tf);
};

#endif //EXAM_TEXTFILE_H
