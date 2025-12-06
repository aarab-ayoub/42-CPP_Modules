#include <iostream>
#include <fstream>

int main(int argc , char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <string2> <string3>" << std::endl;
		return 1;
	}	
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream filename(argv[1]);
	if(!filename.is_open())
	{
		std::cout << "it not a file or cannot open it " << std::endl;
	}
	std::string o_file = argv[1];
	o_file.append(".replace");
	std::ofstream out_file(o_file);

	if(!out_file.is_open())
	{
		std::cout << "it not a file or cannot open it " << std::endl;
	}
	std::string line;
	std::string content;
	while (std::getline(filename, line))
	{
		std::size_t found = line.find(s1);
		while (found != std::string::npos)
		{
			line = line.substr(0, found) + s2 + line.substr(found + s1.length());
			found = line.find(s1, found + s2.length());
		}
		out_file << line << std::endl;
	}
	return 0;
}