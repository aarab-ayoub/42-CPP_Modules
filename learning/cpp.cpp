#include <iomanip>
#include <iostream>

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

// int main() {
    // MyClass obj(10);

    // std::cout << "Value before: " << obj.getValue() << std::endl;
    // std::cout << "Value after: " << obj.getValue() << std::endl;

    // int a , b;
    // std::string s , t ;
    // std::cout << "enter a et b \n";
    // std::cin >> a >> b;

    // std::cout << "enter s and t \n";
    // std::cin >> s >> t ;

    // std::cout << a  <<  std::setw(10) << b << "\n";
    // std::cout << s  << std::setw(10) << t;

    // int *ptr;
    // int a = 10;
    // int b = 20;

    // ptr = &a;
    // std::cout << *ptr << "\n";
    // std::cout << ptr << "\n";
    // ptr = &b;
    // std::cout << *ptr << "\n";
    // std::cout << ptr << "\n";
    // return 0;
// }



///////////////////////////////////
// #include <iostream>
// #include <string>

// class Contact {
// private:
//     std::string name;

// public:
//     Contact(std::string n) : name(n) {}

//     std::string getNameValue() const {
//         return name;   // returns a copy
//     }

//     const std::string getNameConstValue() {
//         return name;   // returns a const copy
//     }

//     const std::string& getNameRef() const {
//         return name;   // no copy
//     }
// };

// int main() {
//     Contact c("Alice");

//     std::cout << "\n=== 1. Return by VALUE ===\n";
//     std::string a = c.getNameValue();  
//     a = "Bob";                         // OK (modifies the copy)
//     std::cout << "a = " << a << "\n";
    
//     std::cout << "\n=== 2. Return by CONST VALUE ===\n";
//     const std::string b = c.getNameConstValue();
//     // b = "Bob";  // ❌ ERROR: cannot modify const value
//     std::cout << "b = " << b << "\n";

//     std::cout << "\n=== 3. Return by CONST REFERENCE ===\n";
//     const std::string& ref = c.getNameRef();
//     std::cout << "ref = " << ref << "\n";

//     // ref = "Bob";  // ❌ ERROR: you cannot modify a const reference

//     return 0;
// }



///////////////////////////////////

int main()
{
    std::string s = "hello world mi amo ayoub";
    std::string a = "msi";

    std::size_t found = s.find(a);
    if (found == std::string::npos)
    {
        std::cout << "could not found it " ;
    }
    else
        std::cout << "found it on position" << found ;  
    
}