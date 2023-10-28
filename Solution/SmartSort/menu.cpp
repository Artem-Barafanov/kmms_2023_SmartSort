#include "menu.h"

#include <iostream>

#include "./sortings/ibusko_sortings.hpp"
#include "ioarray.hpp"

void Menu::show_smile() {
    std::cout << char(0) << std::endl;
}

void Menu::sort_by_ibusko_bubble(int arr[], const int arr_size) {
    IOArray::print_array("�������������� ������: ", arr, arr_size);
    IBusko::sort_by_bubble(arr, arr_size);
    IOArray::print_array("��������������� ������: ", arr, arr_size);
}
