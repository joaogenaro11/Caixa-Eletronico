#include <iostream>

int main() {
    double saldo = 1000.00, valor;
    int opcao;
    
    do {
        std::cout << "1 - Depositar\n2 - Sacar\n3 - Ver saldo\n4 - Sair\nOpcao: ";
        std::cin >> opcao;
        
        if (opcao == 1) {
            std::cout << "Valor do deposito: ";
            std::cin >> valor;
            saldo += valor;
        } else if (opcao == 2) {
            std::cout << "Valor do saque: ";
            std::cin >> valor;
            if (valor <= saldo) saldo -= valor;
            else std::cout << "Saldo insuficiente!\n";
        } else if (opcao == 3) {
            std::cout << "Saldo: R$ " << saldo << std::endl;
        }
    } while (opcao != 4);
    
    return 0;
}