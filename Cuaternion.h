#ifndef CUATERNION_H
#define CUATERNION_H

#include <iostream> 

class Cuaternion {
public:
      float m_a;
      float m_b;
      float m_c;
      float m_d;

    Cuaternion(float a, float b, float c, float d);
    Cuaternion operator+(Cuaternion otro);
    Cuaternion operator+(float x);
    Cuaternion operator~();
    Cuaternion operator*(float x);
    Cuaternion operator*(Cuaternion otro);
    float operator&();

    friend std::ostream& operator<<(std::ostream& os, const Cuaternion& cuaternion) {

        os << cuaternion.m_a;

        if (cuaternion.m_b >= 0){
            os << " + " << cuaternion.m_b << "i";
        } 
        else {
            os << " - " << cuaternion.m_b * -1 << "i";
        }

        if (cuaternion.m_c >= 0){
            os << " + " << cuaternion.m_c << "j";
        } 
        else {
            os << " - " << cuaternion.m_c * -1 << "j";

        }

        if (cuaternion.m_d >= 0){
            os << " + " << cuaternion.m_d << "k";
        } 
        else {
            os << " - " << cuaternion.m_d * -1 << "k";

        }
        
        return os;
    }

};

#endif
