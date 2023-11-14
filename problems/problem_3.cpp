#include <string>
std::string problemSolution3(float height, char S) {
    if ((S == 'M' and height >= 1.85) or (S == 'F' and height >= 1.75)) {
        return "Tall";
    } else if ((S == 'M' and height >= 1.70) or (S == 'F' and height >= 1.60)) {
        return "Normal";
    } else if ((S == 'M' and height < 1.70) or (S == 'F' and height < 1.60)) {
        return "Short";
    }
}
