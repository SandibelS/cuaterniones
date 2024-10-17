#include <iostream>
#include <cmath>
#include "Cuaternion.h"


using namespace std;


Cuaternion::Cuaternion(float a, float b, float c, float d){

   	m_a = a;
    m_b = b;
    m_c = c;
    m_d = d;

}

Cuaternion Cuaternion::operator+(Cuaternion otro){
    return Cuaternion(m_a + otro.m_a, m_b + otro.m_b, m_c + otro.m_c, m_d + otro.m_d);
}

Cuaternion Cuaternion::operator+(float x){
    return Cuaternion(m_a + x, m_b, m_c, m_d);
}

Cuaternion Cuaternion::operator~(){
    return Cuaternion(m_a, -m_b, -m_c, -m_d);
}

Cuaternion Cuaternion::operator*(float x){ 
	return Cuaternion(m_a * x, m_b * x, m_c * x, m_d * x);
}

Cuaternion Cuaternion::operator*(Cuaternion otro){

	float a1 = m_a;
    float b1 = m_b;
    float c1 = m_c;
    float d1 = m_d;

    float a2 = otro.m_a;
    float b2 = otro.m_b;
    float c2 = otro.m_c;
    float d2 = otro.m_d;    

    float a = a1 * a2 - b1 * b2 - c1 * c2 - d1 * d2;
    float b = a1 * b2 + b1 * a2 + c1 * d2 - d1 * c2;
    float c = a1 * c2 - b1 * d2 + c1 * a2 + d1 * b2;
    float d = a1 * d2 + b1 * c2 - c1 * b2 + d1 * a2;

	return Cuaternion(a, b, c, d);

}

float Cuaternion::operator&() {
    return (float)(sqrt( (double)(m_a*m_a + m_b*m_b + m_c*m_c + m_d*m_d) ));
}
