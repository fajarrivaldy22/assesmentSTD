#include "data.h"

data create_data(data x,int ida){

    data d;
    d.ID = ida;
    cout<<"Input Name  : ";
    cin>>d.name;
    cout<<"Input Group : ";
    cin>>d.group;
    cout<<"Input Age   : ";
    cin>>d.age;
    cout<<"Input Score : ";
    cin>>d.score;
    return d;

}

void view_data(data d){
    cout<<"Nama    : "<<d.name<<endl;
    cout<<"Group   : "<<d.group<<endl;
    cout<<"Age     : "<<d.age<<endl;
    cout<<"Score   : "<<d.score<<endl;
}

void edit_data(data &d){
    cout<<"Input Name  : ";
    cin>>d.name;
    cout<<"Input Group : ";
    cin>>d.group;
    cout<<"Input Age   : ";
    cin>>d.age;
    cout<<"Input Score : ";
    cin>>d.score;
}
