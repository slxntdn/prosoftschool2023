#include <iostream>
#include "first_task.h"

int main()
{
    NewA test1(1,2);
    NewA test2(2,3);
    NewA test3(1,2);

    std::cout << "Compare NewA with NewA"  << std::endl;
    std::cout << "NewA(1,2) <= NewA(2,3): " << (test1 <= test2) << std::endl;
    std::cout << "NewA(1,2) >= NewA(2,3): " << (test1 >= test2) << std::endl;
    std::cout << "NewA(1,2) == NewA(2,3): " << (test1 == test2) << std::endl;
    std::cout << "NewA(1,2) != NewA(2,3): " << (test1 != test2) << std::endl;

    std::cout << "NewA(1,2) <= NewA(1,2): " << (test1 <= test3) << std::endl;
    std::cout << "NewA(1,2) >= NewA(1,2): " << (test1 >= test3) << std::endl;
    std::cout << "NewA(1,2) == NewA(1,2): " << (test1 == test3) << std::endl;
    std::cout << "NewA(1,2) != NewA(1,2): " << (test1 != test3) << std::endl;

    std::cout << "\nCompare NewA with int" << std::endl;
    std::cout << "NewA(1,2) <= 3: " << (test1 <= 3) << std::endl;
    std::cout << "NewA(1,2) >= 1: " << (test1 >= 1) << std::endl;
    std::cout << "NewA(1,2) == 1: " << (test1 == 1) << std::endl;
    std::cout << "NewA(1,2) != 2: " << (test1 != 2) << std::endl;

    std::cout << "\nCompare NewA with float" << std::endl;
    std::cout << "NewA(1,2) <= 1.1f: " << (test1 <= 1.1f) << std::endl;
    std::cout << "NewA(1,2) >= 1.1f: " << (test1 >= 1.1f) << std::endl;
    std::cout << "NewA(1,2) == 0.9f: " << (test1 == 0.9f) << std::endl;
    std::cout << "NewA(1,2) == 1.0f: " << (test1 == 1.0f) << std::endl;
    std::cout << "NewA(1,2) != 1.0005f: " << (test1 != 1.0005f) << std::endl;

    std::cout << "\nCompare NewA with double" << std::endl;
    std::cout << "NewA(1,2) <= 1.1: " << (test1 <= 1.1) << std::endl;
    std::cout << "NewA(1,2) >= 1.1: " << (test1 >= 1.1) << std::endl;
    std::cout << "NewA(1,2) == 0.9: " << (test1 == 0.9) << std::endl;
    std::cout << "NewA(1,2) == 1.0: " << (test1 == 1.0) << std::endl;
    std::cout << "NewA(1,2) != 1.0005: " << (test1 != 1.0005) << std::endl;

    std::cout << "\nCompare NewA with char" << std::endl;
    std::cout << "NewA(2,3) <= '3': " << (test2 <= '3') << std::endl;
    std::cout << "NewA(2,3) >= '4': " << (test2 >= '4') << std::endl;
    std::cout << "NewA(2,3) == '1': " << (test2 == '1') << std::endl;
    std::cout << "NewA(2,3) != '3': " << (test2 != '3') << std::endl;

    NewB str1("abc");
    std::string str2 = "abcd";
    std::string str3 = "aaa";
    std::cout << "\nCompare NewB with string" << std::endl;
    std::cout << "NewB(abc) <= abcd: " << (str1 <= str2) << std::endl;
    std::cout << "NewB(abc) >= abcd: " << (str1 >= str2) << std::endl;
    std::cout << "NewB(abc) == abcd: " << (str1 == str2) << std::endl;
    std::cout << "NewB(abc) != abcd: " << (str1 != str2) << std::endl;
    std::cout << "NewB(abc) <= aaa: " << (str1 <= str3) << std::endl;
    std::cout << "NewB(abc) >= aaa: " << (str1 >= str3) << std::endl;
    std::cout << "NewB(abc) == aaa: " << (str1 == str3) << std::endl;
    std::cout << "NewB(abc) != aaa: " << (str1 != str3) << std::endl;

    return 0;
}
