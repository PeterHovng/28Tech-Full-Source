#include "IParsable.h"
#include"Object.h"
#include"Utils .h"
#include"IShape.h"

std::string CircleParser::toString() {
	return "Circle";
}

Object* CircleParser::parse(std::string input) {
	std::vector<std::string> token = Utils::String::split(input, "=");
	std::cout << token[1];
	return new Circle(stoi(token[1]));
}

std::string SquareParser::toString() {
	return "Square";
}

Object* SquareParser::parse(std::string input) {
	std::vector<std::string> token = Utils::String::split(input, "=");
	return new Square(stoi(token[1]));
}

std::string RectangleParser::toString() {
	return "Rectangle";
}
Object* RectangleParser::parse(std::string input) {
	std::vector<std::string> token = Utils::String::split(input, ", ");
	std::vector<std::string> width = Utils::String::split(token[0], "=");
	std::vector<std::string> height = Utils::String::split(token[1], "=");
	return new Rectangle(stoi(width[1]), stoi(height[1]));
}