#include<iostream>
#include<pthread.h>

using namespace std;

#define num_threads 5

void* hello(void* args){
	cout << "hello world" << endl;
	return 0;
}

int main(){
	pthread_t tids[num_threads];
	for(int i = 0; i < num_threads; i++){
		int ret = pthread_create(&tids[i], NULL, hello, NULL);
		if (ret != 0){
			cout << "error: error_code=" << ret << endl;
		}
	}
	pthread_exit(NULL);
}