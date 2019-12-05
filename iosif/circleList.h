//
// Created by Stephanie on 26.11.2019.
//

#ifndef IOSIF_CIRCLELIST_H
#define IOSIF_CIRCLELIST_H
using namespace std;

class CircleListException {

};
template <class T> class CircleListElem {
    T data;
    CircleListElem* next;

public:
    CircleListElem(const T& adata, CircleListElem* anext);
    const T& getData() const;
    CircleListElem<T>* getNext();
    template <class> friend class CircleList;
};
template <class T> class CircleList{
    CircleList(const CircleList& list);
    CircleList& operator = (const CircleList& list);
    CircleListElem<T>* start;

public:
    CircleList();
    ~CircleList();
    CircleListElem<T>* getStart();
    void setStart(CircleListElem<T> * ptr);
    void setStartToLoop(CircleListElem<T>** ptr);
    void deleteFirst();
    void deleteAfter(CircleListElem<T>* ptr);
    void insertFirst(const T& data);
    void insertAfter(CircleListElem<T>* ptr, const T& data);
    void loopedList();
    int getSize();
    template <class> friend ostream& operator <<(ostream& out, CircleList& list);
};

template <class T> CircleListElem<T>::CircleListElem(const T& adata, CircleListElem<T>* anext){
    data = adata;
    next = anext;
}
template <class T> CircleListElem<T>* CircleList<T>::getStart() {
    return start;
}

template <class T> const T& CircleListElem<T>::getData() const {
    return data;
}
template <class T> CircleListElem<T>* CircleListElem<T>::getNext(){
    return next;
}
template <class T> CircleList<T>::CircleList(){
    start = 0;
}
template <class T> CircleList<T>::~CircleList(){
    cout<<'1'<<endl;
    while (start ) {
        //cout<<'2'<<endl;
        deleteFirst();

    }
}

template <class T> void CircleList<T>::deleteFirst() {
    if (start) {
        CircleListElem<T>* temp = start->next;
        cout<<"deleted"<<start<<endl;
        delete start;
        start = temp;
    }
    else throw CircleListException();
}
template <class T> void CircleList<T>::insertFirst(const T& data){
    CircleListElem<T>* second = start;
    start = new CircleListElem<T>(data, second);
}
template <class T> void CircleList<T>::deleteAfter(CircleListElem<T>* ptr) {
    if (ptr && ptr->next) {
        CircleListElem<T>* temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;
    }
    else throw CircleListException();
}
template <class T> void CircleList<T>::insertAfter(CircleListElem<T>* ptr, const T& data) {
    if (ptr) {
        CircleListElem<T>* temp = ptr->next;
        ptr->next = new CircleListElem<T>(data, temp);
    }
}
template  <class T> int CircleList<T>::getSize() {
    int counter=1;
    CircleListElem<T>* ptr = getStart();
    ptr=ptr->getNext();
    if (!ptr)
        throw CircleListException();
    else
        while (ptr && ptr!=getStart()){
            ptr = ptr->getNext();
            counter++;
        }
    return counter;
}

template <class T> ostream& operator <<(ostream& out, CircleList<T>& list){
    CircleListElem<T>* ptr = list.getStart();
    if (!ptr)
        out << "EMPTY ";
    else {
        out<<"point start= "<<ptr<<endl;
        out <<"adr start="<<&ptr<<endl;
        out <<"adr1="<<list.getStart()<<" data1="<< ptr->getData() << endl;
        ptr = ptr->getNext();
        int i=2;
        while (ptr && ptr != list.getStart()) {
            //out <<ptr<<' '<< ptr->getData() << ' '<<endl;
            out <<"adr"<<i<<"="<<ptr<<' '<< "data"<<i<<"="<<ptr->getData() << ' '<<endl;
            i++;
            ptr = ptr->getNext();
        }
        cout<<"stop it"<<endl;
    }
    return out;
}
template <class T> void CircleList<T>::setStart(CircleListElem<T>* ptr) {
    if (ptr) {
        CircleListElem<T> *temp = ptr;
        ptr->next = new CircleListElem<T>(temp->getData(), start);
        temp->next = temp->next->next;
    }
}

template <class T> void CircleList<T>::setStartToLoop(CircleListElem<T>** ptr) {
    if (ptr) {
        CircleListElem<T> *temp = ptr;
        ptr->next = new CircleListElem<T>(temp->getData(), start);
        temp->next = temp->next->next;
    }
}

template  <class T> void CircleList<T>::loopedList() {
    CircleListElem<T>* ptr = getStart();

    for (int i=0; i<getSize()-1; i++){
        ptr = ptr->getNext();//get last item
    }
    if (ptr->getNext()==0){
        cout<<"cur ptr= "<<ptr<<endl;
        cout<<"list.start= "<<start<<endl;
        //int data = ptr->getData();
        //ptr->next = new CircleListElem<T>(data, start );
       // deleteAfter(ptr);
        setStart(ptr);

    }
}
#endif IOSIF_CIRCLELIST_H
