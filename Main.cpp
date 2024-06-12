#include <iostream>
#include "Tree.hpp"

int main() {
	setlocale(LC_ALL, "russian");
	int n;

	Tree Oranges{
		"Апельсины",
		205,
		45
	};

	print_tree(Oranges);
	std::cout << "Цена за все плоды: " << full_price(Oranges) << " Руб\n";
	std::cout << "Сколько плодов хотите сорвать? -> ";
	std::cin >> n;
	if (collect(Oranges, n) == 1)
		std::cout << "Ошибка!" << std::endl;
	else
		std::cout << "Сорванные плоды можно продать за " << collect(Oranges, n) << std::endl;

	return 0;
}