#include <iostream>
#include <boost/filesystem.hpp>

int main (int argc, char** argv)
{
	boost::filesystem::path path = '.';
	boost::filesystem::directory_iterator it(path);

	for (const auto& el : it)
	{
		std::cout << el << '\n';
	}
}
