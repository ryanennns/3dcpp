#include <iostream>
#include "../components/Vector3D.h"
#include "../components/Ray.h"
#include "../render_engine/headers/RasterOptions.h"
#include "../render_engine/headers/ViewPort.h"

using namespace std;
using namespace components;
using namespace render_engine;

int ViewPortTest() {
    RasterOptions rasterOptions = RasterOptions(5, 5);
    ViewPort viewPort = ViewPort();

    vector<vector<Ray *>> rays = viewPort.generateRays(rasterOptions, Vector3D(0, 0, 0));

    for (int i = 0; i < rays.size(); i++) {
        for (int j = 0; j < rays.at(i).size(); j++) {
            cout << "x: " << i << " y: " << j << endl;
            cout << "origin: " << rays.at(i).at(j)->getOrigin()->getX() << endl;
            cout << "direction: " << rays.at(i).at(j)->getDirection()->getX() << endl;
        }
    }

    return 0;
}
