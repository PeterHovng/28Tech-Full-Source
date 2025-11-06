#pragma once
#include"Object.h"

class IParsable: public Object
{
public:
	virtual Object* parse(std::string input) = 0;
};

class CircleParser : public IParsable {
public:
	std::string toString() override;
	Object* parse(std::string input);
};

class SquareParser : public IParsable {
public:
	std::string toString() override;
	Object* parse(std::string input);
};

class RectangleParser : public IParsable {
public:
	std::string toString() override;
	Object* parse(std::string input);
};