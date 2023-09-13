#pragma once

class Fixed
{
    private:
        int number;
        int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &original);
        ~Fixed();
        Fixed &operator=(Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};