/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_36159384_INCLUDED
#define BINARYDATA_H_36159384_INCLUDED

namespace BinaryData
{
    extern const char*   whitered_dial_1010_60x60_horizontal_png;
    const int            whitered_dial_1010_60x60_horizontal_pngSize = 167502;

    extern const char*   whitered_dial_1010_60x60_vertical_png;
    const int            whitered_dial_1010_60x60_vertical_pngSize = 195455;

    extern const char*   whitered_dial_0100_60x60_horizontal_png;
    const int            whitered_dial_0100_60x60_horizontal_pngSize = 168389;

    extern const char*   whitered_dial_0100_60x60_vertical_png;
    const int            whitered_dial_0100_60x60_vertical_pngSize = 195798;

    extern const char*   WhistleTune_png;
    const int            WhistleTune_pngSize = 29784;

    extern const char*   WhistleTune2_png;
    const int            WhistleTune2_pngSize = 29141;

    extern const char*   gaindials_png;
    const int            gaindials_pngSize = 126035;

    extern const char*   wetdrydials_png;
    const int            wetdrydials_pngSize = 127143;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 8;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
