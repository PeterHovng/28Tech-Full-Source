#include"Function.h"

CItem::CItem()
    : _nameIterm(""), _sizeIterm(0), _hidden(false), _applyToChild(false) {}
CItem::CItem(string nameIterm)
    : _nameIterm(nameIterm), _sizeIterm(0), _hidden(false), _applyToChild(false) {}
CItem::CItem(string nameIterm, int sizeIterm)
    : _nameIterm(nameIterm), _sizeIterm(sizeIterm), _hidden(false), _applyToChild(false) {}
string CItem::getNameIterm() const {
    return _nameIterm;
}
void CItem::setNameIterm(const string& nameIterm) {
    _nameIterm = nameIterm;
}
int CItem::getSizeIterm() const {
    return _sizeIterm;
}
void CItem::setSizeIterm(int sizeIterm) {
    _sizeIterm = sizeIterm;
}
bool CItem::getIsHidden() const {
    return _hidden;
}
void CItem::setIsHidden(bool isHidden) {
    _hidden = isHidden;
}
bool CItem::getIsApply() const {
    return _applyToChild;
}
void CItem::setIsApply(bool isApply) {
    _applyToChild = isApply;
}
//---------------
CFile::CFile() :CItem() {};
CFile::CFile(string nameIterm, int sizeIterm) :
    CItem(nameIterm, sizeIterm) {};

void CFile::display(bool hiddenIterm) {
    if (hiddenIterm) {
        cout << "Name file: " << _nameIterm << ", size: " << _sizeIterm << endl;
    }
}
void CFile::setHidden(bool hidden, bool applyToChild) {
    _hidden = hidden;
    _applyToChild = applyToChild;
}

//------------------
CFolder::CFolder() :CItem() {};
CFolder::CFolder(string nameIterm) :CItem(nameIterm) {};
void  CFolder::display(bool hiddenIterm) {
    cout << "Folder: " << _nameIterm << endl;
    for (auto iterm : folder) {
        iterm->display(hiddenIterm);
    }
}
void  CFolder::setHidden(bool hidden, bool applyToChild) {
    _hidden = hidden;
    _applyToChild = applyToChild;
    if (hidden) {
        for (auto iterm : folder) {
            iterm->setHidden(hidden, applyToChild);
        }
    }
}

void  CFolder::add(CItem* iterm) {
    folder.push_back(iterm);
}

CItem* CFolder::removeByName(string nameIterm) {
    CItem* iterm = nullptr;
    for (auto it = folder.begin(); it != folder.end(); ++it) {
        if ((*it)->getNameIterm() == nameIterm) {
            iterm = *it;
            folder.erase(it);
            break;
        }
    }
    return iterm;
}

CItem* CFolder::findByName(string nameIterm) {
    for (CItem* iterm:folder) {
        if (iterm->getNameIterm() == nameIterm) {
            return iterm;
        }
        else
        {
            CFolder* strFolder = dynamic_cast<CFolder*> (iterm);
            if (strFolder != nullptr) {
                CItem* fondIterm = strFolder->findByName(nameIterm);
                if (fondIterm != nullptr) {
                    return fondIterm;
                }
            }
        }
    }
}