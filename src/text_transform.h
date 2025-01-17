#ifndef TEXT_TRANSFORM_H
#define TEXT_TRANSFORM_H
#include <string>

class textTransformer {
public:
	static void reverse(std::string &str);
	static int asciiAccumulate(std::string key);
	static void merge(std::string &str1, std::string str2);
};

#endif