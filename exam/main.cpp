#include <iostream>
#include "textFile.h"
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;

    string path1 = "E:\\3rd-semester-cpp-homework\\exam\\ex.txt";
    string path2 = "E:\\3rd-semester-cpp-homework\\exam\\ex2.txt";

    TextFile file1(path1, 'r');
    TextFile file2(path2, 'r');
    cout<<"file1"<<endl<<file1<<endl;
    cout<<"file2"<<endl<<file2<<endl;

    file1.copy(file2);

    cout<<"after adding file2 to file1"<<endl<<file1<<endl;

    file1.sort( 'i', 2);
    cout<<"after increasing sorting"<<endl<<file1<<endl;

    file1.sort( 'd', 2);
    cout<<"after decreasing sorting"<<endl<<file1<<endl;

    file1.unique( );
    cout<<"unique strings"<<endl<<file1<<endl;

    file1.sum( 1, 2);
    cout<<"sum 1st and 2nd col into new col"<<endl<<file1<<endl;

    return 0;
}