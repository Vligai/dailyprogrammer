/*
[2012-02-10] Challenge #1 [Easy] 

create a program that will ask the users name, age, and reddit username. have it tell them the information back, 
in the format:

your name is (blank), you are (blank) years old, and your username is (blank)
*/
#include <iostream>
#include <string>
int main(){
    std::string name;
    std::string username;
    int age;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;
    std::cout << "What is your username?" << std::endl;
    std::cin >> username;
    
    std::cout << "your name is " << name << ", you are " << age << " years old, and your username is " << username << std::endl;
    return 1;
}