#include"readFileCSV.h"
#include"ParserFactory.h"
#include"Utils .h"
#include"IParsable.h"

int main() {
	ParserFactory factory;
	factory.registerWith(new RectangleParser());
	factory.registerWith(new SquareParser());
	factory.registerWith(new CircleParser());

	readFileCSV read;
	std::vector <std::string> lines = read.readFile("input");

	std::vector<IShape*> shape;
	for (auto& line : lines) {
		std::vector<std::string> token = Utils::String::split(line,": ");
		std::cout << token[0] << "," << token[1] << std::endl;
		IParsable* parser = factory.create(token[0]);

		IShape* ishape = dynamic_cast<IShape*>(parser->parse(token[1]));
		shape.push_back(ishape);
	}

	for (auto sh : shape) {
		std::cout << sh->toString() << ": area="
			<< sh->area() << ", perimeter=" << sh->perimeter() << std::endl;
	}

}