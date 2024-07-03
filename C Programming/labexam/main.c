#include "header.h"//no semicolon

int main()
{
        //creating nodes
        process * check;
        process * node1= (process * )malloc(sizeof(process));
        process * node2= (process * )malloc(sizeof(process));
        process * node3= (process * )malloc(sizeof(process));
        process * node4= (process * )malloc(sizeof(process));
        process * node5= (process * )malloc(sizeof(process));
        node1->ptr=node2;
        node2->ptr=node3;
        node3->ptr=node4;
        node4->ptr=node5;
        node5->ptr=NULL;
        check=node1;
        setprocess(check);//here we are setting the ll
        check=node1;
        printprocess(check);//here we are printing the ll
        check=node1;

        //creating another struct pointer variable fror another struct
        process1 * ncheck;
        ncheck =rearrangeprocess(check);//here I am returning and storing the arranged queue
        printf("\nThe sorted queue is \n");
        newprintprocess(ncheck);//here I am printing the new sorted linkedlist

        //here the time slicing function call happedn
        printf("The process completion ststus is  \n");
        process_starts(ncheck);
        newprintprocess(ncheck);//here I am linkedlist after the time slice happens



        return 0;
}

