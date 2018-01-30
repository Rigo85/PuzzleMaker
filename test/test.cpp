

#include <iostream>
#include <PuzzleMaker.h>

int main(){
	
	auto response = PuzzleMaker::getPuzzle((std::string)"image.jpeg");
	
	std::cout << (response.has_value()?response.value().first:"error!") << std::endl;
	
	return 0;
}
