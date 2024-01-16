#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

using namespace std;

int main(int argc, char* argv[]){

    pid_t fork(void);
    cout<<"fork address "<<fork()<<endl;
    cout<<"you have entered "<<argc<<" arguments"<<endl;

    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }
    int id=fork();
    cout<<"gm "<<id<<endl;
    return 0;
    
}