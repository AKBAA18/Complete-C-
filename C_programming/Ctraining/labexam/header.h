#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//This is the creation of structure with pid , duration , priority , state as elements 
typedef struct process
{
        int pid;
        int duration;
        int priority;
        char * name;
        struct process *ptr;
}process;
//Here ai have created another struct and from this I have created the sorted linkedlist 
typedef struct process1
{
        int pid;
        int duration;
        int priority;
        char * name;
        struct process1 *ptr;
}process1;


//Here I have declared the function used in this program  
void setprocess(process * );
void printprocess(process *); 
void newprintprocess(process1 *); 
process1 *  rearrangeprocess(process *); 
void process_starts(process1 *); 

