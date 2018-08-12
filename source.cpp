#include <iostream>
void Hanoi(const int dishes, const char tower_a, const char tower_b,
           const char tower_c);

int main() {
  int no_dishes;
  while (true) {
    system("CLS");
    std::cout << "Enter the number of dishes:\n>>";
    std::cin >> no_dishes;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "\nInvalid Input!\n";
      system("pause");
    } else
      break;
  }
  Hanoi(no_dishes, 'A', 'B', 'C');
  system("pause");
  return 0;
}

void Hanoi(const int dishes, const char tower_a, const char tower_b,
           const char tower_c) {
  if (dishes == 1)
    std::cout << "Plate 1 moves from tower " << tower_a << " to tower "
              << tower_c << '\n';
  else {
    Hanoi(dishes - 1, tower_a, tower_c, tower_b);
    std::cout << "Plate " << dishes << " moves from tower " << tower_a
              << " to tower " << tower_c << '\n';
    Hanoi(dishes - 1, tower_b, tower_a, tower_c);
  }
}