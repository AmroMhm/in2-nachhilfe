#include "Matrix.h"


Matrix::Matrix(int rows, int cols) :
m_matrix( new std::vector<std::vector<float>> ( cols, std::vector<float>(rows,0))),
rows(rows),
cols(cols)
{}

Matrix::Matrix(const Matrix& other){
    this->cols = other.cols;
    this->rows = other.rows;
    // this->m_matrix = other.m_matrix; // falsch
    this->m_matrix = new std::vector<std::vector<float>>(cols, std::vector<float>(rows,0));
    for(int i = 0; i < other.cols * other.rows; i++){
        (*this)[i] = other[i];
    }
}

Matrix& Matrix::operator=(const Matrix & other){
    if(this != & other){
    delete this->m_matrix;
    
    this->cols = other.cols;
    this->rows = other.rows;

    this->m_matrix = new std::vector<std::vector<float>>(cols, std::vector<float>(rows,0));
    for(int i = 0; i < other.cols * other.rows; i++){
        (*this)[i] = other[i];
    }
    }
    else{
        return * this;
    }

}


Matrix::~Matrix(){
    m_matrix->clear();
    delete m_matrix;
}

Matrix Matrix::operator+(const Matrix& other){
        Matrix result(cols, rows);
        for(int i = 0; i < rows * cols; i++){
            result[i] = (*this)[i] + other[i];
        }
    return result;
}

Matrix Matrix::operator*(const int value){
    Matrix result(cols, rows);
    for(int i = 0; i < rows * cols; i++){
            result[i] = (*this)[i] * value;
    }

    return result;
}


Matrix Matrix::operator-(const Matrix& other){
        Matrix result(cols, rows);
        for(int i = 0; i < rows * cols; i++){
            result[i] = (*this)[i] - other[i];
        }
    return result;
}

void Matrix::print(std::ostream& stream) const {
    print_border();
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols; j++){
            stream << (*m_matrix)[i][j] <<  " ";
        }
        stream << std::endl;
    }
    print_border();

}

void Matrix::print_border() const{
    for(int j = 0; j < cols; j++){
        std::cout << "--";
    }
    std::cout <<  std::endl;
}

float& Matrix::operator[](int index) const {
    int x = index / cols;
    int y = index % cols;
    return (*m_matrix)[x][y];

}

Vec::Vec(int rows): Matrix(rows,0){}
UnitMatrix::UnitMatrix(int size): Matrix(size,size){
    for(int i = 0; i < size; i ++) {
        (*m_matrix)[i][i] = 1;
    }
}

std::ostream& operator << (std::ostream& stream, const Matrix& matrix){
    matrix.print(stream);
    return stream;
}