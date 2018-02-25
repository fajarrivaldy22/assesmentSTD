#include <iostream>
#include <conio.h>
#include "list.h"

using namespace std;

void mainMenu();
List L;
int id = 1;
int main()
{

    createList(L);
    mainMenu();
}

void mainMenu(){
    address P;
    infotype x;
    id =1;

    int choice;
    do{
        cout<<"======Menu======"<<endl;//1301164476
        cout<<"group should capital letter"<<endl;
        cout<<"1.  Insert Data"<<endl;
        cout<<"2.  View Data  "<<endl;
        cout<<"3.  Average By Group  "<<endl;
        cout<<"4.  Find Oldest Data  "<<endl;
        cout<<"Type your choice : ";
        cin>>choice;
        switch(choice){
            case 1 :{
                x = create_data(x,id);
                insertAndSort(L,allocate(x));
                id++;
                cout<<"Data Inserted"<<endl;
                }
                cout<<"Press Enter...";getche();
                break;
            case 2 :{
                printInfo(L);
                }
                cout<<"Press Enter...";getche();
                break;
            case 3 :{
                averageGroup(L);
                }
                cout<<"Press Enter...";getche();
                break;
            case 4 :{
                findOldest(L);
                }
                cout<<"Press Enter...";getche();
                break;
        }
    }while(true);
}
/** Author By Muhamad Fajar Rivaldy
    IF 40 INT
        1301164476
        */
