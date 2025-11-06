#pragma once
#include"Object.h"

class IShape :public Object{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
};

class Rectangle : public IShape {
private:
    double _width;
    double _height;
public:
    Rectangle() {
        _width = 0;
        _height = 0;
    }
    Rectangle(double width, double height) {
        _width = width;
        _height = height;
    }
    void setWidth(double width) {
        _width = width;
    }
    void setHeight(double height) {
        _height = height;
    }
    double getWidth() {
        return _width;
    }
    double getHeight() {
        return _height;
    }
    double area() override {
        return _width * _height;
    }
    double perimeter() override {
        return (_width + _height) * 2;
    }
    std::string toString() override {
        return "Rectangle w=" + std::to_string((int)_width) + ", h=" + std::to_string((int)_height);
    }
};

class Square : public IShape {
private:
    double _a;
public:
    Square() {
        _a = 0;
    }
    Square(double a) {
        _a = a;
    }
    void setA(double a) {
        _a = a;
    }
    double getA() {
        return _a;
    }
    double area() override {
        return _a * _a;
    }
    double perimeter() override {
        return _a * 4;
    }
    std::string toString() override {
        return "Square a=" + std::to_string((int)_a);
    }
};

class Circle : public IShape {
private:
    double _radius;
public:
    Circle() {
        _radius = 0;
    }
    Circle(double radius) {
        _radius = radius;
    }
    void setRadius(double radius) {
        _radius = radius;
    }
    double getRadius() {
        return _radius;
    }
    double area() override {
        return _radius * _radius * 3;
    }
    double perimeter() override {
        return _radius * 2 * 3;
    }
    std::string toString() override {
        return "Circle r=" + std::to_string((int)_radius);
    }
};