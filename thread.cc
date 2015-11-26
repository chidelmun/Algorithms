#include <iostream>
#include <thread>
using namespace std;

int  func_thread(void){
	cout << "This Thread is running" << endl;
	return 0;
}

int main(int argc, char const *argv[])
{
	thread t1(func_thread);
	t1.detach();
	if(t1.joinable()){
		t1.join();
	}else{
		cout << "Cannot rejoin Thread to main thread " << endl;
	}
	return 0;
}