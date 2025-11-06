#pragma once
#include"Object.h"
#include"IParsable.h"
#include"IShape.h"
class ParserFactory: public Object
{
private:
	std::map<std::string, IParsable*> _container;
public:
	std::string toString() override;
	IParsable* create(std::string type);
	void registerWith(IParsable* parse);
};

