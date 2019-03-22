#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char data[100];
	ofstream file;
	file.open("afile.dat");
	cout << "please input the number:" << endl;
	cin.getline(data, 100);
	file << data << endl;

	cin >> data;
	cin.ignore();
	file << data <<endl;
    file.close();

    ifstream file1;
    file1.open("afile.dat");
    cout << data << endl;
    file1 >> data;
    cout << data << endl;
    file1.close();
}