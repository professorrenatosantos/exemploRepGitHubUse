#include <iostream>

void opcao1() {
    std::cout << "Você escolheu a opção 1.\n";
}

void opcao2() {
    std::cout << "Você escolheu a opção 2.\n";
}

void opcao3() {
    std::cout << "Você escolheu a opção 3.\n";
}

int main() {
    int escolha;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Função 1\n";
        std::cout << "2. Função 2\n";
        std::cout << "3. Função 3\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                opcao1();
                break;
            case 2:
                opcao2();
                break;
            case 3:
                opcao3();
                break;
            case 4:
                std::cout << "Saindo...\n";
                break;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }
    } while (escolha != 4);

    return 0;
}