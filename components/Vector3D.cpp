#include "Vector3D.h"
#include <cmath>

namespace components {
    Vector3D::Vector3D() {
        this->x = 0.0;
        this->y = 0.0;
        this->z = 0.0;
    }

    Vector3D::Vector3D(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector3D::Vector3D(Vector3D *copyFrom) {
        this->x = copyFrom->x;
        this->y = copyFrom->y;
        this->z = copyFrom->z;
    }

    Vector3D::Vector3D(Vector3D &copyFrom) {
        this->x = copyFrom.x;
        this->y = copyFrom.y;
        this->z = copyFrom.z;
    }

    double Vector3D::getX() const {
        return this->x;
    }

    double Vector3D::getY() const {
        return this->y;
    }

    double Vector3D::getZ() const {
        return this->z;
    }

    bool Vector3D::setX(double value) {
        this->x = value;
        return true;
    }

    bool Vector3D::setY(double value) {
        this->y = value;
        return true;
    }

    bool Vector3D::setZ(double value) {
        this->z = value;
        return true;
    }

    double Vector3D::getMagnitude() const {
        return sqrt(
                (this->getX() * this->getX())
                + (this->getY() * this->getY())
                + (this->getZ() * this->getZ())
        );
    }

    double Vector3D::dotProduct(Vector3D *dotFrom) const {
        return (this->getX() * dotFrom->getX())
               + (this->getY() * dotFrom->getY())
               + (this->getZ() * dotFrom->getZ());
    }

    Vector3D *Vector3D::getNormalized() const {
        return new Vector3D(
                this->getX() * this->getMagnitude(),
                this->getY() * this->getMagnitude(),
                this->getZ() * this->getMagnitude()
        );
    }

    Vector3D *Vector3D::multiplyByScalar(double scalar) {
        this->setX(this->getX() * scalar);
        this->setY(this->getY() * scalar);
        this->setZ(this->getZ() * scalar);
        return this;
    }

    Vector3D *Vector3D::add(Vector3D *addFrom) {
        this->setX(this->getX() + addFrom->getX());
        this->setY(this->getY() + addFrom->getY());
        this->setZ(this->getZ() + addFrom->getZ());
        return this;
    }

    Vector3D *Vector3D::add(double x, double y, double z) {
        this->setX(this->getX() + x);
        this->setY(this->getY() + y);
        this->setZ(this->getZ() + z);
        return this;
    }

    Vector3D *Vector3D::subtract(Vector3D *subtractFrom) {
        this->setX(this->getX() - subtractFrom->getX());
        this->setY(this->getY() - subtractFrom->getY());
        this->setZ(this->getZ() - subtractFrom->getZ());
        return this;
    }

    Vector3D *Vector3D::subtract(double x, double y, double z) {
        this->setX(this->getX() - x);
        this->setY(this->getY() - y);
        this->setZ(this->getZ() - z);
        return this;
    }

    Vector3D *Vector3D::crossProduct(Vector3D *crossFrom) {
        this->setX((this->getY() * crossFrom->getZ()) - (this->getZ() * crossFrom->getY()));
        this->setY((this->getX() * crossFrom->getZ()) - (this->getZ() * crossFrom->getX()));
        this->setY((this->getX() * crossFrom->getY()) - (this->getY() * crossFrom->getX()));
        return this;
    }

    Vector3D *Vector3D::average(Vector3D *averageFrom) {
        this->setX((this->getX() + averageFrom->getX()) / 2);
        this->setY((this->getY() + averageFrom->getY()) / 2);
        this->setZ((this->getZ() + averageFrom->getZ()) / 2);
        return this;
    }
}
