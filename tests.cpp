# include "Cuaternion.h"
# include <iostream>
# include <gtest/gtest.h>


using namespace std;


TEST(CuarternionTest, constructor_ma)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    GTEST_ASSERT_EQ(x.m_a, 1);   
   
}

TEST(CuarternionTest, constructor_mb)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    GTEST_ASSERT_EQ(x.m_b, 2);     
}

TEST(CuarternionTest, constructor_mc)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    GTEST_ASSERT_EQ(x.m_c, 3);     
}

TEST(CuarternionTest, constructor_md)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    GTEST_ASSERT_EQ(x.m_d, 4);     
}

TEST(CuarternionTest, suma_cuarterniones_ma)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x + y;
    GTEST_ASSERT_EQ(z.m_a, 5);     
}

TEST(CuarternionTest, suma_cuarterniones_mb)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x + y;
    GTEST_ASSERT_EQ(z.m_b, 5);     
}

TEST(CuarternionTest, suma_cuarterniones_mc)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x + y;
    GTEST_ASSERT_EQ(z.m_c, 5);     
}

TEST(CuarternionTest, suma_cuarterniones_md)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
    Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x + y;
    GTEST_ASSERT_EQ(z.m_d, 5);     
}

TEST(CuarternionTest, suma_num)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);    
	x = x + 1;
    GTEST_ASSERT_EQ(x.m_a, 2);     
}

TEST(CuarternionTest, suma_num2)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4);  
	int s = 1;
	Cuaternion z = x + s;
    GTEST_ASSERT_EQ(z.m_a, 2);     
}


TEST(CuarternionTest, mul_cuarterniones_ma)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x * y;
 
    GTEST_ASSERT_EQ(z.m_a, -12);     
}

TEST(CuarternionTest, mul_cuarterniones_mb)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x * y;
 
    GTEST_ASSERT_EQ(z.m_b, 6);     
}

TEST(CuarternionTest, mul_cuarterniones_mc)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x * y;
 
    GTEST_ASSERT_EQ(z.m_c, 24);     
}

TEST(CuarternionTest, mul_cuarterniones_md)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion y = Cuaternion(4, 3, 2, 1); 
	Cuaternion z = x * y;
 
    GTEST_ASSERT_EQ(z.m_d, 12);     
}

TEST(CuarternionTest, mul_num_ma)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = x * -1;
 
    GTEST_ASSERT_EQ(z.m_a, -1);     
}

TEST(CuarternionTest, mul_num_mb)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = x * -1;
 
    GTEST_ASSERT_EQ(z.m_b, -2);     
}

TEST(CuarternionTest, mul_num_mc)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = x * -1;
 
    GTEST_ASSERT_EQ(z.m_c, -3);     
}

TEST(CuarternionTest, mul_num_md)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = x * -1;
 
    GTEST_ASSERT_EQ(z.m_d, -4);     
}

TEST(CuarternionTest, conj_ma)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = ~x;
 
    GTEST_ASSERT_EQ(z.m_a, 1);     
}

TEST(CuarternionTest, conj_mb)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = ~x;
 
    GTEST_ASSERT_EQ(z.m_b, -2);     
}

TEST(CuarternionTest, conj_mc)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = ~x;
 
    GTEST_ASSERT_EQ(z.m_c, -3);     
}

TEST(CuarternionTest, conj_md)
{                
    Cuaternion x = Cuaternion(1, 2, 3, 4); 
	Cuaternion z = ~x;
 
    GTEST_ASSERT_EQ(z.m_d, -4);     
}

TEST(CuarternionTest, med)
{                
    Cuaternion x = Cuaternion(1, 1, 1, 1); 
	float z = &x;
 
    GTEST_ASSERT_EQ(z, 2);     
}


int main(int argc, char* argv[]) {

	Cuaternion x = Cuaternion(1, 2, 3, 4);
	Cuaternion y = Cuaternion(4, 3, 2, 1);

	Cuaternion r0 = x + y;
	Cuaternion r1 = x + 1;
	Cuaternion r2 = x + 0.5;
	Cuaternion r3 = x * y;
	Cuaternion r4 = x * 1;
	Cuaternion r5 = x * 0.5;
	Cuaternion r6 = ~x;
	float r7 = &x;

	cout << r0 << endl;
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	cout << r5 << endl;
	cout << r6 << endl;
	cout << r7 << endl;

	::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}