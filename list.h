#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>
#include <windows.h>
#include <iostream>
#include "data.h"

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;




typedef data infotype;
typedef struct elmlist *address;

/**
* IMPLEMENT CIRCULAR DOUBLE LINKED LIST
*/

struct elmlist {
    //------------- your code here -----------
    infotype info;
    address next;
    address prev;

    //----------------------------------------
};

struct List {
    //------------- your code here -----------
    address first;
    address last;
    //----------------------------------------
};

void createList(List &);

address allocate(infotype );
void deallocate(address &);

void insertFirst(List &, address );
void insertLast(List &, address );
void insertAfter(List &, address &, address);

void deleteFirst(List &, address &);
void deleteLast(List &, address &);
void deleteAfter(List &, address &, address &);

address findElmByID(List, infotype );
address findElmByName(List, infotype );

void printInfo(List L);

void averageGroup(List L);

void insertAndSort(List &L, address P);

void findOldest(List L);

#endif // LIST_H_INCLUDED

