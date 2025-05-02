#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    float area;
    char * name;
public:
    // Shape();
    // Shape(float area, char * name);
    Shape(float area = 0.0, char * name = "No Name");
    void show();
    // Are:
    ///  Returns the area fo the shape
    float getArea() const;
    void setArea(float new_area);
};


#endif