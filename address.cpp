#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>
int main() {
  std::list<int> my_list = { 11, 12, 13, 14 };
 
  

  std::cout << &my_list << '\n';
  std::list<int>::iterator it = my_list.begin();

	for (int x = 0 ; x < my_list.size(); x++) {
		std::cout << "Index " << x <<" has value " << *it << " and address " << &*it << '\n';
    std::advance(it, 1);

    
	}
 
    return 0;
}