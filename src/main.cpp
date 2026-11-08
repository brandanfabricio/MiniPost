#include <iostream>
#include <string>

void showWelcome()
{
    std::cout << "==================================\n";
    std::cout << "              MiniPost\n";
    std::cout << "==================================\n";
    std::cout << "Version 0.1.0\n";
}

void infoProyect()
{

    std::cout << "Proyecto: MiniPost \n";
    std::cout << "Lenguaje: C++20\n";
    std::cout << "Estado: Desarrollo\n";
}
void showStatus()
{
    std::cout << "Aplicacion iniciada correctamente. \n";
}

void showMenu()
{
    std::cout << "1. Informacion del proyecto\n";
    std::cout << "2. Mostrar estado\n";
    std::cout << "0. Salir";
}

int main()
{
    std::string option;
    showWelcome();
    showMenu();
    std::cout << "\nSeleccione una opcion: ";
    std::getline(std::cin, option);
    std::cout << std::endl;

    while (option != "0")
    {
        
        if (option == "1")
        {
            // std::system("cls");
            infoProyect();
        }
        if (option == "2")
        {
            // std::system("cls");
            showStatus();
        }
        std::cout << std::endl;
        showMenu();
        std::cout << "\nSeleccione una opcion: ";
        std::getline(std::cin, option);
        std::cout << std::endl;
    }

    return 0;
}