#include "text_transform.h"
#include <string>
#include <algorithm>

void textTransformer::reverse(std::string &str){
	for(size_t i = 0; i < str.length()/2; i++){
		std::swap(str.at(i), str.at(n-i-1));
	}
}

int textTransformer::asciiAccumulate(std::string key){
	int sum = 0;
	for(auto c: key){
		sum += c;
	}
	return sum;
}

void textTransformer::merge(std::string &str1, std::string str2){
	std::string result = "";
	for(size_t i = 0; i < str1.length(); i++){
		result.push_back(str1.at(i));
		result.push_back(str2.at(i % str2.length()));
	}
	str1 = result;
}