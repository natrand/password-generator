#include <iostream>
#include <ctime>
#include <cstdlib>


int main(){

    char symbol[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()[]{}!@#$%?*-_";
    int password_length = 8;
    int str_length = sizeof(symbol)-1;

    srand(time(NULL));
    std::cout<<"Pasword Generator: ";
    for(int i=0; i<password_length; i++){
        std::cout<<symbol[rand() % str_length];
    }

    

    return 0;
}