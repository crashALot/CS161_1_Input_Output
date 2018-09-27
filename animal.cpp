/****************************************************************
**Author: Glenn Kiefer
**Date: 04/03/2018
**Description: This program requests user input, and outputs the 
**resultant user input to console.
******************************************************************/  

#include <iostream>
#include <string>

// a simple example program
int main()
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal." << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;

  return 0;
}
