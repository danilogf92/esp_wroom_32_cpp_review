#ifndef VECTOR3F_HPP
#define VECTOR3F_HPP

class Vector3f
{
  public:
  Vector3f ();
  ~Vector3f ();
  float x;
  float y;
  float z;
  Vector3f operator+(const Vector3f& rhs) const;

  // prefix increment
  Vector3f operator++();
  bool operator==(const Vector3f& rhs);

};
#endif