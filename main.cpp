#include "lodepng/lodepng.h"
#include <iostream>
#include "pixel.h"

int main() {
    std::vector<unsigned char> out;
    unsigned w, h;
    const auto error =
        lodepng::decode(out, w, h, std::string("../BW.png"), LCT_RGB);
    if (error) {
        std::cerr << error << std::endl;
        return 0;
    }

    std::vector<std::vector<Color>> pixels;

}