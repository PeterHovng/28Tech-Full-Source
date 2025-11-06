#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class KhachSan;
class Tang;
class Phong;
class PhongNghi;
class PhongHoiNghi;
class PhongHoc;
class KhachHang;
class DatPhong;

class KhachSan {
private:
    string tenKS;
    unordered_map<string, Tang*> TANG;
public:
    KhachSan(string name);
    void setName(string name);
    string getName();
    void addTang(Tang* tang);
    void display();
};

class Tang {
private:
    string soTang;
    unordered_map<string, Phong*> PHONG;
public:
    Tang(string soTang);
    void setSoTang(string soTang);
    string getSoTang();
    void addPhong(Phong* phong);
    void display();
};

class Phong {
private:
    string soPhong;
public:
    Phong(string soPhong);
    void setSoPhong(string soPhong);
    string getSoPhong();
    virtual void display();
};

class PhongHoc : public Phong {
public:
    PhongHoc(string soPhong);
    void display() override;
};

class PhongHoiNghi : public Phong {
private:
    string tenPhong;
    unordered_map<string, PhongHoc*> PHONGHOC;
public:
    PhongHoiNghi(string soPhong, string tenPhong);
    void setTenPhong(string tenPhong);
    string getTenPhong();
    void addPhongHoc(PhongHoc* phongHoc);
    void display() override;
};

class PhongNghi : public Phong {
public:
    PhongNghi(string soPhong);
    void display() override;
};

class KhachHang {
private:
    string name;
    string cccd;
    unordered_map<string, DatPhong*> DATPHONG;
public:
    KhachHang(string name, string cccd);
    void setName(string name);
    string getName();
    void setCCCD(string cccd);
    string getCCCD();
    void datPhong(DatPhong* datPhong);
    void display();
};

class DatPhong {
private:
    Phong* phong;
    string startTime;
    string endTime;
public:
    DatPhong(Phong* phong, string startTime, string endTime);
    void setPhong(Phong* phong);
    Phong* getPhong();
    void setStartTime(string startTime);
    string getStartTime();
    void setEndTime(string endTime);
    string getEndTime();
    void display();
};

KhachSan::KhachSan(string name) {
    this->setName(name);
}
void KhachSan::setName(string name) {
    this->tenKS = name;
}
string KhachSan::getName() {
    return this->tenKS;
}
void KhachSan::addTang(Tang* tang) {
    TANG[tang->getSoTang()] = tang;
}
void KhachSan::display() {
    cout << "Khach San: " << tenKS << endl;
    for (auto& pair : TANG) {
        pair.second->display();
    }
}

Tang::Tang(string soTang) {
    this->setSoTang(soTang);
}
void Tang::setSoTang(string soTang) {
    this->soTang = soTang;
}
string Tang::getSoTang() {
    return this->soTang;
}
void Tang::addPhong(Phong* phong) {
    PHONG[phong->getSoPhong()] = phong;
}
void Tang::display() {
    cout << "Tang: " << soTang << endl;
    for (auto& pair : PHONG) {
        pair.second->display();
    }
}

Phong::Phong(string soPhong) {
    this->setSoPhong(soPhong);
}
void Phong::setSoPhong(string soPhong) {
    this->soPhong = soPhong;
}
string Phong::getSoPhong() {
    return this->soPhong;
}
void Phong::display() {
    cout << "Phong: " << soPhong << endl;
}

PhongHoc::PhongHoc(string soPhong) : Phong(soPhong) {}
void PhongHoc::display() {
    cout << "Phong Hoc: " << getSoPhong() << endl;
}

PhongHoiNghi::PhongHoiNghi(string soPhong, string tenPhong) : Phong(soPhong) {
    this->setTenPhong(tenPhong);
}
void PhongHoiNghi::setTenPhong(string tenPhong) {
    this->tenPhong = tenPhong;
}
string PhongHoiNghi::getTenPhong() {
    return this->tenPhong;
}
void PhongHoiNghi::addPhongHoc(PhongHoc* phongHoc) {
    PHONGHOC[phongHoc->getSoPhong()] = phongHoc;
}
void PhongHoiNghi::display() {
    cout << "Phong Hoi Nghi: " << getSoPhong() << " - " << tenPhong << endl;
    for (auto& pair : PHONGHOC) {
        pair.second->display();
    }
}

