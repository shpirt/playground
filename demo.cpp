#include<pthread.h>
#include<unistd.h>
#include<iostream>
#include<string>
int main() {
    int pid;
    if((pid = fork()) < 0) {
        std::cerr << "create process failed" << std::endl;
    }
    else if(pid == 0) {
        sleep(5);
        std::cout << "main process" << std::endl;
    }
    else {
        sleep(10);
        std::cout << "child process" << std::endl;
    }
}