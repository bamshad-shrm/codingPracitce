// Compile command:
// g++ thread.cpp -pthread -o thread

#include <iostream>
#include <unistd.h> // For sleep
#include <thread> // For threading


void process();

int main() {

	std::thread t1(process);	
	std::thread t2(process);
	t1.join();
	t2.join();

}

void process() {
	for(int i=0;i<100;i++)	{
		std::cout << i << "\n";
		/* 
			We must use usleep otherwise the threads would not work at the same time.
			First t1 will perform and then t2.
		*/
		usleep(100000); // Sleep for 100000 microseconds.
	}
}






