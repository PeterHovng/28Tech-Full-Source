#include "ParserFactory.h"

std::string ParserFactory::toString() {
	return "ParserFactory";
}
IParsable* ParserFactory::create(std::string type) {
	return _container[type];
}
void ParserFactory::registerWith(IParsable* parse) {
	_container.insert({ parse->toString(), parse });
}