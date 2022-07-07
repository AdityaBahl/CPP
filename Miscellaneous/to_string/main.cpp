// CPP program to illustrate
// std::to_string
#include <bits/stdc++.h>

// Driver code
int main()
{

	// Converting float to string
	std::string str1 = std::to_string(12.10);

	// Converting integer to string
	std::string str2 = std::to_string(9999);

	// Printing the strings
	std::cout << str1 << '\n';
	std::cout << str2 << '\n';

    // Converting number to string
    std::string str = std::to_string(9954);

    // Finding 5 in the number
    std::cout << "5 is at position " << str.find('5') + 1;  //find function
	return 0;
}
