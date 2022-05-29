#include <iostream>
#include <iomanip>

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
    std::cout << std::fixed << std::setprecision(2) << "Ваш счёт: " << p->name << ", " << p->id << ", " << p->amount << "\n";
}

int main() {
    account ac = {"0", 0, 0};

    std::cout << "Введите номер счёта: ";
    std::cin >> ac.id;
    std::cout << "Введите имя владельца: ";
    std::cin >> ac.name;
    std::cout << "Введите баланс: ";
    std::cin >> ac.amount;

    double new_amount = 0;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_amount;

    update(ac, new_amount);
    print(ac);

    return 0;
}