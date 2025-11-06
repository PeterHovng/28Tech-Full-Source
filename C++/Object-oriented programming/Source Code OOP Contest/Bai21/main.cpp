#include"Function.h"

int main() {
	CFolder C("C"); // (1)
	CFolder System("System");
	CFolder Windows("Windows");
	CFile a_txt("a.txt", 123); // (2)
	CFile b_doc("b.doc", 456);

	System.add(&a_txt); // (3)
	Windows.add(&b_doc);
	C.add(&System); // (4)
	C.add(&Windows);

	std::cout << "Content of folder C ->" << std::endl;
	bool isPrintHiddenItems = false;
	C.display(isPrintHiddenItems); // print hidden items or not? 1/0 (5)
	CItem* p = C.removeByName("System"); // return first removed item (6)
	std::cout << "Content of folder C afer removing folder System ->" << std::endl;
	C.display(false);
	p = C.findByName("b.doc"); // return first founded item (7)
	if (p != NULL) {
		std::cout << "b.doc is found in folder C" << std::endl;
	}
	else {
		std::cout << "b.doc is not found" << std::endl;
	}
	p = C.findByName("a.txt");
	if (p != NULL) {
		std::cout << "a.txt is found" << std::endl;
	}
	else {
		std::cout << "a.txt is not found" << std::endl;
	}
	p = C.findByName("Windows"); // (8)
	bool isHidden;
	bool isAlsoApplyToChildren;
	if (p != NULL) {
		std::cout << "Folder Windows is folder. Content of folder Windows ->" << std::endl;

		isHidden = true; isAlsoApplyToChildren = true;
		// set HIDDEN to folder p and do not change hidden attributes of its sub-items

		p->setHidden(isHidden, isAlsoApplyToChildren); // (9)
		p->display(true);

		// set HIDDEN to folder p and all its items
		isHidden = false; isAlsoApplyToChildren = false;
		p->setHidden(isHidden, isAlsoApplyToChildren); // (10)
		p->display(false);
	}
	else {
		std::cout << "Folder Windows is not found" << std::endl;
	}
	return 0;
}