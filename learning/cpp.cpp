#include <iostream>
#include <iomanip>

using namespace std;
// class MyClass
// {
// 	public:
// 		int num;
// 		string name;
// 		void putstr();
// };

// void MyClass::putstr()
// {
// 	cout << "hello\n";
// }

// int main()
// {
// 	MyClass obj;
// 	MyClass obj2;

// 	obj2.num = 2;
// 	obj2.name = "ayaarab";

// 	obj.num = 1;
// 	obj.name = "aarab";

// 	cout << obj.name << "+" << obj2.name << "\n";
// 	obj.putstr();
// 	cout << obj.num << "+" << obj2.num;
// 	return 0;
// }

// #include <iostream>

// class MyClass {
// private:
//     int value;

// public:
//     MyClass(int v)
//     {
//       value = v;
//     }
//     ~MyClass(){
//       cout << "destructor\n";
//     };

//     int getValue() 
//     {
//         value += 10;
//         return value;
//     }
  
//     void setValue(int v) {
//         value = v;
//     }
// };

int main() {
    // MyClass obj(10);

    // std::cout << "Value before: " << obj.getValue() << std::endl;
    // std::cout << "Value after: " << obj.getValue() << std::endl;

    int a , b;
    std::string s , t ;
    std::cout << "enter a et b \n";
    std::cin >> a >> b;

    std::cout << "enter s and t \n";
    std::cin >> s >> t ;

    std::cout << a  <<  std::setw(10) << b << "\n";
    std::cout << s  << std::setw(10) << t;
    return 0;
}
