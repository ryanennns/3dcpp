#include "headers/ViewPort.h"

namespace render_engine {
    ViewPort::ViewPort() {
        this->eye = new Vector3D(0, 0, 0);
        for (int i = 0; i < 4; i++) {
            this->vertices[i] = nullptr;
        }
    }

    ViewPort::~ViewPort() {
        if (this->eye != nullptr) {
            delete this->eye;
        }
        for (auto &vertex: this->vertices) {
            delete vertex;
        }
    }

    vector<vector<Ray *>> ViewPort::generateRays(RasterOptions &rasterOptions, Vector3D transformCoordinates) {
        vector<vector<Ray *>> rays;

        double aspectRatio = rasterOptions.width / rasterOptions.height;

        for (int y = 0; y < rasterOptions.height; y++) {
            rays.push_back(vector<Ray *>());

            for (int x = 0; x < rasterOptions.width; x++) {
                double Px = (x + 0.5) / rasterOptions.width;
                double Py = (y + 0.5) / rasterOptions.height;

                Px = (2 * Px) - 1;
                Py = (2 * Py) - 1;

                // stretches the x coordinates to the appropriate aspect ratio;
                // assumes a horizontal image, not a vertical image
                // vertical images are for losers
                Px = Px * aspectRatio; // accommodate for aspect ratio

                Ray *ray = (new Ray(eye, new Vector3D(Px, Py, zOffset)))->transform(&transformCoordinates);
                rays.at(y).push_back(ray);
            }
        }

        return rays;
    }
}