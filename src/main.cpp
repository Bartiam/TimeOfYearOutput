#include <iostream>

//#define SPRING
#define SUMMER
//#define FALL
//#define WINTER

int main()
{

	#ifdef SPRING
		std::cout << "Spring";
	#elif defined SUMMER
		std::cout << "Summer";
	#elif defined FALL
		std::cout << "Fall";
	#elif defined WINTER
		std::cout << "Winter";
	#else
		std::cout << "No season";
	#endif

	return 0;
}