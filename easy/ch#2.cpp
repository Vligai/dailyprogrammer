/*
Hello, coders! An important part of programming is being able to apply your programs, so your challenge for today is to create a 
calculator application that has use in your life. It might be an interest calculator, or it might be something that you can use in the classroom. 
For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!
*/
#include <string>
#include <iostream>
int main (){
  double force, mass, acceleration;
  std::string choice;
  std::cout << "What would you like to find? force/acceleration/mass: " << std::endl;
  std::cin >> choice;
  if(choice == "force")
  { 
     std::cout << "Acceleration: ";
     std::cin >> acceleration;
     
     std::cout << "Mass: ";
     std::cin >> mass;  

     force = mass * acceleration;
     std::cout << "The force is " << force << std::endl;
  }
  else if(choice == "acceleration")
  { 
     std::cout << "Force: ";
     std::cin >> force;

     std::cout << "Mass: ";
     std::cin >> mass;
     
     acceleration = force/mass;
     std::cout << "The acceleration is " << acceleration << std::endl;
  }
  else if(choice == "mass")
  { 
     std::cout << "Acceleration: ";
     std::cin >> acceleration;
     
     std::cout << "Force:";
     std::cin >> force;
     
     mass = force/acceleration;
     std::cout << "The mass is " << mass << std::endl;
  }
  return 1;
}