PhongNghi::PhongNghi(string soPhong) : Phong(soPhong) {}
void PhongNghi::display() {
    cout << "Phong Nghi: " << getSoPhong() << endl;
}

KhachHang::KhachHang(string name, string cccd) {
    this->setName(name);
    this->setCCCD(cccd);
}
void KhachHang::setName(string name) {
    this->name = name;
}
string KhachHang::getName() {
    return this->name;
}
void KhachHang::setCCCD(string cccd) {
    this->cccd = cccd;
}
string KhachHang::getCCCD() {
    return this->cccd;
}
void KhachHang::datPhong(DatPhong* datPhong) {
    DATPHONG[datPhong->getPhong()->getSoPhong()] = datPhong;
}
void KhachHang::display() {
    cout << "Khach Hang: " << name << " - CCCD: " << cccd << endl;
    for (auto& pair : DATPHONG) {
        pair.second->display();
    }
    cout << endl;
}

DatPhong::DatPhong(Phong* phong, string startTime, string endTime) {
    this->setPhong(phong);
    this->setStartTime(startTime);
    this->setEndTime(endTime);
}
void DatPhong::setPhong(Phong* phong) {
    this->phong = phong;
}
Phong* DatPhong::getPhong() {
    return this->phong;
}
void DatPhong::setStartTime(string startTime) {
    this->startTime = startTime;
}
string DatPhong::getStartTime() {
    return this->startTime;
}
void DatPhong::setEndTime(string endTime) {
    this->endTime = endTime;
}
string DatPhong::getEndTime() {
    return this->endTime;
}
void DatPhong::display() {
    cout << "Dat Phong: " << endl;
    phong->display();
    cout << "Thoi gian nhan phong: " << startTime << " | Thoi gian tra phong: " << endTime << endl;
}

int main() {

    KhachSan KhachSan("Khach San Hoang Anh Gia Lai");

    //Tao tang 
    Tang tang1("1");
    Tang tang2("2");
    Tang tang3("3");

    // Tao ophong
    PhongNghi room101("101");
    PhongNghi room102("102");
    PhongHoiNghi room201("201", "Hoi truong B");
    PhongHoc room201A("201A");
    PhongHoc room201B("201B");
    PhongHoiNghi room301("301", "Hoi Truong C");
    PhongHoc room301A("301A");
    PhongHoc room302("302");

    // Them vai phong hoc vao phong hoi nghi
    room201.addPhongHoc(&room201A);
    room201.addPhongHoc(&room201B);
    room301.addPhongHoc(&room301A);

    // Them phong cho tung tang
    tang1.addPhong(&room101);
    tang1.addPhong(&room102);
    tang2.addPhong(&room201);
    tang3.addPhong(&room301);
    tang3.addPhong(&room302);

    // them tang cho khach san
    KhachSan.addTang(&tang1);
    KhachSan.addTang(&tang2);
    KhachSan.addTang(&tang3);

    // them khach hang
    KhachHang kh1("Tran ba Dong", "0123456789");
    KhachHang kh2("Trung Chinh", "9876543210");
    KhachHang kh3("Duc Hiep", "0102030405");

    // Dat phong
    DatPhong dp1(&room101, "02/11/2024 - 12:30:00", "03/11/2004 - 14:30:00");
    DatPhong dp2(&room201, "25/02/2024 - 00:00:00", "28/02/2024 - 00:00:00");
    DatPhong dp3(&room301, "15/02/2024 - 01:00:00", "17/02/2024 - 01:00:00");
    DatPhong dp4(&room302, "16/07/2024 - 01:00:00", "17/07/2024 - 01:00:00");

    // Them khach hang dat phong
    kh1.datPhong(&dp1);
    kh2.datPhong(&dp2);
    kh3.datPhong(&dp3);
    kh3.datPhong(&dp4);

    // hien thi thong tin khach hang
    cout << "Thong tin khach hang:" << endl;
    kh1.display();
    kh2.display();
    kh3.display();

    return 0;
}
