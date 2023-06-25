#ifndef INC_3DRENDER_VECTOR3D_H
#define INC_3DRENDER_VECTOR3D_H

namespace components {
    class Vector3D {
    public:
        Vector3D();

        Vector3D(double, double, double);

        Vector3D(Vector3D *);

        double getX() const;

        double getY() const;

        double getZ() const;

        bool setX(double);

        bool setY(double);

        bool setZ(double);

        double getMagnitude() const;

        double dotProduct(Vector3D *) const;

        Vector3D *getNormalized() const;

        Vector3D *multiplyByScalar(double scalar);

        Vector3D *add(Vector3D *);

        Vector3D *add(double x, double y, double z);

        Vector3D *subtract(Vector3D *);

        Vector3D *subtract(double x, double y, double z);

        Vector3D *crossProduct(Vector3D *);

        Vector3D *average(Vector3D *);

    private:
        double x;
        double y;
        double z;
    };
}

#endif
