#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
	// C特性，以0结尾
	const char* ch = "abc";  // ch表示指向“abc”的指针
	char ch1[] = "abc";  //"abc"为一个字符串数组
	cout << strlen(ch) << strlen(ch1) << endl;  // strlen只能用在结尾为0的字符串
	// 
	char ch3[] = {'a', 'b', 'c'};
	char* ch4 = new char[3];
	ch4[1] = 'a'; ch4[2] = 'b'; ch4[3] = 'c';



	// C++字符串类型
	string ch5 = "abc";  // 变量初始化
	string ch6(ch5);  // 字符串复制
	string ch7(10, 'a');  // 生成一个字符串，包含10个‘a’字符
	ch7.~string();
    
    // 字符串操作
    string s, ss;
    s.assign("123");  // 
    ss.assign("aabbccdd");  // 赋值
    swap(s, ss);  // 交换两个字符串内容
    swap(s, ss);  // 交换两个字符串内容
    int len = s.size();  // 返回字符数量
    int len1 = s.length();  // 返回字符数量
	cout << s << len << endl;


	cout << stoi(s) << endl;
	string i = s.substr(1, 1);  // 取出字符子串
	cout << stoi(i) << endl;  // 将字符子串转为数字


	string str;
	getline(cin, str);  // 字符串输入
	cout << str << endl;
}