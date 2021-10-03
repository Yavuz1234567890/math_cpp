#ifndef MATRIX_H_
#define MATRIX_H_

#define MATRIX_WIDTH 4
#define MATRIX_HEIGHT 4

#include "vector.h"

namespace math
{
    class matrix
    {
    private:
        float data[MATRIX_WIDTH][MATRIX_HEIGHT];
    public:
        matrix();
        
        void fill(float number);
        void set(float e00, float e01, float e02, float e03,
                 float e10, float e11, float e12, float e13,
                 float e20, float e21, float e22, float e23,
                 float e30, float e31, float e32, float e33);
        float* get_pointer();
        const float* get_pointer() const;
        void set_identity(float diagonal);
        void set_element(int row, int column, float number);
        void set_element(int index, float number);
        float get_element(int row, int column);
        float get_element(int index);
        const float get_element(int row, int column) const;
        const float get_element(int index) const;
        void set_row(int row, vec4 vector);
        void set_column(int column, vec4 vector);
        vec4 get_row(int column);
        vec4 get_column(int row);
        float operator[](int index);
        const float operator[](int index) const;
        matrix operator*(matrix other);
        matrix operator/(matrix other);
        matrix operator+(matrix other);
        matrix operator-(matrix other);
        void operator*=(matrix other);
        void operator/=(matrix other);
        void operator+=(matrix other);
        void operator-=(matrix other);
        bool equals(matrix other);
    };
}

#endif
