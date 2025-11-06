#include "readFileCSV.h"

std::vector<std::string> readFileCSV::readFile(std::string nameFile) {
	std::ifstream fin;
	std::vector<std::string> data;;
	fin.open(nameFile + ".csv", std::ios::in);
	if (!fin) {
		std::cout << "Can't open file" << std::endl;
	}
	else {
		std::string line;
		while (getline(fin, line)) {
			std::stringstream ss(line);
			std::string temp1;
			while (getline(ss, temp1, '"')){
				std::string temp2;
				getline(ss, temp2, '"');
				data.push_back(temp2);
			}
		}
	}
	return data;
}


