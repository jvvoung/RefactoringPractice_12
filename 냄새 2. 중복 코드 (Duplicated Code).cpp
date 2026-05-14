class Shape {
protected:
  virtual double area() const = 0;

public:
  virtual ~Shape() = default;

  void printArea() const { std::cout << "Area: " << area() << std::endl; }

  double getArea() const { return area(); }

  double getScale() const { return area() * 2; }
};

class Rectangle : public Shape {
private:
  double width;
  double height;

protected:
  double area() const override { return width * height; }

public:
  Rectangle(double width, double height) : width(width), height(height) {}
};

class Triangle : public Shape {
private:
  double base;
  double height;

protected:
  double area() const override { return 0.5 * base * height; }

public:
  Triangle(double base, double height) : base(base), height(height) {}
};