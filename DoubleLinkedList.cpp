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
        
    }
}