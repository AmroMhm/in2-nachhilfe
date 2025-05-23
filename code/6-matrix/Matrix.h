#ifndef __MATRIX_H_ 
#define __MATRIX_H_ 
#include <iostream>
#include <vector>

class Matrix
{
protected:
    std::vector<std::vector<float>> * m_matrix;
    int * ptr;
public:
    int rows;
    int cols;
private:
    void print_border() const;
public:
    Matrix(int rows, int cols);
    Matrix(const Matrix& other);
    Matrix& operator=(const Matrix &);
    ~Matrix();
    void print(std::ostream& stream) const;
    float& operator[](int index);
    Matrix operator+(const Matrix& other);
    Matrix operator-(const Matrix& other);

    
};

class Vec : public Matrix
{
public:
    public:
    Vec(int rows);
};
class UnitMatrix : public Matrix
{
public:
    public:
    UnitMatrix(int size);
};






std::ostream& operator << (std::ostream& stream, const Matrix& matrix);



#endif 