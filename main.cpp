#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    char symbol[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ()[]{}!@#$%?*-_";
    int password_length;
    int str_length = sizeof(symbol)-1;

    srand(time(NULL));
    std::cout<<"Enter the password length: ";
    std::cin>>password_length;
    std::cout<<"\nPasword Generator: ";
    for(int i=0; i<password_length; i++){
        std::cout<<symbol[rand() % str_length];
    }

    return 0;
}
