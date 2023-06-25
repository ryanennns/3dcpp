#include <iostream>
#include "components/Vector3D.h"
#include "components/Ray.h"

using namespace std;
using namespace components;

int main() {
    Vector3D *vector = new Vector3D(1, 2, 3);
    Vector3D *addTo = new Vector3D(1, 2, 3);

    vector->add(addTo)->multiplyByScalar(2);

    cout << vector->getX() << endl;
    cout << vector->getY() << endl;
    cout << vector->getZ() << endl;

    Ray *snickers = new Ray(vector, addTo);

    delete snickers;

    delete vector;
    delete addTo;
    return 0;
}
