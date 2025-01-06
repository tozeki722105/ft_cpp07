#include <iostream>

#include "Array.hpp"

#define COMMON_SIZE 3

// void checkLeaks()
// {
// 	system("leaks -q a.out");
// }

int main()
{
	// atexit(checkLeaks);  // 処理の頭に呼び出す
	std::cout << "<<int>>" << std::endl;
	{
		try {
			std::cout << "output test" << std::endl;
			Array<int> iArray(COMMON_SIZE);
			iArray[0] = 100;
			iArray[2] = 100;
			for (unsigned int i = 0; i < iArray.size(); i++) {
				std::cout << i << ": " << iArray[i] << std::endl;
			}

			std::cout << "copy test" << std::endl;
			Array<int> cpIArray(iArray);
			for (unsigned int i = 0; i < cpIArray.size(); i++) {
				std::cout << i << ": " << cpIArray[i] << std::endl;
			}

			std::cout << "equal test" << std::endl;
			Array<int> eqIArray(3);
			eqIArray = cpIArray;
			for (unsigned int i = 0; i < eqIArray.size(); i++) {
				std::cout << i << ": " << eqIArray[i] << std::endl;
			}
			std::cout << "test end" << std::endl;
		} catch (std::exception &e) {
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	std::cout << "\n<<string class>>" << std::endl;
	{
		try {
			std::cout << "output test" << std::endl;
			Array<std::string> sArray(COMMON_SIZE);
			sArray[0] = "test";
			sArray[2] = "test test";
			for (unsigned int i = 0; i < sArray.size(); i++) {
				std::cout << i << ": " << sArray[i] << std::endl;
			}

			std::cout << "copy test" << std::endl;
			Array<std::string> cpSArray(sArray);
			for (unsigned int i = 0; i < cpSArray.size(); i++) {
				std::cout << i << ": " << cpSArray[i] << std::endl;
			}

			std::cout << "equal test" << std::endl;
			Array<std::string> eqSArray(3);
			eqSArray = cpSArray;
			for (unsigned int i = 0; i < eqSArray.size(); i++) {
				std::cout << i << ": " << eqSArray[i] << std::endl;
			}
			std::cout << "test end" << std::endl;
		} catch (std::exception &e) {
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	std::cout << "\n<<const string class>>" << std::endl;
	{
		try {
			std::cout << "output test" << std::endl;
			Array<const std::string> csArray(COMMON_SIZE);
			for (unsigned int i = 0; i < csArray.size(); i++) {
				std::cout << i << ": " << csArray[i] << std::endl;
			}

			// std::cout << "copy test" << std::endl;
			// Array<const std::string> cpCsArray(csArray);
			// for (unsigned int i = 0; i < cpCsArray.size(); i++) {
			// 	std::cout << i << ": " << cpCsArray[i] << std::endl;
			// }

			// std::cout << "equal test" << std::endl;
			// Array<const std::string> eqCsArray(3);
			// eqCsArray = cpCsArray;
			// for (unsigned int i = 0; i < eqCsArray.size(); i++) {
			// 	std::cout << i << ": " << eqCsArray[i] << std::endl;
			// }
			std::cout << "test end" << std::endl;
		} catch (std::exception &e) {
			std::cout << "error: " << e.what() << std::endl;
		}
	}
}
