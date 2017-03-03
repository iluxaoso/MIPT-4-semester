#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <math.h>

struct Vector2
{
private:
	/* Как поля менять будете? Лучше в публик вынести в данном случае */
	double x;
	double y;

public:
	Vector2(double _x = 0, double _y = 0);

	~Vector2();

	int   Vector2::vector2DMP();
	bool  Vector2::vector2OK();

	/*
	FIXIT:
		Vector2 operator +  (const Vector2& other) const;
		Vector2& operator += (const Vector2& other);
		
		Vector2& rotate      (      double   angle    );
		Vector2 getRotated  (      double   angle    );
		
		Vector2 norm() const;
	        Vector2 perp() const;
	*/
	const Vector2 operator +  (const Vector2& other);
	const Vector2 operator -  (const Vector2& other);
	      Vector2 operator += (const Vector2& other);
	      Vector2 operator -= (const Vector2& other);
	      double  operator *= (const Vector2& other);
	      double  operator ^  (const Vector2& other);
	const Vector2 operator *  (const double   k    );
	const Vector2 operator /  (const double   k    );
	      Vector2 rotate      (      double   k    );
	const Vector2 getRotated  (      double   k    );
		  Vector2 operator -  ();

	      double  len () const;
	      Vector2 norm();
	      Vector2 perp();

	friend std::ostream& operator << (std::ostream& stream, const Vector2& v);
	friend std::istream& operator >> (std::istream& stream, Vector2& v);
};

