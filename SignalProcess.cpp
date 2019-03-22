#include<iostream>
#include<csignal>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

void signalHandler(int signum){
	cout << "Interrupt signal (" << signum << ") received";

	// exit(signum);
	exit(signum);
}

int main(){
	signal(SIGINT, signalHandler);

	while(1){
		cout << "going to sleep" <<endl;
		sleep(1);
	}
	return 0;
}