#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      :
    NAME       :
    STUDENT ID :
**/

struct data {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
            - a float variable
    */
    //=================================================
    // YOUR CODE STARTS HERE
    int ID,age;
    string name;
    char group;
    float score;


    // YOUR CODE ENDS HERE
    //=================================================
};


data create_data(data x,int ida);
void view_data(data d);
void edit_data(data &d);

#endif // DATA_H_INCLUDED
