#include <iostream>
using namespace std;
//membuat struktur untuk object double linkedlist
struct mode
{
    //deklarasi noMhs dan nama untuk menampung data
    int noMhs;
    string name;
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
