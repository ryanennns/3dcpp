#include "ViewPort.h"

namespace render_engine {
    ViewPort::ViewPort() {
        this->eye = nullptr;
        for (int i = 0; i < 4; i++) {
            this->vertices[i] = nullptr;
        }
    }

    ViewPort::~ViewPort() {
        if (this->eye != nullptr) {
            delete this->eye;
        }
        for (auto & vertice : this->vertices) {
            delete vertice;
        }
    }

    vector<vector<Ray>> ViewPort::generateRays(RasterOptions rasterOptions, Vector3D transformCoordinates) {
        vector<vector<Ray>> rays;

        return rays;
    }
}