/**
 * @file string_202302251506.cpp
 * @author your name (you@domain.com)
 * @brief 
 * 梁勇 《C++ 程序设计》P319
 * 
 * @version 0.1
 * @date 2023-02-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 #include <iostream>
 #include <sstream>
 using namespace std;

// 10.2.1 构造一个字符串
void testConstruct() {
   string s1 = "Welcome to C++";
   string s2("Welcome to C++");
   string s3;
   char s[] = "Good morning";
   string s4(s);
}

// 10.2.2 追加字符串
void testAppend() {
   string s1("Welcome");
   s1.append(" to C++");

   string s2("Welcome");
   s2.append(" to C++", 0, 5);

   string s3("Welcome");
   s3.append(" to C and C++", 5);

   string s4("Welcome");
   s4.append(4, 'G');
}

// 10.2.3 字符串赋值
void testAssign() {
   string s1("Welcome");
   s1.assign("Dallas");

   string s2("Welcome");
   s2.assign("Dallas, Texas", 0, 5);

   string s3("Welcome");
   s3.assign("Dalla, Texas", 5);

   string s4("Welcome");
   s4.assign(4, 'G');
}

// 10.2.4 函数at, clear, erase及empty
void testFunc1() {
   string s1("Welcome");
   cout << s1.at(3) << endl;
   cout << s1.erase(2, 3) << endl;
   s1.clear();
   cout << s1.empty() << endl;
}

// 10.2.5 函数length、size、capacity和c_str()
void testFunc2() {
   string s1("Welcome");
   cout << s1.length() << endl;
   cout << s1.size() << endl;
   cout << s1.capacity() << endl;

   s1.erase(1, 2);
   cout << s1.length() << endl;
   cout << s1.size() << endl;
   cout << s1.capacity() << endl;
}

// 10.2.6 字符串比较
void testCompare() {
   string s1("Welcome");
   string s2("Welcomg");
   cout << s1.compare(s2) << endl;
   cout << s2.compare(s1) << endl;
   cout<< s1.compare("Welcome") << endl;
}

// 10.2.7 获取字符串
void testSubstr() {
   string s1("Welcome to HTML");
   cout << s1.find("co") << endl;
   cout << s1.find("co", 6) << endl;
   cout << s1.find('o') << endl;
   cout << s1.find('o', 6) << endl;
}

// 10.2.9 字符串插入和替换
void testInsertReplace() {
   string s1("Welcome to HTML");
   s1.insert(11, "C++ and ");
   cout << s1 << endl;

   string s2("AA");
   s2.insert(1, 4, 'B');
   cout << s2 << endl;

   string s3("Welcome to HTML");
   s3.replace(11, 4, "C++");
   cout << s3 << endl;
}

// 10.2.10 字符串运算
void testCalc() {
   // C++提供了一些字符串运算符，以简化字符串操作。
   string s1 = "ABC";
   string s2 = s1;
   for (int i = s2.size() - 1; i >= 0; i--) {
      cout << s2[i];
   }

   cout << endl;
   string s3 = s1 + "DEFG";
   cout <<  s3 << endl;

   s1 += "ABC";
   cout << s1 << endl;

   s1 = "ABC";
   s2 = "ABE";
   cout << (s1 == s2) << endl;
   cout << (s1 != s2) << endl;
   cout << (s1 > s2) << endl;
   cout << (s1 >= s2) << endl;
   cout << (s1 < s2) << endl;
   cout << (s1 <= s2) << endl;
}

// 10.2.11 把数字转换为字符串
void testStr() {
   stringstream ss;
   ss << 3.1415;
   string s = ss.str();
}

int main(int argc, char const* argv[]) {
    // 10.2.1 构造一个字符串
    testConstruct();

   // 10.2.2 追加字符串
   testAppend();
 
   // 10.2.3 字符串赋值
   testAssign();

   // 10.2.4 函数at, clear, erase及empty
   testFunc1();

   // 10.2.5 函数length、size、capacity和c_str()
   testFunc2();

   // 10.2.6 字符串比较
   testCompare();

   // 10.2.7 获取字符串
   testSubstr();

   // 10.2.9 字符串插入和替换
   testInsertReplace();

   // 10.2.10 字符串运算
   testCalc();

   // 10.2.11 把数字转换为字符串
   testStr();

   return 0;
}