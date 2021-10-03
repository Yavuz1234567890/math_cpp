#include "matrix.h"

namespace math
{
    float* matrix::get_pointer()
    {
        return &data[0][0];
    }

    const float* matrix::get_pointer() const
    {
        return &data[0][0];
    }

    matrix::matrix()
    { 
        for(int x = 0; x < MATRIX_WIDTH; x++)
        {
            for(int y = 0; y < MATRIX_HEIGHT; y++)
            {
                data[x][y] = 0;
            }
        }
    }

    void matrix::set_identity(float diagonal)
    {
        data[0][0] = diagonal;
        data[1][1] = diagonal;
        data[2][2] = diagonal;
        data[3][3] = diagonal;
    }

    void matrix::set_element(int row, int column, float number)
    {
        data[row][column] = number;
    }
    
    void matrix::set_element(int index, float number)
    {
        get_pointer()[index] = number;
    }

    float matrix::get_element(int row, int column)
    {
        return data[row][column];
    }

    float matrix::get_element(int index)
    {
        return get_pointer()[index];
    }

    const float matrix::get_element(int row, int column) const
    {
        return data[row][column];
    }

    const float matrix::get_element(int index) const
    {
        return get_pointer()[index];
    }

    void matrix::set_row(int row, vec4 vector)
    {
        set_element(row, 0, vector.get_x());
        set_element(row, 1, vector.get_y());
        set_element(row, 2, vector.get_z());
        set_element(row, 3, vector.get_w());
    }

    void matrix::set_column(int column, vec4 vector)
    {
        set_element(0, column, vector.get_x());
        set_element(1, column, vector.get_y());
        set_element(2, column, vector.get_z());
        set_element(3, column, vector.get_w());
    }

    vec4 matrix::get_row(int column)
    {
        return vec4(get_element(0, column), get_element(1, column), get_element(2, column), get_element(3, column));
    }

    vec4 matrix::get_column(int row)
    {
        return vec4(get_element(row, 0), get_element(row, 1), get_element(row, 2), get_element(row, 3));
    }

    float matrix::operator[](int index)
    {
        return get_pointer()[index];
    }

    const float matrix::operator[](int index) const
    {
        return get_pointer()[index];
    }

    matrix matrix::operator*(matrix other)
    {
        matrix mat;
        for(int x = 0; x < MATRIX_WIDTH; x++)
        {
            for(int y = 0; y < MATRIX_HEIGHT; y++)
            {
                mat.data[x][y] += mat.data[x][y] * other.data[x][y];
            }
        }
        return mat;
    }
    
    matrix matrix::operator/(matrix other)
    {
        matrix mat;
        for(int x = 0; x < MATRIX_WIDTH; x++)
        {
            for(int y = 0; y < MATRIX_HEIGHT; y++)
            {
                mat.data[x][y] = mat.data[x][y] / other.data[x][y];
            }
        }
        return mat;
    }

    matrix matrix::operator+(matrix other)
    {
        matrix mat;
        for(int x = 0; x < MATRIX_WIDTH; x++)
        {
            for(int y = 0; y < MATRIX_HEIGHT; y++)
            {
                mat.data[x][y] = mat.data[x][y] + other.data[x][y];
            }
        }
        return mat;
    }

    matrix matrix::operator-(matrix other)
    {
        matrix mat;
        for(int x = 0; x < MATRIX_WIDTH; x++)
        {
            for(int y = 0; y < MATRIX_HEIGHT; y++)
            {
                mat.data[x][y] = mat.data[x][y] - other.data[x][y];
            }
        }
        return mat;
    }

    void matrix::operator*=(matrix other)
    {
        *this = matrix::operator*(other);
    }

    void matrix::operator/=(matrix other)
    {
        *this = matrix::operator/(other);
    }

    void matrix::operator+=(matrix other)
    {
        *this = matrix::operator+(other);
    }

    void matrix::operator-=(matrix other)
    {
        *this = matrix::operator-(other);
    }
}
