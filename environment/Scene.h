#ifndef INC_3DRENDER_SCENE_H
#define INC_3DRENDER_SCENE_H

#include "resources/Shape.h"
#include <vector>

using namespace std;

namespace environment {
    class Scene {
    public:
        vector<Shape> shapes;
    };
}

#endif
