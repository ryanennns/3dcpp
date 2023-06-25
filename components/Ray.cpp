#include "Ray.h"

namespace components {
    Ray::Ray() {
        origin = new Vector3D();
        direction = new Vector3D();
    }

    Ray::Ray(Vector3D *origin, Vector3D *direction) {
        this->origin = new Vector3D(origin);
        this->direction = direction->getNormalized(); // might be bad !
    }

    Ray::Ray(double originX, double originY, double originZ, double directionX, double directionY, double directionZ) {
        this->origin = new Vector3D(originX, originY, originZ);
        Vector3D *temp = new Vector3D(directionX, directionY, directionZ);
        this->direction = temp->getNormalized();
        delete temp;
    }

    Vector3D *Ray::getOrigin() {
        return this->origin;
    }

    Vector3D *Ray::getDirection() {
        return this->direction;
    }

    Ray *Ray::setOrigin(Vector3D *newOrigin) {
        if (this->origin != nullptr) {
            delete this->origin;
        }
        this->origin = newOrigin;
        return this;
    }

    Ray *Ray::setDirection(Vector3D *newDirection) {
        if (this->direction != nullptr) {
            delete this->origin;
        }
        this->origin = newDirection;
        return this;
    }

    Vector3D *Ray::evaluate(double distance) {
        auto evaluatedPoint = new Vector3D(this->origin);
        auto temporaryDirection = new Vector3D(this->direction);

        evaluatedPoint->add(temporaryDirection->multiplyByScalar(distance));

        delete temporaryDirection;

        return evaluatedPoint;
    }

    Ray *Ray::transform(Vector3D *transformBy) {
        this->origin->add(transformBy);
        this->direction->add(transformBy);
        return this;
    }
}
