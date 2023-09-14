#pragma once

#include <iostream>

class Fixed
{
    private:
        int number;
        int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &original);
        ~Fixed();
        Fixed &operator=(const Fixed &other);
        float toFloat(void)const;
        int toInt(void)const;
        int	getRawBits(void) const;
		void setRawBits(int const raw);	
};

std::ostream &operator<<(std::ostream &output, const Fixed &obj);