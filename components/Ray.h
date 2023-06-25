#ifndef INC_3DRENDER_RAY_H
#define INC_3DRENDER_RAY_H

#include "Vector3D.h"

namespace components {
    class Ray {
    public:
        const static bool DEBUG = false;

        Ray();

        Ray(Vector3D *origin, Vector3D *direction);

        Ray(double originX, double originY, double originZ, double directionX, double directionY, double directionZ);

        Vector3D *getOrigin();

        Vector3D *getDirection();

        Ray *setOrigin(Vector3D *newOrigin);

        Ray *setDirection(Vector3D *newDirection);

        Vector3D *evaluate(double distance);

        Ray *transform(Vector3D *transformBy);

    private:
        Vector3D *origin;
        Vector3D *direction;
    };
}
#endif //INC_3DRENDER_RAY_H
