#ifndef VECTOR_H_
#define VECTOR_H_

namespace math
{
    template<typename T>
    class tvec2
    {
    private:
        T x, y;
    public:
        tvec2()
        {
            x = 0;
            y = 0;
        }

        tvec2(T X, T Y)
        {
            x = X;
            y = Y;
        }

        void set(T X, T Y)
        {
            x = X;
            y = Y;
        }

        tvec2 operator*(const tvec2& other)
        {
            return tvec2(x * other.x, y * other.y);
        }

        tvec2 operator/(const tvec2& other)
        {
            return tvec2(x / other.x, y / other.y);
        }
        
        tvec2 operator+(const tvec2& other)
        {
            return tvec2(x + other.x, y + other.y);
        }
        
        tvec2 operator-(const tvec2& other)
        {
            return tvec2(x - other.x, y - other.y);
        }

        void operator*=(const tvec2& other)
        {
            *this = tvec2::operator*(other);
        }

        void operator/=(const tvec2& other)
        {
            *this = tvec2::operator/(other);
        }

        void operator+=(const tvec2& other)
        {
            *this = tvec2::operator+(other);
        }

        void operator-=(const tvec2& other)
        {
            *this = tvec2::operator-(other);
        }

        const T get_x() const
        {
            return x;
        }

        const T get_y() const
        {
            return y;
        }
    };

    template<typename T>
    class tvec3
    {
    private:
        T x, y, z;
    public:
        tvec3()
        {
            x = 0;
            y = 0;
            z = 0;
        }

        tvec3(T X, T Y, T Z)
        {
            x = X;
            y = Y;
            z = Z;
        }

        void set(T X, T Y, T Z)
        {
            x = X;
            y = Y;
            z = Z;
        }

        tvec3 operator*(const tvec3& other)
        {
            return tvec3(x * other.x, y * other.y, z * other.z);
        }

        tvec3 operator/(const tvec3& other)
        {
            return tvec3(x / other.x, y / other.y, z / other.z);
        }
        
        tvec3 operator+(const tvec3& other)
        {
            return tvec3(x + other.x, y + other.y, z + other.z);
        }
        
        tvec3 operator-(const tvec3& other)
        {
            return tvec3(x - other.x, y - other.y, z - other.z);
        }

        void operator*=(const tvec3& other)
        {
            *this = tvec3::operator*(other);
        }

        void operator/=(const tvec3& other)
        {
            *this = tvec3::operator/(other);
        }

        void operator+=(const tvec3& other)
        {
            *this = tvec3::operator+(other);
        }

        void operator-=(const tvec3& other)
        {
            *this = tvec3::operator-(other);
        }

        const T get_x() const
        {
            return x;
        }

        const T get_y() const
        {
            return y;
        }

        const T get_z() const
        {
            return z;
        }
    };

    template<typename T>
    class tvec4
    {
    private:
        T x, y, z, w;
    public:
        tvec4()
        {
            x = 0;
            y = 0;
            z = 0;
            w = 0;
        }

        tvec4(T X, T Y, T Z, T W)
        {
            x = X;
            y = Y;
            z = Z;
            w = W;
        }

        void set(T X, T Y, T Z, T W)
        {
            x = X;
            y = Y;
            z = Z;
            w = W;
        }

        tvec4 operator*(const tvec4& other)
        {
            return tvec4(x * other.x, y * other.y, z * other.z, w * other.w);
        }

        tvec4 operator/(const tvec4& other)
        {
            return tvec4(x / other.x, y / other.y, z / other.z, w / other.w);
        }
        
        tvec4 operator+(const tvec4& other)
        {
            return tvec4(x + other.x, y + other.y, z + other.z, w + other.w);
        }
        
        tvec4 operator-(const tvec4& other)
        {
            return tvec4(x - other.x, y - other.y, z - other.z, w - other.w);
        }

        void operator*=(const tvec4& other)
        {
            *this = tvec4::operator*(other);
        }

        void operator/=(const tvec4& other)
        {
            *this = tvec4::operator/(other);
        }

        void operator+=(const tvec4& other)
        {
            *this = tvec4::operator+(other);
        }

        void operator-=(const tvec4& other)
        {
            *this = tvec4::operator-(other);
        }

        const T get_x() const
        {
            return x;
        }

        const T get_y() const
        {
            return y;
        }

        const T get_z() const
        {
            return z;
        }

        const T get_w() const
        {
            return w;
        }
    };

    typedef tvec2<float> vec2;
    typedef tvec2<double> vec2d;
    typedef tvec2<float> vec2f;
    typedef tvec2<int> vec2i;

    typedef tvec3<float> vec3;
    typedef tvec3<double> vec3d;
    typedef tvec3<float> vec3f;
    typedef tvec3<int> vec3i;

    typedef tvec4<float> vec4;
    typedef tvec4<double> vec4d;
    typedef tvec4<float> vec4f;
    typedef tvec4<int> vec4i;
}

#endif
