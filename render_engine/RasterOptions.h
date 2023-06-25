#ifndef INC_3DRENDER_RASTEROPTIONS_H
#define INC_3DRENDER_RASTEROPTIONS_H

namespace render_engine {
    class RasterOptions {
    public:
        int width = 0;
        int height = 0;

        RasterOptions();

        RasterOptions(int, int);
    };
}

#endif //INC_3DRENDER_RASTEROPTIONS_H
