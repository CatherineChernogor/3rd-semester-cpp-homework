//
// Created by Stephanie on 26.12.2019.
//

#include "textFile.h"
#include <fstream>
#include <cstring>

TextFile::TextFile(string path, char type) {
    if (type == 'w') {
        ofstream fout(path, ios_base::out);
        //cout << "write " << path << endl;

    } else if (type == 'r') {
        ifstream fin(path, ios_base::in);
        //cout << "read " << path << endl;

        // read file

        if (!fin.is_open()) {
            cout << "file can't be opened";
            throw TextFileExeption();
        } else {
            string str;
            //cout << "im opened" << endl;

            for (int i = 0; !fin.eof(); i++) {
                string str;
                getline(fin, str);
                //cout << str << endl;
                char *cstr = new char[str.length() + 1];
                strcpy(cstr, str.c_str());
                char *pch = strtok(cstr, "  \t");
                vector<int> line;
                for (int j = 0; pch != NULL; j++) {
                    //cout << pch << " ";
                    line.push_back(atoi(pch));
                    pch = strtok(NULL, "  \t");
                }
                //cout << endl;
                table.push_back(line);
            }
        }
        //cout << "im finished" << endl;

    } else {
        cout << "incorrect type" << endl;
        throw TextFileExeption();
    }
}

TextFile::~TextFile() {
    table.clear();
}

void TextFile::copy(TextFile &file) {
    //add file to table

    for (int i = 0; i < file.table.size(); i++) {
        table.push_back(file.table[i]);
    }
}

void TextFile::sort(char type, int col) {
    if (type == 'i') {//increasing

        for (int i = 0; i <table.size()-1; i++) {
            for (int j = 0; j < table.size() - i - 1; j++) {
                if (table[j][col-1] > table[j+1][col-1]) {
                    swap(table[j],table[j+1]);
                }
            }
        }

    } else if (type == 'd') {//decreasing

        for (int i = 0; i <table.size()-1; i++) {
            for (int j = 0; j < table.size() - i - 1; j++) {
                if (table[j][col-1] < table[j+1][col-1]) {
                    swap(table[j],table[j+1]);
                }
            }
        }

    } else {
        cout << "Incorrect type" << endl;
        throw TextFileExeption();
    }
}

void TextFile::unique (){

    TextFile &t(*this);
    t.sort('i', 1);

    for (int i=table.size()-1; i>0; i--){
        if (table[i]==table[i-1])
            table.erase(table.begin()+i-1, table.begin()+i);
    }
}
void TextFile::sum(int fst, int sec) {
    for (int i=0; i<table.size(); i++){
        table[i].push_back(table[i][fst-1]+table[i][sec-1]);
    }
}

ostream &operator<<(ostream &out, TextFile &tf) {

    for (int i = 0; i < tf.table.size(); i++) {
        for (int j = 0; j < tf.table[i].size(); j++)
            out << tf.table[i][j] << ' ';
        out << endl;
    }

    return out;
}

