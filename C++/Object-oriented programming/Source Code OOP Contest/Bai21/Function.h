#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class CItem {
protected:
	string _nameIterm;
	int _sizeIterm;
	bool _hidden;
	bool _applyToChild;
public:
	CItem();
	CItem(string nameIterm);
	CItem(string nameIterm, int sizeIterm);
    string getNameIterm() const;
    void setNameIterm(const string& nameIterm);
    int getSizeIterm() const;
    void setSizeIterm(int sizeIterm);
	bool getIsHidden() const;
	void setIsHidden(bool hidden);
	bool getIsApply() const;
	void setIsApply(bool applyToChild);
	virtual void display(bool hiddenIterm) = 0;
	virtual void setHidden(bool hidden, bool applyToChild) = 0;
    virtual ~CItem() {};
};

class CFile :public CItem {
public:
	CFile();
	CFile(string nameIterm, int sizeIterm);
	void display(bool hiddenIterm) override;
	void setHidden(bool hidden, bool applyToChild) override;
};

class CFolder : public CItem {
private:
	vector<CItem*> folder;
public:
	CFolder();
	CFolder(string nameIterm);
	void display(bool hiddenIterm) override;
	void setHidden(bool hidden, bool applyToChild) override;

	void add(CItem* iterm);
	CItem* removeByName(string nameIterm);
	CItem* findByName(string nameIterm);
};