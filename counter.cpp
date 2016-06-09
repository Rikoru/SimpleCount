#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
	char c = ' ';
	long int count = 0;
	
	time_t startTime;
	time_t endTime;
	double duration;
	double ratio;
	
	time(&startTime); 
	
	std::cout << "Tally increases on 1, decreases on 0.\n(0) ";
	
	while((c = std::cin.get()) != EOF){
		if (c == '\n') std::cout << "(" << count << ") ";
		if (c == '1') count++;
		if (c == '0') count--;
	}
	
	time(&endTime);

	duration = difftime(endTime, startTime) / 60; //calculate in minutes
	ratio = double(count) / (duration); 

	std::cout << "\nCount: " << count << std::fixed
		<< "\nDuration (min): " << std::setprecision(2) << duration
		<< "\nRatio: " << ratio << "\n";

	return 0;
}