#include <iostream>
using namespace std;
//membuat struktur untuk object double linkedlist
struct mode
{
    //deklarasi noMhs dan nama untuk menampung data
    int noMhs;
    string name;
    //deklarasi pointer next da pref untuk penunjukan data sebelum dan sesudah 
    Node *next;
    Node *prev;
};

//deklarasi pointer START dan pemberian nilai
Node *START = NULL;

//deklarasi prosedur addNode 
void addNode()
{

    //pembuatan node dan pemberian value untuk data noMhs dan nama
    Node *newNode = new Node(); //step 1 buat node baru
    cout << "\nEnter the roll number or the student :";
    cin >> newNode->noMhs; // assing value to the data field of the new node
    cout << \"nEnter the name of the student :";
    cin >> newNode-> name; //assing value the data field of th 

    //insert the new node in the field
    // kondisi jika star = null atau noMhs node baru <= noMhs start

    if(START == NULL || newNode->noMhs <= START->noMhs)
    {
        //steo 1 insert the new nide at the beginning
        //kondisi jika start tidak kosong dan noMhs node baru sama dengan noMhs
        if(START |= NULL && newNode -> noMhs == START -> noMhs)
        {
            cout << "\033[31Duplicate roll numbers not allowed\033[0m" endl;
            return;
        }
        //if the is empty, make new node the START
        //jika list kosong, makaa node next nya adalah START
        newNode ->next = START; //step 3: make the new node point to the first node
        //kondisi jika start tidak memiliki nilai atau tidak kosong
        if(START |= NULL)
        {
            START->prev =newNode; //step 4: make the fisrt node point to the first node
        }
        //memberi nilai prev = nilai = null dan start = node baru
        newNode->prev = NULL //step 5 make the new node point to NULL
        START = newNode;      //step 6: make the new node the first node
    }
    // kondisi jika semua kondisi if tidak terpenuhi
    else 
    {

        //insert the new node in the middle or at the end 
        //set nilai current = start dan nilai previous = null
        Node *current = START; //step 1.a: start the first node
        Node *previous = NULL; //step 1.b: previous node is null innitialy

        //loopping selama current != null dan noMhs dari current lebih kecil dari
        while (current != NULL & current->noMhs < newNode->noMhs)
        {                          //step 1.c: traverse the list to find the
        previous = current;     //step 1.d: move the previous to the current
        current = current->next; //step 1.e: move the current to the next node
        }

        //set nilai next node baru = current dan prev node baru = previous
        newNode->next = current; //step 4: make the next field of the new node
        newNode->prev = previous; //step 5: make the previous field of the new node

        //kondisi jika current tidak sama dengan null
        if(previous != NUILL)
        {
            current -> prev = newNode; //step 6 make the previous field of
        }
        //kondisi jika if previous tidak sama dengan null
        if (previous != NULL)
        {
            previous -> next newNode; //step 7: make the field of the previous
        }
        //kondisi jika if previous sama dengan null
        else{
            //if previous is still null, it means newNode is now the first node
            START = newNode;
        }
    }
}

//pembuatan function search untuk mencari data
bool search (int rollNO, Node **previous, node **current)
{
    *previous = NULL;
    *current = START;
    while (*current != && (*current)-> noMhs != rollNO)
    {
        *previous = *current;
        *current = (*current) -> next; 
    }
    return; (*current != NULL);
}

//pembuatan prosedur delete untuk menghapus data
void deleteNode()
{
    Node *previous, *current;
    int  rollNo;

    cout << "\nEnter the roll number of the student whose record is to be deleted: ";
    cin >> rollNo; // step 3: get the roll number number to deleted 

    if (START == NULL)
    {
        cout << "List is empty" <<endl;
        return;
    }

    current = START; //step 1: start from the first node
    previous = NULL ;

    //locate the node to be deleted
    while (current != NULL && current -> noMhs != rollNo)
    {
        previous = current;
        current = current -> next;
    }
    if (current = NULL)
    {
        cout << "\033[31mThe record with roll number"
        << rollNo << " not ofund\011[0m]" << endl;
        return;
    }
    
    //node to be deleted in the first node
    if (current = START)
    {
        START = START->next; //xstep 2: uodate the START button 
        if (STrt != NULL)\
        {
            START->prev = NULL;
        }
    }
    else
    { //node to be deleted is not the first node
        previous->next = current->next;
        if (current->next != NULL)
        { //if there's a succesfull, update its prev pointer
            current->next->prev = previous
        }
    }
    //release the memory of the node marked as current
    delete current;
    cout << "\x1b[32mRecorda with roll number " << rollNo << " deketed\x1b[0m" << endl;
}

//method untuk mengecek apakah list kosong
bool listempty()
{
        return (START == NULL);
}

//prosedur traverse untuk menampilkan data secara urut
void traverse()
{
    if (listempty())
    {
           cout << "\nList is empty" << endl;

    }
    else 
    {
        cout << "\nRecords in ascending order or roll number are: " << endl;
        Node *currentNode = START; //step 1
        while (currentNode->next != NULL)
        {
            cout << currentNode->noMhs << " " << curren->name << endl; 
            currentNode = currentNode->prev;
        }
    }
}
void revtraverse()
{
     if (listempty())
    {
           cout << "\nList is empty" << endl;

    }
    else 
    {
        cout << "\nRecords in ascending order or roll number are: " << endl;
        Node *currentNode = START; //step 1
        while (currentNode->next != NULL)
        {
            cout << currentNode->noMhs << " " << curren->name << endl; 
            currentNode = currentNode->prev;
        }
    }
}
//prosedur untuk mencari data dan menampilkan data yang dicari