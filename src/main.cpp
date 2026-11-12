#include <iostream>
#include <string>
#include <minipost/http/http_method.hpp>
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
    std::cout << "3. Probar metodos HTTP\n";
    std::cout << "0. Salir";
}
void showMethod()
{
    std::cout << "==================================\n";
    std::cout << "              HTTP METHOS\n";
    std::cout << "==================================\n";
}
void listMethods()
{
    std::cout << "GET      -> Valido  \n";
    std::cout << "POST     -> Valido   \n";
    std::cout << "PUT      -> Valido  \n";
    std::cout << "PATCH    -> Valido    \n";
    std::cout << "DELETE   -> Valido     \n";
    std::cout << "HEAD     -> Valido   \n";
    std::cout << "OPTIONS  -> Valido      \n";
}
int main()
{
    // listMethods();
    // return 0;

    // std::string option;
    // std::getline(std::cin, option);

    // std::optional<minipost::HttpMethod> method = minipost::stringToHttpMethod(option);

    // if (!method.has_value())
    // {
    //     std::cout << "Metodo HTTP invalido" << std::endl;
    //     return 1;
    // }

    // minipost::HttpMethod selectedMethod = method.value();

    // std::optional<std::string> methodString = minipost::httpMethodToString(selectedMethod);

    // std::cout << "Metodo HTTP seleccionado: " << methodString.value() << std::endl;
    // return 0;

    // ----------------------------codigo ---------------
    showWelcome();
    showMenu();
    std::cout << "\nSeleccione una opcion: ";
    std::string option;
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
        if (option == "3")
        {
            // std::system("cls");
            showMethod();
            listMethods();
        }
        std::cout << std::endl;
        showMenu();
        std::cout << "\nSeleccione una opcion: ";
        std::getline(std::cin, option);
        std::cout << std::endl;
    }

    return 0;
}