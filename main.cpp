#include <iostream>
#include <limits> // Include for std::numeric_limits
#include "text.h"

void clearInput() {
    std::cin.clear(); // Clear the error flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
}

int main(int argc, char const *argv[]) {
    int choice[3]; // Adjusted size for additional choice input
    menu(); // Assume this function displays the main menu

    while (true) {
        std::cout << "Please enter your choice: ";
        
        // Check if the input is numeric or a special character
        std::string input;
        std::cin >> input;

        if (input == "*") {
            // Handle going back to the main menu
            std::cout << "Powrót do menu głównego...\n";
            menu(); // Call the main menu function again
            continue;
        }

        // Attempt to convert the input to an integer
        try {
            choice[0] = std::stoi(input); // Convert input to an integer
        } catch (const std::invalid_argument&) {
            std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
            continue; // Restart the loop
        }

        switch (choice[0]) {
            case 1:
                account();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                std::cin >> input; // Read sub-choice as string

                if (input == "*") {
                    std::cout << "Powrót do menu głównego...\n";
                    menu();
                    continue;
                }

                try {
                    choice[1] = std::stoi(input);
                } catch (const std::invalid_argument&) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    continue;
                }

                switch (choice[1]) {
                    case 1:
                        checkaccount();
                        break;
                    case 2:
                        konto();
                        std::cout << "Proszę wpisać swój wybór podrzędny: ";
                        std::cin >> input;

                        if (input == "*") {
                            std::cout << "Powrót do menu głównego...\n";
                            menu();
                            continue;
                        }

                        try {
                            choice[1] = std::stoi(input);
                        } catch (const std::invalid_argument&) {
                            std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                            continue;
                        }

                        switch (choice[1]) {
                            case 1:
                                doladowanie();
                                break;
                            case 2:
                                account();
                                break;
                            case 3:
                                doladowanie();
                                break;
                        }
                }
                break;

            case 2:
                nagroda();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                if (!(std::cin >> choice[1])) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    clearInput(); // Clear input buffer
                    continue; // Restart the loop
                }
                switch (choice[1]) {
                    case 1:
                        nagroda1();
                        break;
                    case 2:
                        nagroda2();
                        break;
                    case 3:
                        nagroda3();
                        break;
                    case 4:
                        nagroda4();
                        std::cout << "Proszę wpisać swój wybór podrzędny: ";
                        if (!(std::cin >> choice[2])) {
                            std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                            clearInput(); // Clear input buffer
                            continue; // Restart the loop
                        }
                        switch (choice[2]) {
                            case 1:
                                odbierz();  
                                break;
                            case 2:
                                gotowka();
                                break;
                            case 3:
                                gotowka();
                                break;
                        }
                        break;
                    case 5:
                        nagroda5();
                        break;
                    case 6:
                        nagroda6();
                        break;
                }
                break;

            case 3:
                poczta();
                break;

            case 4:
                admin();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                if (!(std::cin >> choice[1])) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    clearInput(); // Clear input buffer
                    continue; // Restart the loop
                }
                switch (choice[1]) {
                    case 1:
                        admin1();
                        break;
                }
                break;

            case 5:
                abonament();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                if (!(std::cin >> choice[1])) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    clearInput(); // Clear input buffer
                    continue; // Restart the loop
                }
                switch (choice[1]) {
                    case 1:
                        TP();
                        break;
                    case 2:
                        train();
                        break;
                    case 3:
                        nonfree();
                        break;
                }
                break;

            case 6: case 7:
                telefon();
                break;

            case 8:
                uslugi();
                break;

            case 9:
                neostrada();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                if (!(std::cin >> choice[1])) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    clearInput(); // Clear input buffer
                    continue; // Restart the loop
                }
                switch (choice[1]) {
                    case 1:
                        poczta();
                        break;
                }
                break;

           case 0:
                pogotowie();
                std::cin.get(); // Wait for user input
                ASTPR();
                std::cout << "Proszę wpisać swój wybór podrzędny: ";
                std::cin >> input;

                if (input == "*") {
                    std::cout << "Powrót do menu głównego...\n";
                    menu();
                    continue;
                }

                try {
                    choice[1] = std::stoi(input);
                } catch (const std::invalid_argument&) {
                    std::cerr << "To nie jest liczba! Proszę spróbować ponownie." << std::endl;
                    continue;
                }

            default:
                std::cerr << "Nieprawidłowy wybór! Proszę spróbować ponownie." << std::endl;
                break;
        } // switch
    } // while
    return 0;
}
