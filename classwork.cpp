#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline

int main()
{
    // Set up variables
    double num1;
    std::string name;
    std::string n1, n2, n3, n4, n5;
    std::string adj1, adj2, adj3;
    std::string v1, v2, v3;
    

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter a name: ";
    std::cin >> name;

    std::cout << "Enter a noun: ";
    std::cin >> n1;


    std::cout << "Enter an adjective: ";
    std::cin >> adj1;

    std::cout << "Enter a verb: ";
    std::cin >> v1;

    // Display story
    std::cout << "I wish " << name << " was any good at writing madlibs. All they ever do is " << v1 << " instead.\n"
              << "They have such " << adj1 << " ideas, but they always end up looking like " << n1 << " in the end.\n";
    
    return 0;
}
