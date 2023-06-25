#include "headers/RasterOptions.h"

namespace render_engine {
    RasterOptions::RasterOptions() {
        this->width = 1920;
        this->height = 1080;
    }

    RasterOptions::RasterOptions(int width, int height) {
        this->width = width;
        this->height = height;
    }
}