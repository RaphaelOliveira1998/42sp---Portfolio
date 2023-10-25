#include <iostream>
#include <vector>
#include "command.hpp"
#include "thuesdayDiscount.hpp"
#include "packageReductionDiscount.hpp"

int main() {
    
    std::vector<Article> articles01;
    articles01.push_back(Article("Item1", 20.0, 1));
    articles01.push_back(Article("Item2", 40.0, 1));
    Command* command1 = new ThuesdayDiscountCommand(1, "Thuesday", "Cliente1", articles01);
    
    std::vector<Article> articles02;
    articles02.push_back(Article("Item1", 30.0, 1));
    articles02.push_back(Article("Item2", 65.0, 1));
    Command* command2 = new PackageReductionDiscount(2, "wednesday", "Cliente1", articles02);
    
    std::cout << "Valor da comanda 01: " << command1->get_total_price() << "$." << std::endl;
    std::cout << "Valor da comanda 02: " << command2->get_total_price() << "$." << std::endl;
    
    return 0;
}