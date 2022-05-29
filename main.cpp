#include <iostream>

struct account {
    std::string name;
    int id;
    double amount;
};

void update(account &ac, double new_amount) {
    account *p = &ac;
    p->amount = new_amount;
}

void print(account &ac) {
    account *p = &ac;
    std::cout << "Ваш счёт: " << ac.name << ", " << ac.id << ", " << ac.amount << "\n";
}

int main() {
    int id;
    std::string name;
    double amount;

    account ac;
    std::cout << "Введите номер счёта: ";
    std::cin >> id;
    std::cout << "Введите имя владельца: ";
    std::cin >> name;
    std::cout << "Введите баланс: ";
    std::cin >> amount;

    ac.id = id;
    ac.name = name;
    ac.amount = amount;

    double new_amount;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_amount;

    update(ac, new_amount);
    print(ac);
}