#ifndef INC_3DRENDER_VIEWPORT_H
#define INC_3DRENDER_VIEWPORT_H

#include "vector"
#include "../components/Vector3D.h"
#include "../components/Ray.h"
#include "./RasterOptions.h"

using namespace components;
using namespace std;

namespace render_engine {
    class ViewPort {
    public:
        ViewPort();
        ~ViewPort();
        vector<vector<Ray>> generateRays(RasterOptions rasterOptions, Vector3D transformCoordinates);

    private:
        Vector3D *eye{};
        Vector3D *vertices[4]{};
    };
}

#endif //INC_3DRENDER_VIEWPORT_H
