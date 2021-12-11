#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    std::ifstream file("inputf.in");
	std::string str;
	std::vector<string> v;
  	while (std::getline(file, str)) {
    	//std::cout << str << "\n";
    	v.push_back(str);
    }
	int count = 0;
	for(unsigned int i = 0; i != v.size()-1; i++) {
    	if(stoi(v[i+1]) > stoi(v[i]))
    		count++;
}
	std::cout << "Part 1: " << count << "\n" ;
	count = 0;
	for(unsigned int i = 0; i != v.size()-3; i++) {
    	if(stoi(v[i])+stoi(v[i+1])+stoi(v[i+2]) < stoi(v[i+1])+stoi(v[i+2])+stoi(v[i+3]))
    		count++;
}
	std::cout << "Part 2: " << count ;
    return 0;
}