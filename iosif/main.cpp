#include <iostream>
#include "lineList.h"

using namespace std;

int getSize();
int getNumber();

int main()
{
    // 3 6 9 4 8 5 2 7 1
    int size=getSize();
    int number=getNumber();

    LineList<int> list;
    for (int i = size; i > 0; i--) {//creating start from 13 to 1
        list.insertFirst(i);
    }

    LineListElem<int>* ptr = list.getStart();
    for (int i=0; i<size-1; i++){
        ptr = ptr->getNext();//get last item
    }
    list.setStart(ptr);//set start to last item

    ptr=list.getStart();//reset
    int counter=0;
    for (int i=0; counter<size; i++){
        if ((i+1) % (number-1) == 0){
            cout<<ptr->getNext()->getData()<<' ';
            list.deleteAfter(ptr);
            counter++;
        }
        ptr=ptr->getNext();
    }
    return 0;
}


int getSize(){
    int size;
    cout<<"enter number of people:";
    cin>>size;
    return size;
}
int getNumber(){
    int number;
    cout<<"enter frequency of killing:";
    cin>>number;
    return number;
}